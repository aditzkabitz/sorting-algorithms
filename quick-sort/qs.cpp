#include <vector>
#include <iostream>

using namespace std;


int partition(vector<int> &v, int left, int right) {
	int pivot = left + (right - left) / 2;
	swap(v[pivot], v[--right]);
	pivot = right;
	
	while(true) {
		while(v[left] < v[pivot]) {
			++left;
		}
		while(left < right && v[right - 1] > v[pivot]) {
			--right;
		}
		if(left >= right) break;
		swap(v[left], v[right - 1]);
	}
	swap(v[left], v[pivot]);
	return left;
}

void quicksort(vector<int> &v, int left, int right) {
	// base case
	if(left + 1 >= right) return;
	
	int pivot = partition(v, left, right);
	
	quicksort(v, left, pivot);
	quicksort(v, pivot + 1, right);

	// inductive case
	
}


void vToString(vector<int> v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}


int main() {
	cout << "hello world" << endl;

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
	mergesort(v);
	vToString(v);	
	return 0;
}




