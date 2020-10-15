//
//  AlgorithmSortHeap.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 9.04.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#ifndef AlgorithmSortHeap_h
#define AlgorithmSortHeap_h

#include "SelectionAlgorithm.h"


using namespace std;

class AlgorithmSortHeap : public SelectionAlgorithm{
    
public:
    AlgorithmSortHeap(int k);
    int select();
    
};




#endif /* AlgorithmSortHeap_h */
