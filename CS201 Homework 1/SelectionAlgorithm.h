//
//  SelectedAlgorithm.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 4.03.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#ifndef SelectedAlgorithm_h
#define SelectedAlgorithm_h

#include <stdio.h>

using namespace std;

class SelectionAlgorithm{
public:
    SelectionAlgorithm(int);
    SelectionAlgorithm();
    virtual int select();
protected:
    int k;
    
};


#endif /* SelectedAlgorithm_h */
