#ifndef LIST_H
#define LIST_H

#include <iostream> 
#include <stddef.h>
using namespace std;

template <class T>
class List{
	private:	
		struct Data{
			T info;
            Data* next;
		};
		Data* head;
		int ele;
		Data* newNode(T data){
			Data* temp = new Data;
			temp->info = data;
			temp->next = NULL;
			return temp;
		}
	public:
		List();
		List(T data);
		~List();
		int countNodes();
		T getHeadData();
		void addFront(T data);
		void addInfoOrder(T data);
		void delFront();
		void delInfo(T data);
		//pos starts at 0
		void delPos(int pos);
		void clearList();
        void displayList() const;
        void addAnywhere(T data, int position);
};
#include "List.cpp"
#endif