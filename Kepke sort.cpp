// Kepke sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <deque>
#include "Header.h"

using namespace std;

void sortHAARAkep(int arr[], int size);

void sortArrPUZIREK_KEP(int arr[], int size) {
    int tmp;
    cout << " SORT" << endl;
    for (int i = 0; i < size - 1; i++) {
        int j = size - 1;
        int flag = 0;
        
        while (j >i) {
            flag = 0;
            if (arr[j - 1] > arr[j]) {
                cout << " a[j]= " << arr[j] << " a[j - 1] =" << arr[j - 1] << " j = " << j << endl;
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                flag = -1;
            };
            
            j--;
        }
        if (flag != -1) return;

        for (int ii = 0; ii < size; ++ii) {
            cout << " " << arr[ii] << " ";
        }
        cout << " next i = "<< i  << endl;
    }
    cout << "end sort "<< endl;
}

void sortArrPUZIREK2(int arr[], int size) {
    int length = size, tmp;
    cout << " SORT Pusirek" << endl;
    while (length !=0) {
        
        int max_index = 0;
        cout << " length " << length;
        int j = 1;
        while (j < length) {
            if (arr[j - 1] > arr[j]) {
 
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                max_index = j;
                for (int ii = 0; ii < size; ++ii) {
                    cout << " " << arr[ii] << " ";
                }
                cout << endl;
            }
            j++;
        }
        length = max_index;
        
        
    }
  
    cout << "end sort " << endl;
}
void sortArrPUZIREK(int arr[], int size) {
    int length = size, tmp;
    cout << " SORT Pusirek" << endl;
    while (length != 0) {

        int max_index = 0;
        cout << " length " << length;
        for (int j = 1; j < length; j++) {
            if (arr[j - 1] > arr[j]) {

                //            cout << " a[j]= " << arr[j] << " a[j - 1] =" << arr[j - 1] << " j = " << j << endl;
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                max_index = j;
                for (int ii = 0; ii < size; ++ii) {
                    cout << " " << arr[ii] << " ";
                }
                cout << endl;
            };
        }
        length = max_index;


    }

    cout << "end sort " << endl;
}
void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}


int sortHsplit(int arr[], int left, int right) {
    int middle = arr[(right + left) / 2];
    printArr(arr, right+1);
    while (left <= right) {
       
        while (arr[left] < middle) 
            left++;
        while (arr[right] > middle)
            right--;
        if (left <= right) {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }

    }
    
    printArr(arr, left);
    int a;
 //   cin >> a;
    return left;

}
void sortH(int arr[], int l,  int right) {
    
    if (l >= right) return;
    int left = sortHsplit(arr, l, right);
 
    cout << "l= "<<l <<" "<< endl;
    sortH(arr, l, left-1);
    cout << "r= " << l << " " << endl;
    sortH(arr, left, right);
}


void sortHAARAkep(int arr[], int size) {
 
    sortH(arr, 0, size - 1);
    printArr(&arr[0], size);
    cout << "end sort " << endl;
}


int main()
{
    int arr[10] = { 4, 6, 2, 546, 123, 78, 34, 345}, size = 8;
    cout << "Start\n";
    //srand(time(0));

    printArr(&arr[0], size);

    //sortArrPUZIREK_KEP(arr, size);
    //sortArrPUZIREK2(arr, size);
    cout << "\nSort start\n";
    sortHAARAkep(arr, size);
    vector<int> V = {1, 6, 2, 8, 2, 5, 9};
    //auto it = V.begin();
    /*for(auto it : V)
    {
        cout << it << endl;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }*/

    deque<int> DEC = {1, 456, 3, 87, 3, 6, 0};
    for (auto it : DEC)
    {
        cout << it << endl;
    }

    std::cout << "\nHello World!\n";
    return 0;
}
