#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &v) {
    for(int i = 1; i < v.size(); i++) {
        int j = i;
        int key = v[i];
        while(j > 0 && v[j - 1] > key) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = key;
    }
}

void vToString(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(14);
    v.push_back(103);
    v.push_back(12);
    v.push_back(34);
    v.push_back(22);
    v.push_back(46);
    v.push_back(57);
    v.push_back(1);
    v.push_back(10);
    vToString(v);
    cout << "sorting..." << endl;
    insertionSort(v);
    vToString(v);
}