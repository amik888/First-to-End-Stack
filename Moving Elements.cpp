#include <iostream>
#include <vector>
using namespace std;

class Queue
{
private:
	vector<int> data;
public:
	int pop()
	{
		int first = this -> data[0];
		this -> data.erase(this -> data.begin());
		return first;
	}

	void push(int data)
	{
		this -> data.push_back(data);
	}

	int front()
	{
		return this -> data.front();
	}

	void firstToEnd()
	{
		push(pop());
	}

	void printQueue()
	{
		for(long long unsigned int i = 0; i < this -> data.size() ; i++)
		{
			cout << this -> data[i] << " ";
		}
	}
};

int main()
{
	Queue QueueOfInts;
	QueueOfInts.push(5);
	QueueOfInts.push(1);
	QueueOfInts.push(2);
	QueueOfInts.push(3);
	QueueOfInts.push(4);

	cout << "Original Queue: ";
	QueueOfInts.printQueue();
	QueueOfInts.firstToEnd();

	cout << "\nResulting Queue: ";
	QueueOfInts.printQueue();

	return 0;

}
