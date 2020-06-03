#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &v) {
    for(int i = 0; i < v.size() - 1; i++) {
        int min = i;
        for(int j = i + 1; j < v.size(); j++) {
            if(v[j] < v[min]) {
                min = j;
            }
        }
        if(min != i) swap(v[min], v[i]);
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
    v.push_back(102);
    v.push_back(24);
    v.push_back(36);
    v.push_back(14);
    v.push_back(12);
    v.push_back(11);
    v.push_back(97);
    v.push_back(73);
    vToString(v);
    cout << "sorting..." << endl;
    selectionSort(v);
    vToString(v);
}