#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    set<int> v;

    // Correcting insert method calls
    v.insert(3);
    v.insert(30);
    v.insert(33);
    v.insert(45);
    v.insert(2);
    v.insert(12);
    v.insert(22);
    v.insert(0);
    v.insert(7);
    v.insert(20);
 v.insert(15);
    // Iterating using a range-based for loop or iterator
    cout << "Set elements:" << endl;
    for (int i : v) {
        cout << i << endl;
    }

    // Using binary_search for value 24
    cout << "Finding 24: " << binary_search(v.begin(), v.end(), 24) << endl;  // This will return 0 (false)

    // Using upper_bound and lower_bound for value 15
    cout << "Upper bound of 15: " << distance(v.begin(), upper_bound(v.begin(), v.end(), 15)) << endl;
    cout << "Lower bound of 15: " << distance(v.begin(), lower_bound(v.begin(), v.end(), 15)) << endl;

    return 0;
}
