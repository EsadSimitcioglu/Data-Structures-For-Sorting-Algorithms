//
//  AlgorithmSortK.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 4.03.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#ifndef AlgorithmSortK_h
#define AlgorithmSortK_h

#include <stdio.h>
#include "SelectionAlgorithm.h"


using namespace std;

class AlgorithmSortK : public SelectionAlgorithm{
public:
    AlgorithmSortK(int k);
    int select();
};

#endif /* AlgorithmSortK_h */
