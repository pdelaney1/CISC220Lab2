/* Debra Yarrington
 * Taghreed Bagies
 * 3/2/17
 * This file contains functions for lab 2.  The functions are not necessarily related    
 * in any way other than that they are required for lab 2.
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctype.h>
using namespace std;

bool order1(int *a, int *b);// function declaration
bool order2(int &a, int &b);// function declaration
void randArray(int array[], int b);// function declaration
void returnRandArray(int array[], int b);// function declaration
void returnRandArrayPali(int array[], int b);// function declaration
void printArray(int array[], int b);// function declaration
void prbl5(int array[], int a, int &b, int &c);// function declaration
void prbl6(int array[], int a, int &b, int &c, int i);// function declaration
int countArray(int array[], int x);// function declaration
int prbl7b(int array[], int x);// function declaration
void prbl8(int array[], int x);// function declaration
bool prbl9(int array[], int x);// function declaration
bool prbl10(int array[], int x, int y);// function declaration
bool prbl11(int array[], int a, int b, int &c);// function declaration
void prbl12(int array[], int a, int &b, int &c);// function declaration

/*
 * 
 */
int main(int argc, char** argv) {
    //Problem 1
    cout << endl;
    cout << "Problem 1: " << endl;
    cout << endl;
    
    int a = 12; 
    int b = 21;
    // observe that a < b
    cout << a << " and " << b << endl; //output a and b before the function
    order1(&a, &b); // should not swap a and b since a < b
    cout << a << " and " << b << endl; //output a and b after the function, no change in output
    int c = 27;
    int d = 15;
    //observe that c < d
    cout << c << " and " << d << endl;// output c and d before the function
    order1(&c, &d);// should swap c and d since c !< d
    cout << c << " and " << d << endl;// output c and d after the function, order has changed
    
    //Problem 2
    cout << endl;
    cout << "Problem 2: " << endl;
    cout << endl;
    
    int aa = 12; 
    int bb = 21;
    // observe that aa < bb
    cout << aa << " and " << bb << endl; //output aa and bb before the function
    order2(aa, bb); // should not swap aa and bb since aa < bb
    cout << aa << " and " << bb << endl; //output aa and bb after the function, no change in output
    int cc = 27;
    int dd = 15;
    //observe that cc < dd
    cout << cc << " and " << dd << endl;// output cc and dd before the function
    order2(cc, dd);// should swap cc and dd since cc !< dd
    cout << cc << " and " << dd << endl;// output cc and dd after the function, order has changed
    
    //problem 3
    cout << endl;
    cout << "Problem 3: " << endl;
    cout << endl;
    
    int len = 20;
    int arr[len];
    randArray(arr, len);
    
    //problem 4
    cout << endl;
    cout << "Problem 4: " << endl;
    cout << endl;
    
    int length = rand()%20 + 1; // choose random length (for demonstration purposes)
    int testArray4[length];//initialize array of length "length"
    returnRandArray(&testArray4[0], length);// create an array with the given length above
    printArray(testArray4, length); //call printArray function
    
    //problem 5
    cout << endl;
    cout << "Problem 5: " << endl;
    cout << endl;
    int temp1 = -1;
    int temp2 = -1;
    //test
    int testArray5[length];//initialize array of length "length"
    returnRandArray(&testArray5[0], length);// create an array with the given length above
    prbl5(testArray5, length, temp1, temp2);
    cout << temp1 << endl;
    cout << temp2 << endl;
    
    cout << endl;
    cout << "Problem 6: " << endl;
    cout << endl;
    //test
    int temp3 = -1;
    int temp4 = -1;
    int testArray6[length];
    returnRandArray(&testArray6[0], length);// create an array with the given length above
    prbl6(&testArray6[0], length-1, temp3, temp4, 0);
    cout << temp3 << endl;
    cout << temp4 << endl;
    
    cout << endl;
    cout << "Problem 7: " << endl;
    cout << endl;
    //test
    int x = rand()%20;// 0 < x < 19
    int testArray7[20];
    returnRandArray(&testArray7[0], 20);// create an array with the given length above
    cout << countArray(&testArray7[20 - (x+1)], x) << endl;
    
    cout << endl;
    cout << "Problem 7b: " << endl;
    cout << endl;
    //test
    int len7b = rand()%20;// 0 < x < 19
    int testArray7b[len7b+1];
    returnRandArray(&testArray7b[0], len7b+1);// create an array with the given length above
    cout << prbl7b(&testArray7b[0], len7b) << endl;;
    
    cout << endl;
    cout << "Problem 8: " << endl;
    cout << endl;
    //test
    int len8 = rand()%20 + 1;// 0 < x < 19
    int testArray8[len8];
    returnRandArray(&testArray8[0], len8);// create an array with the given length above
    prbl8(&testArray8[0], len8);
            
    cout << endl;
    cout << "Problem 9: " << endl;
    cout << endl;
    //test
    int len9 = rand()%20;// 0 < x < 19
    int testArray9[len9+1];
    returnRandArrayPali(&testArray9[0], len9+1);// create an array with the given length above
    cout << prbl9(&testArray9[0], len9) << endl;
    
    cout << endl;
    cout << "Problem 10: " << endl;
    cout << endl;
    //test
    int len10 = rand()%20;// 0 < x < 19
    int testArray10[len10+1];
    returnRandArrayPali(&testArray10[0], len10+1);// create an array with the given length above
    cout << prbl10(&testArray10[0], len10, len10/2) << endl;
    
    cout << endl;
    cout << "Problem 11: " << endl;
    cout << endl;
    //test
    int hold11 = 0;
    int len11 = rand()%20+3;// 0 < x < 19
    int testArray11[len11+1];
    returnRandArrayPali(&testArray11[0], len11+1);// create an array with the given length above
    cout << prbl11(&testArray11[0], len11, 3, hold11) << endl;
            
    cout << endl;
    cout << "Problem 12: " << endl;
    cout << endl;
    //test
    int hold12 = 0;
    int hold122 = 0;
    int len12 = rand()%20;// 0 < x < 19
    int testArray12[len12+1];
    returnRandArrayPali(&testArray12[0], len12+1);// create an array with the given length above
    prbl12(&testArray12[0], len12, hold12, hold122);
    int it = 0;
    while(it < len12+1){
        cout << testArray12[it] << ", ";
        it++;
    }
    cout << endl;
    cout << hold12 << ", " << hold122 << endl;//first prints out the index of the palindrome found, second is the length
    //both of the above values will default to 0 if no palindrome is found
    
    return 0;
}
// order1 passes in values by pointer
bool order1(int *a, int *b){// function definition
    if(*a > *b){// Tests if the value stored at the address assigned to "a" is greater than that of "b"
        // If true then we swap the values in the next three lines of code
        int c = *a;
        *a=*b;
        *b=c;
        return false;// return false since we had to switch the addresses of "a" and "b"
    } //if
    else{
        return true;// return true since we did not have to switch the addresses of "a" and "b"
    } //else
} //order1
        // This performs the same task as order1, only order2 passes in values by reference
