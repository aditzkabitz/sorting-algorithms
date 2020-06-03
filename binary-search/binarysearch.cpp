
#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int> v, int target) {
	int low = 0;
	int high = v.size() - 1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(v[mid] == target) {
			return mid;
		} else if(v[mid] < target) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return -1;
}

void vToString(vector<int> v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(8);
	v.push_back(12);
	v.push_back(15);
	v.push_back(16);
	vToString(v);
	cout << "indices:" << endl;

	for(int i = 0; i < v.size(); i++) {
		cout << i << " ";
	}	
	cout << endl;

	cout << "searching for 1: found at index " << binarySearch(v, 1) << endl;
	cout << "searching for 3: found at index " << binarySearch(v, 3) << endl;
	cout << "searching for 4: found at index " << binarySearch(v, 4) << endl;
	cout << "searching for 5: found at index " << binarySearch(v, 5) << endl;
	cout << "searching for 8: found at index " << binarySearch(v, 8) << endl;
	cout << "searching for 12: found at index " << binarySearch(v, 12) << endl;
	cout << "searching for 15: found at index " << binarySearch(v, 15) << endl;
	cout << "searching for 16: found at index " << binarySearch(v, 16) << endl;
}
