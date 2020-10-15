//
//  TestBed.h
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 4.03.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#ifndef TestBed_h
#define TestBed_h

#include <stdio.h>
#include "SelectionAlgorithm.h"

class TestBed{
public:
    void execute();
    void setAlgorithm(int,int);
    TestBed();
    ~TestBed();
protected:
    SelectionAlgorithm *algorithm;
};

#endif /* TestBed_h */
