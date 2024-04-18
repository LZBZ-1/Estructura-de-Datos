//
// Created by jalb2 on 18/04/2024.
//

#include "SimpleListNode.h"

template <typename T>
SimpleListNode<T>::SimpleListNode(const T &data) : data(data), next(nullptr){}

template <typename T>
T SimpleListNode<T>::getData() const {
    return data;
}

template <typename T>
void SimpleListNode<T>::setData(const T& data) {
    this->data = data;
}

template <typename T>
std::shared_ptr<SimpleListNode<T>> SimpleListNode<T>::getNext() const {
    return next;
}

template <typename T>
void SimpleListNode<T>::setNext(const std::shared_ptr<SimpleListNode<T>>& next){
    this->next = next;
}