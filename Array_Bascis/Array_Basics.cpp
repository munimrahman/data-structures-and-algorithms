#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int arrayLength){
    for(int i = 0; i < arrayLength; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertElement(int array[], int arraySize){
    // In this function we insert element in the array by given position
    int position, value;
    cout << "Position Of The Insertion: ";
    cin >> position;
    cout << "Value Of The Insertion: ";
    cin >> value;

    if(position < 0 || position > arraySize){
        cout << "Invalid Position" << endl;
    }else{
        for(int i = arraySize-1; i >= position; i--){
            array[i+1] = array[i];
        }
        array[position] = value;
        /*
            // For Unsorted Array We Dont Need a For Loop
            array[size] = array[pos]
            array[pos] = value
        */
        printArray(array, arraySize+1);
    }

}

void deleteElement(int array[], int arraySize){
    // In this function we delete array element by given position
    int position;
    cout << "Position Of The Deletion: ";
    cin >> position;

    if (position < 0 || position > arraySize){
         cout << "Invalid Position" << endl;
         return;
    } else if(position == arraySize-1) {
        arraySize--;
    } else{
        for(int i = position; i <= arraySize; i++){
            array[i] = array[i+1];
        }
        arraySize--;
    }
    printArray(array, arraySize);
}

int main(){
    int array[10] = {1, 2, 3, 4, 5};

    insertElement(array, 5);
    deleteElement(array, 5);

    return 0;
}
