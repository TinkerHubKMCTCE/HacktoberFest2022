// C++ program to implement Priority Queue
// using Arrays
#include <bits/stdc++.h>
using namespace std;


struct item {
	int value;
	int priority;
};


item pr[100000];


int size = -1;


void enqueue(int value, int priority)
{

	size++;


	pr[size].value = value;
	pr[size].priority = priority;
}

int peek()
{
	int highestPriority = INT_MIN;
	int ind = -1;

	for (int i = 0; i <= size; i++) {

		if (highestPriority == pr[i].priority && ind > -1
			&& pr[ind].value < pr[i].value) {
			highestPriority = pr[i].priority;
			ind = i;
		}
		else if (highestPriority < pr[i].priority) {
			highestPriority = pr[i].priority;
			ind = i;
		}
	}

	return ind;
}

void dequeue()

	int ind = peek();

	for (int i = ind; i < size; i++) {
		pr[i] = pr[i + 1];
	}

	size--;
}

// Driver Code
int main()
{
	enqueue(10, 2);
	enqueue(14, 4);
	enqueue(16, 4);
	enqueue(12, 3);

	int ind = peek();

	cout << pr[ind].value << endl;
	dequeue();

	ind = peek();
	cout << pr[ind].value << endl;
	dequeue();

	ind = peek();
	cout << pr[ind].value << endl;

	return 0;
}
