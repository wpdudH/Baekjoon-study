#include <iostream>

// Linked List�� Node class
template<typename T>
class Node
{
public:
	int data;
	T raw;
	Node* next;
	Node(T x, int d)
	{
		data = d;
		raw = x;
		next = nullptr;
	}
};

template<typename T>
Node<T>* split(Node<T>* head)
{
	Node<T>* first = head;
	Node<T>* second = head;

	while (first->next != nullptr)
	{
		first = first->next->next;
		if (first != nullptr)
		{
			second = second->next;
		}
		else
		{
			break;
		}
	}

	Node<T>* temp = second->next;
	second->next = nullptr;
	return temp;
}

template<typename T>
Node<T>* merge(Node<T>* first, Node<T>* second)
{
	if (first == nullptr) return second;
	if (second == nullptr) return first;

	if (first->data <= second->data)
	{
		first->next = merge(first->next, second);
		return first;
	}
	else
	{
		second->next = merge(first, second->next);
		return second;
	}
}

template<typename T>
Node<T>* MergeSort(Node<T>* head)
{
	// ���� �� �̻� ����� ����Ʈ�� ������ �״�� ��ȯ
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}

	// ���� �����ϴٸ� ����
	Node<T>* second = split(head);

	head = MergeSort(head);
	second = MergeSort(second);

	return merge(head, second);
}