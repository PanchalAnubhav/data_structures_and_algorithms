/**
 * @struct PairHash
 * @brief A custom hash function object (functor) for std::pair<int, int>.
 *
 * C++ does not provide a default hash implementation for std::pair. This struct 
 * defines a custom hashing algorithm so that a std::pair<int, int> can be used 
 * as a key in unordered associative containers, such as std::unordered_map or 
 * std::unordered_set.
 *
 * @details The algorithm computes the hash by extracting the default std::hash 
 * for both the 'first' and 'second' integer elements. To prevent symmetric 
 * hash collisions (where pair (A, B) produces the same hash as pair (B, A)), 
 * a bitwise left shift (<< 1) is applied to the hash of the second element 
 * before combining them using a bitwise XOR (^).
 *
 * @param p A constant reference to the std::pair<int, int> to be hashed.
 * @return size_t The computed unique hash value for the provided pair.
 */


 
#include<bits/stdc++.h>
using namespace std;

struct PairHash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

void unordered_map_decleration(){
    unordered_map<int,int> ump;
    unordered_map<int, pair<int,int>> ump2;
    unordered_map<pair<int,int>, int, PairHash> ump3;
}

void unordered_map_insertion_and_traversal(){
    unordered_map<int,int> ump;
    ump.insert({1,1});
    ump.insert({2,2});
    ump.insert({3,3});
    ump.insert({2,4}); // duplicate key, will overwrite the previous value

    cout <<"unordered_map elements are" << endl;
    for(auto it : ump){
        cout << it.first << " " << it.second << endl;
    }

}

int main(){
    unordered_map_decleration();
    unordered_map_insertion_and_traversal();
    return 0;
}
