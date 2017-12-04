#include <set>
#include <iostream>
#include <vector>

/** In this demo
* Filling a set and a multiset
* Playing with the interface
**/

int main() {

    // Creating empty set and multiset
    std::set<int> set;
    std::multiset<int> multiset;


    // Filling with 1-10 ints
    for (int i = 1; i < 11; ++i) {
        set.insert(i);
        multiset.insert(i);
    }


    // Inserting duplicate elements in the multiset
    std::vector<int> duplicates = {1,2,3}; // Note: new vector initializer

    // Note: for-each loop
    for (int d : duplicates) {
        set.insert(d); // No effect
        multiset.insert(d);
    }


    // COUNT: counts the number of elements in the set
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Element " << i << " has\n";
        std::cout << "\t\t" << set.count(i) << " occurrences in the set " << '\n';
        std::cout << "\t\t" << multiset.count(i) << " occurrences in the multiset" << '\n';
    }


    return 0;
}
