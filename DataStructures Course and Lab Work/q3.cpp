//************************** IMPORTANT INSTRUCTIONS *************************************//

// NOTE:- YOU SHOULD NOT ALTER THE PROVIDED CODE. JUST ADD YOUR LINES OF CODE /**** WRITE CODE HERE *****/ IS MENTIONED.
//        IF YOU TRY TO CHANGE THE CODE, YOU WILL GET ZERO MARKS
//        THE REQURIED LINES OF CODE IS ALSO PROVIDED WITH /**** WRITE CODE HERE *****/
//        DON'T EXCEED THE REQUIRED NUMBER OF LINES, WILL BE GET ZERO MARKS OTHERWISE.

#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2


					   /**** WRITE CODE HERE *****/
					   // If left child is larger than root (~2 Lines Max.)
	
	
	largest = (l < largest) ? l : largest;



					   /**** WRITE CODE HERE *****/
					   // If right child is larger (~2 Lines Max.)
	
	largest = (r > largest) ? r : largest;



					   /**** WRITE CODE HERE *****/
					   // If largest is not root (~2 Lines Max.)
	if (largest != i) {

		largest = (l > r) ? l : r;


	}// End if
} // End Heapify



  // main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap      
	// Move the Root to an end of array (In-Place Sorting)
	//Rebuild the Heap

	/**** WRITE CODE HERE *****/
	for (int i = n - 1; i > 0; i--) {
		//(~ 2 Lines Max.)

		i = i + 1;
		heapify(arr, n, 1);
	}
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// MAIN METHOD
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	/**** WRITE CODE HERE *****/
	// Call heap-sort routine nd rebuild the heap is required (~2 Lines Max.)
	heapSort(arr, 6);
	heapify(arr, 5,1);

}// END MAIN