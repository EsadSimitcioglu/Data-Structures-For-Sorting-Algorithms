//
//  AlgorithmSortK.cpp
//  CS201 Homework 1
//
//  Created by Esat Simitcioglu on 20.02.2020.
//  Copyright © 2020 Esat Simitcioglu. All rights reserved.
//

#include "AlgorithmSortK.h"
#include "SelectionAlgorithm.h"
#include "TestBed.h"
#include <iostream>

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k){
    this -> k = k;

}

int AlgorithmSortK::select(){
    int temp =0;
    int n;
    cin >> n;
    int z = 0;

    int *arr = new int[k];




    for(int i=0;i<k;i++){
        cin >> arr[i];
    }

 

    int i, key, j;
    for (i = 0; i < k; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }



   for (int i = k; i < n; i++){
       cin >> z;

       if (z > arr[k - 1]) {
           int y = k - 1;
           arr[k - 1] = z;
           while ( y>0 && (arr[y] > arr[y-1]) ) {
               temp = arr[y-1];
               arr[y-1] = arr[y];
               arr[y] = temp;
               y--;
           }


       }

   }







    int result_number = arr[k-1];

    delete [] arr;
    return result_number;

}
