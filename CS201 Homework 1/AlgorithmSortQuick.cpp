//
//  AlgorithmSortQuick.cpp
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 7.05.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "AlgorithmSortQuick.h"
#include "SelectionAlgorithm.h"
#include "BinaryHeap.h"

using namespace std;

AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k){
    this->k = k;
    
}

int AlgorithmSortQuick::select(){
     int n;
    cin >> n;
    
    int *numbers = new int[n];
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    
    int result = quickselect(numbers,0,n-1,this->k);
    
    delete [] numbers;
    return result;
}

int AlgorithmSortQuick::quickselect(int *numbers,int left,int right,int kth){
    int pivotIndex,temp = 0;

    
    
    if((right - left) < 10){
        for(int i=left;i<=right;i++){
            if(numbers[i] < numbers[i+1]){
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }
            for(int j=i+1;j>left;j--){
                if(numbers[j] > numbers[j-1]){
                    temp = numbers[j];
                    numbers[j] = numbers[j-1];
                    numbers[j-1] = temp;
                }
                else{
                    continue;
                }
            }
           
        }
        
        return numbers[left+kth-1];
        
    }
    
    else{
        pivotIndex = (right+left)/2;
        
        
        if(numbers[pivotIndex] < numbers[right]){
            temp = numbers[pivotIndex];
            numbers[pivotIndex] = numbers[right];
            numbers[right] = temp;
        }
        if(numbers[right] > numbers[left]){
            temp = numbers[right];
            numbers[right] = numbers[left];
            numbers[left] = temp;
        }
        if(numbers[pivotIndex] > numbers[left]){
            temp = numbers[pivotIndex];
            numbers[pivotIndex] = numbers[left];
            numbers[left] = temp;
        }
        
        temp = numbers[pivotIndex];
        numbers[pivotIndex] = numbers[left+1];
        numbers[left+1] = temp;
        
        int pivot = numbers[left+1];
        
        int indexS2 = right;
        int indexS1 = left+1;
        
        
        while(true){
            while(numbers[--indexS2] < pivot){}
            while(numbers[++indexS1] > pivot){}
            if(indexS1<indexS2){
                temp = numbers[indexS1];
                numbers[indexS1] = numbers[indexS2];
                numbers[indexS2] = temp;
            }
            else{
                break;
            }
            
        }
        
        temp = numbers[indexS2];
        numbers[indexS2] = numbers[left+1];
        numbers[left+1] = temp;

        int pi =indexS2;

        
        if(kth < (pi-left+1)){
            return quickselect(numbers, left, pi-1, kth);
        }
        else if(kth == (pi-left+1)){
            return numbers[pi];
        }
        else{
            return quickselect(numbers, pi+1, right, kth - (pi-left+1));
        }
    
    }
    
}
    
        
      
    
  
    
      

