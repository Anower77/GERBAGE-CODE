#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Student {
    int roll;
    string name;
    string gender;
};

void solveTestCase(int caseNumber) {
    int n, q;
    cin >> n >> q;

    // Map to store students data by room number
    map<int, vector<Student>> rooms;

    // Read student data
    for (int i = 0; i < n; ++i) {
        int roll, room;
        string name, gender;
        cin >> roll >> name >> room >> gender;
        rooms[room].push_back({roll, name, gender});
    }

    // Read queries
    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    // Output results for the current test case
    cout << "Case #" << caseNumber << ":\n";
    for (int i = 0; i < q; ++i) {
        int room = queries[i];
        cout << "Query #" << (i + 1) << ":\n";
        if (rooms.find(room) == rooms.end() || rooms[room].empty()) {
            cout << "No Student\n";
        } else {
            // Sort students by roll number
            sort(rooms[room].begin(), rooms[room].end(), [](const Student& a, const Student& b) {
                return a.roll < b.roll;
            });

            // Print students in the room
            for (const auto& student : rooms[room]) {
                cout << student.roll << " " << student.name << " " << student.gender << "\n";
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        solveTestCase(i);
    }

    return 0;
}
