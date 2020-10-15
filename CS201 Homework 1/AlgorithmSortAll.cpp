//
//  AlgorithmSortAll.cpp
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 20.02.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "SelectionAlgorithm.h"
#include <iostream>


using namespace std;

AlgorithmSortAl::AlgorithmSortAl(int k) : SelectionAlgorithm(k){
    this->k = k;
    
}
int AlgorithmSortAl::select(){
    int n;
    cin >> n;
    
    int *arr = new int [n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
     
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    
    int result = arr[k-1];
    
    delete [] arr;
    return result;
    
    
}
