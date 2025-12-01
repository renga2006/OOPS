#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main() {
    vector<int> arr = {1, 11, 5, 3, 8};
    int k = 3;
    deque<int> dq;    
    vector<int> ans;  
    for (int i = 0; i < arr.size(); i++) {
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }
    for (int x : ans)
        cout << x << " ";
}
