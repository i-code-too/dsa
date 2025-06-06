#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int x;
    cin >> x;
    cout << "Hey " << x << endl;
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}