/* Next Greater Element: For each element in an array, find the next greater element to
 its right using a stack.*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    vector<int> arr = {5,3,8,12,11,18};
    stack<int> st;
    cout<<"The next greater element to its right "<<endl;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.empty())
            cout << arr[i] << " -> -1" << endl;
        else
            cout << arr[i] << " -> " << st.top() << endl;

        st.push(arr[i]);
    }
    return 0;
}
