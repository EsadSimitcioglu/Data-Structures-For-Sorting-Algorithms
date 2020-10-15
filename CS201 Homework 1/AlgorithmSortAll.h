//
//  AlgorithmSortAll.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 4.03.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#ifndef AlgorithmSortAll_h
#define AlgorithmSortAll_h

#include <stdio.h>
#include "SelectionAlgorithm.h"


using namespace std;

class AlgorithmSortAl : public SelectionAlgorithm{
public:
    AlgorithmSortAl(int k);
    int select();
    
    
};

#endif /* AlgorithmSortAll_h */
