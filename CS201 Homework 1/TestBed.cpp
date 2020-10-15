//
//  TestBed.cpp
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 19.02.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//
#include <ctime>
#include "TestBed.h"
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
#include <iostream>

using namespace std;


TestBed::TestBed(){
    
}

TestBed::~TestBed(){
    delete algorithm;
}

void TestBed::setAlgorithm(int type, int k){
    if(type == 1){
        algorithm = new AlgorithmSortAl(k);
    }
    else if(type == 2){
        algorithm = new AlgorithmSortK(k);
    }
    else if(type == 3){
        algorithm = new AlgorithmSortHeap(k);
    }
    else if(type == 4){
        algorithm = new AlgorithmSortQuick(k);
    }
}


void TestBed::execute(){
    

    // Time stamp before the computations
    clock_t start = clock();
    
    int result = algorithm->select();
    /* Computations to be measured */
    // Time stamp after the computations
    clock_t end = clock();
    double cpu_time = static_cast<double>( end - start ) /CLOCKS_PER_SEC;
    
    
    //int result = algorithm->select();
    cout << "Result: " << result << endl;
    cout << "Duration(sec): " << cpu_time << endl;
    
    
    
}


