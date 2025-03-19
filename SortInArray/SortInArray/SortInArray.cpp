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

	void display() {
		int count = 0;
		while (count < this->size) {
			cout << A[count];
			if (count < this->size-1) {
				cout << " -> ";
			}
			count++;
		}
		return;
	}

	void swap(int firstIndex, int secondIndex) {
		int temp = A[firstIndex];
		A[firstIndex] = A[secondIndex];
		A[secondIndex] = temp;
		return;
	}

	void sortInInsert() {
		for (int i = 1; i < this->size; i++) {
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

	void sortInSelection() {
		for (int i = 1; i <= this->size - 1; i++) {
			int j = i - 1;
			int k = j;
			while (k < this->size) {
				if (this->A[k] < this->A[j]) {
					j = k;
				}
				k++;
			}
			swap(i - 1, j);
		}
		return;
	}
};

int main() {
	Sort s;
	s.insert(9);
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.sortInSelection();

	s.display();

	return 0;
}