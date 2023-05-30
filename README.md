# Linear_Search
This repository provides a concise C++ implementation of Linear Search. The linear search algorithm is a simple and straightforward method used to find a specific element within a collection of elements. It iterates through each element in the collection, comparing it with the target element until a match is found or the end of the collection is reached.

# Algo Visualisation
<img width="719" alt="Screenshot 2023-05-23 at 14 15 58" src="https://github.com/harshy1718/LInear_Search/assets/129788726/ecd3e060-e3e2-47ca-94b4-999db24ca0af">

# Algo Complexity
## a. Time: 
The time complexity of the linear search algorithm is O(n), where 'n' represents the size of the collection or array being searched. This is because, in the worst-case scenario, the algorithm may need to iterate through all 'n' elements before finding the target element or determining that it does not exist.

## b. Space: 
The space complexity of the linear search algorithm is O(1), which means it requires constant space regardless of the size of the input. This is because the algorithm does not require any additional data structures or memory allocations that depend on the size of the input. It simply uses a few variables to keep track of the current element and the search progress.


# Use Cases
While linear search is a simple and straightforward algorithm, it is generally not preferred for large-scale industrial use cases where efficiency is crucial. However, there are certain scenarios where linear search can still find applications:

a. Small Datasets: Linear search can be suitable for searching through small datasets or collections where the number of elements is relatively limited. In such cases, the overhead of implementing more complex search algorithms may outweigh the benefits.

b. Unsorted Data: Linear search can be useful when the data is unsorted or in a random order. Since linear search does not depend on any specific order or structure, it can effectively find the desired element regardless of the arrangement.

c. Partial Matches: Linear search can be employed in situations where the goal is to find partial matches or approximate matches. It can iterate through all elements and return the closest match, even if an exact match is not found.

d. Preprocessing Stage: Linear search may be used during a preprocessing stage or as a preliminary step in more complex algorithms. It can help filter or identify certain elements that need further processing using other algorithms or techniques.

# Function Description
This function goes on each and every element of the array to search for x and then returns the index at which x is found else it returns -1

    int linearsearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
    }

First we create an array and call an integer n which will determine the size of the array(i.e. number of elements in the array)

    int main() { 
    int input[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

 After this we take the input of the elements of the array

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

 Then we call an integer x which is the element we want to search in the array

    int x;
    cout << "Enter the element to be searched for : ";
    cin >> x;

  After this we call a function named linearsearch
    
    int ans = linearsearch(input,n,x);
    if (ans == -1) {
        cout << x << " Not Found" << endl;
    }
    else {
        cout << x << " Found at index : " << ans << endl;
    }
}
