#pragma once
#include <iostream>

template <typename T>
struct node {
	T data;
	node* prev;
	node* next;
};

template <typename T>
class List {
	node* head = nullptr;
	node* tail = nullptr;
public:
	List() = default;
	node* find(const T value){
		node* tmp = head;
		while (tmp && tmp->data != value) {
			tmp = tmp->next;
		}
		return tmp;
	}
	void delete(const T value) {
		node* tmp = find(value);
		if (tmp == head)
		{
			if (tail == tmp)
			{
				head = tail = nullptr;
			}
			else
			{
				head = tmp->next;
				head->prev = nullptr;
			}
		}
		else if (tmp == tail)
		{
			tail = tmp->prev;
			tail->next = nullptr;
		}
		else if (tmp)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
		}
		delete tmp;
		tmp = nullptr;
	}

	void insertAfter(node* prev_node, T value)
	{
		if (prev_node == NULL)
		{
			cout << "the given previous node cannot be NULL";
			return;
		}
		Node* new_node = new Node;
		new_node->data = value;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
		new_node->prev = prev_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
	}
};