bool order2(int &a, int &b){// function definition
    if(a > b){// Tests if the value stored at the address assigned to "a" is greater than that of "b"
        // If true then we swap the values in the next three lines of code
        int c = a;
        a=b;
        b=c;
        return false;// return false since we had to switch the addresses of "a" and "b"
    } //if
    else{
        return true;// return true since we did not have to switch the addresses of "a" and "b"
    } //else
} //order2

void randArray(int array[], int len){// function definition
    int i = 0; // define iterator
    while(i<len){//iterates through the array
        array[i] = rand() % 100;//generates random integer between 0 through 100 (not 100), sets equal to array[i]
        if (i == len-1){
            cout << array[i] << endl;
            return;
        } //if
        else{
            cout << array[i] << ", "; // temporary print function for verification (REMOVE BEFORE SUBMITTING!!!)
            i += 1; //increase iterator  
        } //else
    } //while
} //randArray

void returnRandArray(int array[], int len){// function definition
    int i = 0; // define iterator
    while(i<len){//iterates through the array
        array[i] = rand()%100;//generates random integer between 0 through 100 (not 100), sets equal to array[i]
        i++;
    } //while
} //returnRandArray

//same as above but generates a smaller set of random numbers to increase odds of a palindrome occurring
void returnRandArrayPali(int array[], int len){// function definition
    int i = 0; // define iterator
    while(i<len){//iterates through the array
        array[i] = rand()%5;//generates random integer between 0 through 100 (not 100), sets equal to array[i]
        i++;
    } //while
} //returnRandArray

void printArray(int array[], int len){// function definition
    int i = 0;
    while(i<len){//iterates through the array
        if(i == len-1){
            cout << array[i] << endl;
            return;
        } //if
        else{
        cout << array[i] << ", ";
        i += 1;
        } //else
    } //while
} //printArray

void prbl5(int array[], int a, int &b, int &c){// function definition
    int i = 0;
    b = array[0];
    while(i < a){// determine the smallest element in array
        if(array[i] < b){
            b = array[i];
            c = i;
        } //if
        i++;
    } //while
} //prbl5

void prbl6(int array[], int a, int &b, int &c, int i){// function definition
    if(i == 0){
        b = array[a];
        c = a;
    }
    if(array[i] < b){
        b = array[i];
        c = i;
    } //if
    if(i<=a){
        return prbl6(array, a, b, c, i+1);
    } //if
    else{
        return;
    } //else
} //prbl6

int countArray(int array[], int x){// function definition
    int ct = 0;
    for(int i = 0; i < x; i++){
        ct += array[i];
    } //for
    return ct;
} //countArray

int prbl7b(int array[], int x){// function definition
    int y = rand() % 6 + 3;
    int smallest = countArray(&array[0], x);
    int returnValue = 0;
    for(int i = 0; i < x-y; i++){
        if(countArray(&array[i], x)<smallest){
            smallest = countArray(&array[i], x);
            returnValue = i;
        }//if
    }//for
    return returnValue;
} //findSmallest
    
void prbl8(int array[], int x){// function definition
    for(int i = 0; i < x; i++){
        int temp1 = -1;
        int temp2 = -1;
        prbl5(&array[i], x-i, temp1, temp2);
        int swap = array[i];
        array[i] = temp1;
        array[temp2] = swap;
        cout << array[i] << ", ";
    }//for
    cout << endl;
} //prbl8

bool prbl9(int array[], int x){// function definition
    int y = x/2;
    int i = 0;
    while(i < y){
        if(array[i] != array[(x-1)-i]){
            return false;
        }// if
        i++;
    }// while
    return true;
} //prbl9

bool prbl10(int array[], int x, int y){// function definition
    //the y that needs to be passed in is x/2
    if(array[y-1] != array[x-y]){
        return false;
    }
    else if(y>=1){
        return prbl10(array, x, y-1);
    }
    return true;
} //prbl10

bool prbl11(int array[], int a, int b, int &c){// function definition
    int i = 0;
    while(i <= (a-b)){
        if(prbl9(&array[i], b)){
            c = i;
            return true;
        }
        i++;
    }
    return false;
}

void prbl12(int array[], int a, int &b, int &c){// function definition
    int i = a;
    while(i > 0){
        if(prbl11(&array[0], a, i, b)){
            c = i;
            return;// return here because we have found the largest palindrome
        }
        i--;
    }
}