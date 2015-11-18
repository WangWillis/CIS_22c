#ifndef Container_H
#define Container_H

#include <string>

template <class T>
class Container{
	private:
		std::string key;
		T data;
		bool empty;
		void del(T const&){}
		void del(T* const&){delete data;}
	public:
		Container();
		~Container();
		T getData() const;
		std::string getKey() const;
		void remove();
		void setDataKey(std::string, T);
		bool isEmpty() const;
};

template <class T>
Container<T>::Container(){
	empty = true;
}

template <class T>
Container<T>::~Container(){
	del(data);
}

template <class T>
T Container<T>::getData() const{
	return data;
}

template <class T>
std::string Container<T>::getKey() const{
	return key;
}

template <class T>
void Container<T>::setDataKey(std::string key, T data){
	this->key = key;
	this->data = data;
	empty = false;
}

template <class T>
bool Container<T>::isEmpty() const{
	return empty;
}

template <class T>
void Container<T>::remove(){
	del(data);
	empty = true;
}

#endif