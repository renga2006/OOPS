#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> num = {-1,8,-5, 0, 1,-3, 2, -1};
    vector<vector<int>> result;
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++)
    {
        if (i > 0 && num[i] == num[i - 1])
            continue;
        int left = i + 1;
        int right = num.size() - 1;
        while (left < right)
        {
            int sum = num[i] + num[left] + num[right];
            if (sum == 0)
            {
                result.push_back({num[i], num[left], num[right]});
                while (left < right && num[left] == num[left + 1])
                    left++;
                while (left < right && num[right] == num[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    cout<<"These are the pair were their sum is equal to zero"<<endl;
    for (auto it : result) {
        cout << it[0] << " " << it[1] << " " << it[2] << endl;
    }
    return 0;
}
