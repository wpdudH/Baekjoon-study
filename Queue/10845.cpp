#include <iostream>

#define MAX 10000

class Queue
{
public:
	Queue()
	{
	}

	void Push(long x);
	long Pop();
	int Size();
	int Empty();
	long Front();
	long Back();

private:
	int size = 0;
	int index = 0;
	long queue[MAX] = {0, };
};

void Queue::Push(long x)
{
	queue[size] = x;
	size += 1;
}

long Queue::Pop()
{
	if ((size - index) != 0)
	{
		index += 1;
		return queue[index - 1];
	}
	else
	{
		return -1;
	}
}

int Queue::Size()
{
	return size - index;
}

int Queue::Empty()
{
	if ((size - index) != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

long Queue::Front()
{
	if ((size - index) == 0)
	{
		return -1;
	}
	else
	{
		return queue[index];
	}
}

long Queue::Back()
{
	if ((size - index) == 0)
	{
		return -1;
	}
	else
	{
		return queue[size - 1];
	}
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;

	Queue* q = new Queue();

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string s;
		
		std::cin >> s;
		if (s == "push")
		{
			long a;
			std::cin >> a;
			q->Push(a);
		}
		else if (s == "front")
		{
			std::cout << q->Front() << std::endl;
		}
		else if (s == "back")
		{
			std::cout << q->Back() << std::endl;
		}
		else if (s == "size")
		{
			std::cout << q->Size() << std::endl;
		}
		else if (s == "pop")
		{
			std::cout << q->Pop() << std::endl;
		}
		else if (s == "empty")
		{
			std::cout << q->Empty() << std::endl;
		}
	}
}