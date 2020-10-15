//
//  AlgorithmSortQuick.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 7.05.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//



#ifndef AlgorithmSortQuick_h
#define AlgorithmSortQuick_h

#include "SelectionAlgorithm.h"

using namespace std;


class AlgorithmSortQuick : public SelectionAlgorithm{
public:
    int select();
    int quickselect(int *numbers,int left,int right,int kth);
    AlgorithmSortQuick(int k);
};


#endif /* AlgorithmSortQuick_h */
