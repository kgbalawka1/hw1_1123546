#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

using namespace std;

void printNextGreaterElement(const vector<int>& arr) {
    stack<int> s;
    vector<int> nge(arr.size(), -1);

    for (int i = 0; i < arr.size(); ++i) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            nge[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    cout << "Next Greater Element (NGE):" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " --> " << (nge[i] != -1 ? to_string(nge[i]) : "-1") << endl;
    }

    cout << "\nExplanation:" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        if (nge[i] != -1) {
            cout << arr[i] << " is less than " << nge[i] << " which is the next greater element." << endl;
        } else {
            cout << arr[i] << " is the largest element, so its NGE is -1." << endl;
        }
    }
}

int main() {
    string input;
    cout << "Input: arr[] = [ ";
    getline(cin, input);
    stringstream ss(input);
    vector<int> arr;
    int number;

    while (ss >> number) {
        arr.push_back(number);
        if (ss.peek() == ',') ss.ignore();
    }

    printNextGreaterElement(arr);
    return 0;
}
