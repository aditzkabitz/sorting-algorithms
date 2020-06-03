#include <iostream>
#include <vector>

using namespace std;




void merge(vector<int> &v, int start, int mid, int end) {
	vector<int> left(mid - start + 1);
	vector<int> right(end - mid);

	for(int i = 0; i < left.size(); i++) {
		left[i] = v[start + i];
	}

	for(int i = 0; i < right.size(); i++) {
		right[i] = v[mid + 1 + i];
	}

	int l = 0, r = 0;
	int cur = start;

	while(l < left.size() && r < right.size()) {
		if(left[l] < right[r]) {
			v[cur++] = left[l++];
		} else {
			v[cur++] = right[r++];
		}
	}

	while(l < left.size()) v[cur++] = left[l++];
	while(r < right.size()) v[cur++] = right[r++];
}


void mergesort(vector<int> &v, int start, int end) {
	if(start < end) {
		int mid = start + (end - start) / 2;
		
		mergesort(v, start, mid);
		mergesort(v, mid + 1, end);

		merge(v, start, mid, end);
	}
}

void vToString(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}



int main() {
	vector<int> v;
        v.push_back(5);
        v.push_back(2);
        v.push_back(7);
        v.push_back(10);
        v.push_back(4);
        v.push_back(12);
        v.push_back(24);
        v.push_back(103);
        v.push_back(12309);
        v.push_back(123);
        v.push_back(8823);
        v.push_back(9823);
        v.push_back(4721);
        v.push_back(4722);
        v.push_back(986234);
	vToString(v);
	mergesort(v, 0, v.size() - 1);
	vToString(v);
}
