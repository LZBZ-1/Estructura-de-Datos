//
// Created by jalb2 on 18/04/2024.
//

#ifndef ESTRUCTURAS_DE_DATOS_SIMPLELISTNODE_H
#define ESTRUCTURAS_DE_DATOS_SIMPLELISTNODE_H

#include <memory>

template <typename T>
class SimpleListNode {
private:
    T data;
    std::shared_ptr <SimpleListNode<T>> next;

public:
    explicit SimpleListNode(const T& data);

    T getData() const;
    void setData(const T& data);

    std::shared_ptr<SimpleListNode<T>> getNext() const;
    void setNext(const std::shared_ptr<SimpleListNode<T>>& next);
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const SimpleListNode<T>& node);

#endif //ESTRUCTURAS_DE_DATOS_SIMPLELISTNODE_H
