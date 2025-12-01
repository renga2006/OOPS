#include <raylib.h>
#include <iostream>
class Paddle {
public:
    Rectangle rect;
    float speed;
    Color color;

    Paddle(float x, float y, float w, float h, float s, Color c) {
        rect = {x, y, w, h};
        speed = s;
        color = c;
    }

    void MoveUp() {
        if (rect.y > 0) rect.y -= speed;
    }

    void MoveDown(int screenHeight) {
        if (rect.y + rect.height < screenHeight) rect.y += speed;
    }

    void Draw() {
        DrawRectangleRec(rect, color);
    }
};

class Ball {
public:
    Vector2 pos;
    float size;
    float speedX, speedY;
    Color color;

    Ball(float x, float y, float s, float sx, float sy, Color c) {
        pos = {x, y};
        size = s;
        speedX = sx;
        speedY = sy;
        color = c;
    }
    void Move() {
        pos.x += speedX;
        pos.y += speedY;
    }

    void BounceVertical(int screenHeight) {
        if (pos.y <= 0 || pos.y >= screenHeight)
            speedY *= -1;
    }

    void BouncePaddle(Rectangle paddle) {
        if (CheckCollisionCircleRec(pos, size, paddle)) {
            speedX *= -0.9f;  // add speed
        }
    }

    void Draw() {
        DrawCircleV(pos, size, color);
    }

    void Reset(int screenWidth, int screenHeight, bool directionRight) {
        pos = { (float)screenWidth/2, (float)screenHeight/2 };
        speedX = directionRight ? 6.0f : -6.0f;
        speedY = 4.0f;
    }
};

class Game {
public:
    int screenWidth, screenHeight;
    Color bgColor;

    Paddle leftPaddle;
    Paddle rightPaddle;
    Ball ball;

    int score1 = 0;
    int score2 = 0;

    bool paused = false;
    bool started = false;
    bool gameOver = false;

    int winningScore = 10;

    Game()
        : screenWidth(900),
          screenHeight(600),
          bgColor({0,0,70,1}),
          leftPaddle(30, 240, 20, 120, 9.0f, RED),
          rightPaddle(850, 240, 20, 120, 9.0f, BLUE),
          ball(450, 300, 15, 5.0f, 4.0f, YELLOW)
    {}
    void Init() {
        InitWindow(screenWidth, screenHeight, "PONG - C++ OOP Version");
        SetTargetFPS(120);
    }
    void Update() {
        if (!started) {
            if (IsKeyPressed(KEY_ENTER)) started = true;
            return;
        }
        if (gameOver) {
            if (IsKeyPressed(KEY_R)) ResetGame();
            return;
        }
        // Pause toggle
        if (IsKeyPressed(KEY_P)) paused = !paused;
        if (!paused) {
            // Player controls
            if (IsKeyDown(KEY_W)) leftPaddle.MoveUp();
            if (IsKeyDown(KEY_S)) leftPaddle.MoveDown(screenHeight);
            if (IsKeyDown(KEY_UP)) rightPaddle.MoveUp();
            if (IsKeyDown(KEY_DOWN)) rightPaddle.MoveDown(screenHeight);
            // Ball movement
            ball.Move();
            ball.BounceVertical(screenHeight);
            // Paddle bounce
            if (CheckCollisionCircleRec(ball.pos, ball.size, leftPaddle.rect) ||
                CheckCollisionCircleRec(ball.pos, ball.size, rightPaddle.rect)) {
                ball.speedX *= -1.1f;
            }
            // Scoring
            if (ball.pos.x <= 0) {
                score2++;
                ball.Reset(screenWidth, screenHeight, true);
            }
            if (ball.pos.x >= screenWidth) {
                score1++;
                ball.Reset(screenWidth, screenHeight, false);
            }
            // Winner check
            if (score1 == winningScore || score2 == winningScore)
                gameOver = true;
        }
    }
    void DrawStartMenu() {
        DrawText("PONG GAME", 300, 120, 50, WHITE);
        DrawText("MULTIPLAYER MODE ONLY", 260, 200, 25, WHITE);
        DrawText("Press ENTER to START", 280, 260, 25, WHITE);

        DrawText("Player 1: W = UP, S = DOWN", 260, 340, 20, RED);
        DrawText("Player 2: Arrow Keys", 260, 370, 20, BLUE);
    }
    void DrawGameOver() {
        if (score1 == winningScore)
            DrawText("PLAYER 1 WINS!", 300, 250, 40, RED);
        else
            DrawText("PLAYER 2 WINS!", 300, 250, 40, BLUE);

        DrawText("Press R to Restart", 300, 320, 30, WHITE);
    }
    void Draw() {
        BeginDrawing();
        ClearBackground(bgColor);
        if (!started) {
            DrawStartMenu();
            EndDrawing();
            return;
        }
        if (gameOver) {
            DrawGameOver();
            EndDrawing();
            return;
        }
        leftPaddle.Draw();
        rightPaddle.Draw();
        ball.Draw();
        // Middle dividing line
        DrawLine(screenWidth/2, 0, screenWidth/2, screenHeight, DARKGRAY);
        // Scores
        DrawText(TextFormat("%d", score1), screenWidth/2 - 60, 20, 40, SKYBLUE);
        DrawText(TextFormat("%d", score2), screenWidth/2 + 40, 20, 40, ORANGE);
        // Pause
        if (paused)
            DrawText("PAUSED", screenWidth/2 - 80, screenHeight/2 - 20, 40, RED);

        EndDrawing();
    }
    void ResetGame() {
        score1 = score2 = 0;
        ball.Reset(screenWidth, screenHeight, true);
        gameOver = false;
    }
    void Close() {
        CloseWindow();
    }
};
int main() {
    Game pong;
    pong.Init();
    while (!WindowShouldClose()) {
        pong.Update();
        pong.Draw();
    }
    pong.Close();
    return 0;
}
