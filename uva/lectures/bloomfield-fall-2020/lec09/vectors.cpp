#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    vector<char> vc;

    //vi.reserve(17);

    cout << "hello, world!" << endl;
    cout << "sizeof vector<int>: " << sizeof(vi) << endl;
    cout << "sizeof vector<char>: " << sizeof(vector<char>) << endl;

    cout << "size and capacity of int vector at start: " << vi.size() << ", " << vi.capacity() << endl;

    for ( int i = 0; i < 20; i++ ) {
        vi.push_back(i*10);
        cout << "added one element; size and capacity of int vector afterward: " << vi.size() << ", " << vi.capacity() << endl;
    }

    return 0;
}
