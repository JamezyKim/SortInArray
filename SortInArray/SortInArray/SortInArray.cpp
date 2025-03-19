#include <iostream>
using namespace std;

class Sort {
private:
	int capacity;
	int size;
	int A[10];
public:
	Sort() {
		this->capacity = 10;
		this->size = 0;
	}

	void insert(int element) {
		if (this->size < this->capacity) {
			this->A[size] = element;
			this->size++;
		}
		return;
	}

	void sortInInsert(int* A) {
		for (int i = 1; i < this->capacity; i++) {
			int pivot = A[i];
			int j = i - 1;
			while (j >= 0 && A[j] > pivot) {
				A[j + 1] = A[j];
				j = j - 1;
			}
			A[j + 1] = pivot;
		}
		return;
	}

};





int main() {
	int A[10];
	sortInInsert(A);
	

	return 0;
}