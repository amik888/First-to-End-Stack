#include <iostream>
#include <vector>
using namespace std;


void printQueue(vector<int> &queue)
{
	for (long long unsigned int i = 0 ; i < queue.size() ; i++)
	{
		cout << queue[i] << " ";
	}
}

void firstToEnd(vector<int> &queue)
{
	int first = queue[0];
	queue.erase(queue.begin());
	queue.push_back(first);
}


int main()
{
	vector<int> queueOfInts = {5, 1, 2, 3, 4,};
	cout << "Original Queue: ";

	printQueue(queueOfInts);
	firstToEnd(queueOfInts);

	cout << "\nResulting Queue: ";
	printQueue(queueOfInts);

	return 0;

}
