#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> leastGreaterElement(vector<int> &arr) {
    stack<int> ans;
    vector<int> don(arr.size(), -1); // Initialize the vector with -1

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!ans.empty() && ans.top() < arr[i]) { // Use <= here
            ans.pop();
        }
        if (!ans.empty()) {
            don[i] = ans.top();
        }
        ans.push(arr[i]);
    }
    return don;
}

int main() {
    vector<int> arr = {5, 6, 7, 2};
    vector<int> ar = leastGreaterElement(arr);

    for (int i = 0; i < ar.size(); i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}
