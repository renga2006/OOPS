#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    vector<int> arr = {2,7,5,4,3,8,1,9,4,0};
    int target = 8;
    unordered_map<int, bool> seen;
    cout<<"The pair which is equal to target: "<<target<<endl;  
    for (int num : arr) {
        int complement = target - num;
        if (seen[complement] && !seen[num]) {
            int a = min(num, complement);
            int b = max(num, complement);
            cout << a << " , " << b<< endl;
        }
        seen[num] = true;
    }

    return 0;
}
