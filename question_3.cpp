#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void findFirstNegativeInWindows(const vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> result;

    for (int i = 0; i < arr.size(); ++i) {
        // Remove elements not in the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Add the current element's index if it's negative
        if (arr[i] < 0) {
            dq.push_back(i);
        }

        // If we've reached the size of the first window
        if (i >= k - 1) {
            // If the deque is not empty, the front is the first negative in this window
            if (!dq.empty()) {
                result.push_back(arr[dq.front()]);
            } else {
                result.push_back(0);
            }
        }
    }

    // Print the result
    for (int neg : result) {
        cout << neg << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;

    cout << "Input: arr[] = { ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "}, k = " << k << endl;

    cout << "Output: ";
    findFirstNegativeInWindows(arr, k);

    return 0;
}
