#include<iostream>
using namespace std;

/*
int binarysearch(int arr[], int size, int key){

    int start = 0 ;

    int end = size - 1;

    int mid = (start + end)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = (start+end)/2;
        
        
    }
    return -1;
    


}
*/
/*
int main() {
    int sorted_array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 10;
    
    int left = 0;
    int right = sizeof(sorted_array) / sizeof(sorted_array[0]) - 1;
    
    int result = -1; // Default value if target is not found m
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (sorted_array[mid] == target) {
            result = mid;
            break;
        } else if (sorted_array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }
    
    return 0;
}
*/

int main() {
    int arr[6] = {25, 2, 8, 1, 6, 54};

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

