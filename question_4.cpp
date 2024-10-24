#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    vector<int> firstHalf;

    // Store the first half of the queue in a vector
    for (int i = 0; i < n / 2; ++i) {
        firstHalf.push_back(q.front());
        q.pop();
    }

    // Interleave the first half with the second half
    for (int i = 0; i < n / 2; ++i) {
        q.push(firstHalf[i]);
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Input Queue: ";
    queue<int> temp = q;  // Temporary queue to display the contents
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    interleaveQueue(q);

    cout << "Output Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
