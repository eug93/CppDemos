#include <map>
#include <iostream>

int main() {

    // Creating a new mepty map.
    // KEYS: characters
    // VALUES: ints
    std::map<char, int> map;

    // Storing elements in the map
    map['b'] = 100;
    map['a'] = 200;
    map['c'] = 300;

    std::cout << "My map has " << map.size() << " elements" << '\n';

    // Map iterator: std::map<char,int>::iterator
    // Note: a map is implemented using a sorted search tree.
    // Searching goes from the smallest to the biggest key.
    for (auto mapIter = map.begin(); mapIter != map.end(); ++mapIter) {
        std::cout << "Key = " << mapIter->first << " ";
        std::cout << "Value = " << mapIter->second << '\n';
    }

    // Finding in a map
    char key = 'x';
    std::map<char, int>::iterator find_a = map.find(key);
    if (find_a == map.end()) {
        std::cout << "Element '" << key << "' not found" << '\n';
    }
    else {
        std::cout << "Element 'a' was found, it's value is: ";
        std::cout << find_a->second << '\n';
    }


    std::multimap<char, int> multimap;
    multimap.insert(std::make_pair('b', 100));
    multimap.insert(std::make_pair('a', 200));
    multimap.insert(std::make_pair('c', 300));

    multimap.insert(std::make_pair('b', 500));
    multimap.insert(std::make_pair('a', 500));
    multimap.insert(std::make_pair('c', 500));

    std::cout << "My multimap has " << multimap.size() << " elements" << '\n';

    for (auto mapIter = multimap.begin(); mapIter != multimap.end(); ++mapIter){
        std::cout << "Key = " << mapIter->first << " ";
        std::cout << "Value = " << mapIter->second << '\n';
    }

    return 0;
}