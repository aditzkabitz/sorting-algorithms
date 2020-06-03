#include <vector>
#include <iostream>

using namespace std;

void bubbleSort(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] > v[j]) swap(v[i], v[j]);
        }
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
    v.push_back(10);
    v.push_back(13);
    v.push_back(1);
    v.push_back(102);
    v.push_back(56);
    v.push_back(34);
    vToString(v);
    bubbleSort(v);
    cout << "sorting..." << endl;
    vToString(v);
}