//
// Created by Francisco Teixeira Orlandini on 26/11/19.
//

#ifndef STATICTEST_TRESTORECLASS_H
#define STATICTEST_TRESTORECLASS_H

#include <iostream>
template<class T>
class TRestoreClass {
public:
    TRestoreClass(){
    std::cout<<__PRETTY_FUNCTION__<<std::endl;
}
private:
    static TRestoreClass<T> pRestore;

};

template<class T>
TRestoreClass<T> TRestoreClass<T>::pRestore;


#endif //STATICTEST_TRESTORECLASS_H
