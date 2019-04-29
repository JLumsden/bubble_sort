#include "timer.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int ARRAY_SIZE = 100000;
const string INFILE = "numbers100k.txt";

void bubbleSort(int []);
void swap(int &, int &);

int main() {
	int numbers[ARRAY_SIZE];
	ifstream inputfile;
	
	inputfile.open(INFILE);
	if (!inputfile) {
		return 1;
	}
	
	for (int &val : numbers) {
		inputfile >> val;
	}
	inputfile.close();
	
	cout << "Beginning bubble sort." << endl << endl;
	
	start();
	bubbleSort(numbers);
	stop();
	
	cout << "It took " << executionTime() << " milliseconds to complete the bubble sort." << endl << endl;
	
	return 0;
}

void bubbleSort(int arr[]) {
	int index = 0;
	for (int count = ARRAY_SIZE - 1; count > 0; count--) {
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i +1]);
			}
		}
	}
	return;
}

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}
