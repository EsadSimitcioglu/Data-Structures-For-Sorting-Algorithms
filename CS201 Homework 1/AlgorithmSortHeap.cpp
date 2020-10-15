//
//  AlgorithmSortHeap.cpp
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 9.04.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "SelectionAlgorithm.h"
#include "BinaryHeap.h"
#include "AlgorithmSortHeap.h"

using namespace std;

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k){
    this->k = k;
    
}

int AlgorithmSortHeap::select(){
    int n;
    int a;
    int result = 0;
    
    cin >> n;
    
    BinaryHeap heap(k);
    
    for(int i=0;i<k;i++){
        cin >> a;
        heap.insert(a);
    }
    
    for(int i=0;i<n-k;i++){
        cin >> a;
        if(a > heap.getMin()){
            heap.deleteMin();
            heap.insert(a);
        }
        
    }
    
    
    
    result = heap.getMin();
    
    return result;
   
    
}
