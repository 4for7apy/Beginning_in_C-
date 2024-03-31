/*
#include<iostream>
using namespace std;

int main(){
    // Making a array of 20
    int arr[20] = {1,2,3,4,5};
    int c = sizeof(arr) / sizeof(arr[0]);

    // Asking User that on which part he want to add his code
    cout << "Enter element to insert"
    int Keypoint;
    cin >> Keypoint;
    arr[i] = 

    // Which value he want to to add
    for(int i = 0; i<c; i++){
        arr[Keypoint]; 
    }

}

*/

/*

// Add a number in an array

#include<iostream>
using namespace std;
int main(){
    int arr[6], i, user_input;
    cout << "Enter 5 digit" << endl;
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Enter element to insert" << endl;
    cin >> user_input;
    arr[i] = user_input;
    cout << "The new array is: ";
    for(i = 0; i < 6 ; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
*/


#include<iostream>
using namespace std;

int main(){
    
    // User Input 

    int arr[5], i, user_input;
    cout << "Enter 5 digit" << endl;
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    // Let's Delete it
    cout << "Element you want to delete" << endl;
    cin >> user_input;
    
    int c = arr[5] - arr[user_input];
    for(i = 0; i<5; i++){
        cout << c;

    }

}




// C++ program to remove a given element from an array
#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
 
return n;
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
 
    // Delete x from arr[]
    n = deleteElement(arr, n, x);
 
    cout << "Modified array is \n";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
 
    return 0;
}





