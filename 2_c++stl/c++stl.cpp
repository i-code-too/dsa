#include<bits/stdc++.h>
using namespace std;

int main(){
    //Pairs
    pair<int, char> p = {1, 'A'};
    cout << p.first << " " << p.second << endl;
    //Nested Pairs
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    //Pairs can be treated as a datatype so we can create arrays with them
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[1].second << endl;

    // Arrays vs Vectors vs Lists:
    // Arrays are fixed-size, contiguous blocks of memory.
    // Vectors are dynamic arrays that can grow or shrink in size.
    // Lists are doubly linked lists that can grow or shrink in size and use iterators to access elements within themselves.
    // Use Arrays when:
    //     i) Size is known at compile time.
    //     ii) Need fast access and no frequent insertions/deletions.
    // Use Vectors when:
    //     i) Size can change dynamically.
    //     ii) Need fast access and occasional/frequent insertions/deletions.
    // Use Lists when:
    //     i) Frequent insertions/deletions are needed at any position.
    //     ii) Access speed is not critical.

    //Vectors - can always change size dynamically
    vector<pair<int, int>> vec; // vector of pair datatype
    vec.push_back({1, 2});
    vec.emplace_back(4, 5); // no need to add curly braces for pair in emplace_back
    // emplace_back usually faster than push_back
    cout << vec[0].first << " " << vec[1].second << endl;

    vector<int> v0; // initializes empty vector => {}
    v0.push_back(1); // v becomes {1}
    v0.emplace_back(2); // v becomes {1, 2}
    cout << v0[0] << endl; // accessing elements
    cout << v0.at(1) << endl; // another way of accessing elements
    cout << v0.back() << endl; // another way of accessing elements - returns last element of vector

    vector<int> v(5); // intializes a vector v of size 5 with zeroes or garbage values depending upon compiler
    v.push_back(1); // increases size of vector v to 6

    vector<int> v1(5, 100); // intializes a vector v1 of size 5 with 100
    vector<int> v2(v1); // intializes a vector v2 as a copy of v1
    
    // Iterators - a pointer-like object that can be used to access elements of a container, such as a vector
    // syntax of iterator is container_or_data_structure<data_type>::iterator variable_name
    vector<int>::iterator iter1 = v0.begin(); // iter points to the memory address of the first element, not the first element itself
    iter1++;
    cout << *iter1 << endl; // prints value of first element
    
    vector<int>::iterator iter2 = v0.end(); // iter points to the memory address right after the memory address of the last element
    iter2--;
    cout << *iter2 << endl; // points to memory address of last element of vector
    
    // Reverse Iterators - syntax of reverse iterator is data_structure<data_type>::reverse_iterator variable_name
    vector<int>::reverse_iterator iter3 = v0.rend(); // iter points to the memory address right before the memory address of the first element
    cout << *iter3 << endl; // prints 0 or garbage value, whichever is in the memory address right before the first element
    iter3--; // technically this should move backwards but since its reverse iterator it moves forward in vector
    cout << *iter3 << endl; // prints first element of vector
    
    vector<int>::reverse_iterator iter4 = v0.rbegin(); // iter points to the memory address of the last element
    cout << *iter4 << endl; // prints last element of vector
    iter4++; // technically this should move forward but since its reverse iterator it moves backwards in vector
    cout << *iter4 << endl; // prints first element of vector
    
    // to iterate whole vector with an iterator
    for(vector<int>::iterator it=v0.begin(); it!=v0.end(); it++){ // prints all elements of v0
        cout << *it << " ";
    }
    cout << endl;
    // OR until 'it' is less than vector's end //
    for(vector<int>::iterator it=v0.begin(); it<v0.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // OR using auto data type //
    // auto data type automatically assigns the data type of the variable according to it's value
    // while the auto keyword allows the compiler to infer the type of a variable from its initializer, 
    // the type remains fixed once determined which means it is static data type, not a dynamically (changing) data type
    for(auto it=v0.begin(); it<v0.end(); it++){
        cout << *it << " "; // auto assigns iterator data type to 'it'
    }
    cout << endl;
    // OR by using a for-each loop //
    for(auto it:v){ // means for it on each of v => auto it becomes int here since v contains int values
        cout << it << " "; // auto assigns int data type to 'it' here
    }
    cout << endl;
    
    // to DELETE an element in the vector => vector.erase(iterator);
    // REMEMBER: after deleting an element, the elements after it will be reshuffled
    // so that vector again stores the remaining values in contiguous locations
    v1 = {100, 200, 300, 400, 500};
    v1.erase(v1.begin()+1); // deletes v1[1]
    for(vector<int>::iterator it=v1.begin(); it<v1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // OR to DELETE from a start position to an end position => vector.erase(start_address, address_right_after_the_end) //
    v1.erase(v1.begin()+1, v1.begin()+4); // deletes v1[1] to v1[3], but not v1[4] => [start, end)
    for(vector<int>::iterator it=v1.begin(); it<v1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    // to INSERT an element
    
    return 0;
}