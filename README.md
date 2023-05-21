# LInear_Search
This repository provides a concise C++ implementation of Linear Search. It checks each element in an array sequentially to find a match. It's a fundamental and efficient searching algorithm.


int linearsearch(int array[], int size, int target) {
    //this function goes on each and every element of the array to search for x and then returns the index at which x is found else it returns -1

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() { 
    // First we create an array and call an integer n which will determine the size of the array(i.e. number of elements in the array)

    int input[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    // after this we take the input of the elements of the array

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    //then we call an integer x which is the element we want to search in the array

    int x;
    cout << "Enter the element to be searched for : ";
    cin >> x;

    //after this we call a function named linearsearch
    
    int ans = linearsearch(input,n,x);
    if (ans == -1) {
        cout << x << " Not Found" << endl;
    }
    else {
        cout << x << " Found at index : " << ans << endl;
    }
}
