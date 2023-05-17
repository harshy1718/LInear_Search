#include <iostream>
using namespace std;

int linearsearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() { 
    int input[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int x;
    cout << "Enter the element to be searched for : ";
    cin >> x;
    int ans = linearsearch(input,n,x);
    if (ans == -1) {
        cout << x << " Not Found" << endl;
    }
    else {
        cout << x << " Found at index : " << ans << endl;
    }
}