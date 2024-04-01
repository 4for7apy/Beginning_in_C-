/*#include<iostream>
using namespace std;*/

/*
int main(){
    int n;
    cin >> n;

    int m;
    cin >> m;

    int arr1[n], arr2[m], arr3[10];
    

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> arr2[i];
        arr3[i] = arr2[i];
    }

    int c = m + n;

    for(int i = 0; i<c; i++){
        cout << arr3[i] << " ";
    }
 
}
*/


/*

Unsorted array

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    int arr1[n], arr2[m], arr3[10];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) { 
        cin >> arr2[i];
        arr3[i + n] = arr2[i];
    }

    int c = m + n;

    for (int i = 0; i < c; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;
*/
/*
int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    int arr1[n], arr2[m], arr3[10];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) { 
        cin >> arr2[i];
        arr3[i + n] = arr2[i];
    }

    int c = m + n;

    cout << "Unsorted array: ";
    for (int i = 0; i < c; i++) {
        cout << arr3[i] << " ";
    }

    cout << "Sorted array: ";
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Give the size of arr1: ";
    cin >> n;

    int m;
    cout << "Give the size of arr2: ";
    cin >> m;

    int arr1[n], arr2[m], arr3[10];

    cout << "Enter the element of arr1: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    cout << "Enter the element of arr2: " << endl;

    for (int i = 0; i < m; i++) { 
        cin >> arr2[i];
        arr3[i + n] = arr2[i];
    }

    int c = m + n;

    cout << "Unsorted array: ";
    for (int i = 0; i < c; i++) {
        cout << arr3[i] << " ";
    }

    cout << "\nSorted array: "; 

    int arr[c]; 
    for (int i = 0; i < c; i++) {
        arr[i] = arr3[i];
    }

    for (int i = 0; i < c - 1; i++) { 
        for (int j = 0; j < c - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < c; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
