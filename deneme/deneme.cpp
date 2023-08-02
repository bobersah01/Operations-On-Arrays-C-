#include <iostream>
#include <string>
using namespace std;

//We have to study on arrays and functions. LAB3: ARRAYS AND MATRIX
//I am using selection sort algorithm to sort an array.
/*
int turnSmallestArray(int arr[], int lengthOfArray, int k)
{
	
	for (int i = 0; i < lengthOfArray - 1; i++)
	{
		for (int j = i + 1; j < lengthOfArray; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i]; //swapping operation. we can use another function for this operation. 
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr[k - 1];
}

int main()
{
	//int arr[5] = {3,5,2,7,22};
	//int lengthOfArray = 5;
	//int k = 4;
	
	int lengthOfArray;
	int* arr;
	int k;
	int element;

	do {
		cout << "Enter the length of array: " << endl;
		cin >> lengthOfArray; //length of array burada da do while ile kontrol edilebilir.
	} while ((lengthOfArray < 0 || lengthOfArray>1024));
	
	//We created an array but we didnot say its size and we started to initialize of it an elements.
	//Therefore, we have to determine the size of an array.

	arr = new int[lengthOfArray]; //we define the size of an array.

	for (int i = 0; i < lengthOfArray; i++)
	{
		do {
			cout << "Enter arr[" << i << "] number: " << endl;
			cin >> arr[i];
			cout << "arr[" << i << "]" << ": " << arr[i] << endl;
		} while (arr[i]<-1024 || arr[i] >=1024);
	}

	do {
		cout << "Enter k value (k th smallest value of an array): " << endl;
		cin >> k;
	} while ((k <= 0 || k > lengthOfArray));

	//int element = turnSmallestArray(arr, lengthOfArray, k);
	//cout << element << endl;
	element = turnSmallestArray(arr, lengthOfArray, k);
	cout << "K th smallest value of an array is: " << element << endl;

	//When you finish the program, you have to delete the memory that you allocate first.
	delete[] arr;
	return 0;
}*/

//ASSIGNMENT4: ARRAYS, MOVIES 
//TASK 2: Ranking Movies
//I dont want to return any parameter from the function, just save an arrays. After this operation,
//I want to arrange the parameters from the wanted.

//I can use template class for swapping operation
//Because, I have to generate swap operation for each int and string values.
//template <class T> after, we are just taking their address for doing swap.
//I have to take address for executing swapping operation in main function.

/*
void returnRankAndMovie(float* arrRank, string* arrMovie, int lengthOfArray)
{
	for (int i = 0; i < lengthOfArray - 1; i++)
	{
		for (int j = i + 1; j < lengthOfArray; j++)
		{
			if (arrRank[i] < arrRank[j])
			{
				//for int value, we have to create a template for swapping operation.
				float temp = arrRank[i];
				arrRank[i] = arrRank[j];
				arrRank[j] = temp;

				//for string value, we have to do the same.
				string templ = arrMovie[i];
				arrMovie[i] = arrMovie[j];
				arrMovie[j] = templ;
			}
		}
	}

	for (int i = 0; i < lengthOfArray; i++)
	{
		cout << i + 1 << ". " << arrMovie[i] << " " << arrRank[i] << endl;
	}

}

int main()
{
	int lengthOfArray; //this is enough for each array.
	float* arrRank; //I have to initialize a size for this array.
	string* arrMovie; //I have to initialize a string for this arrray.


	cout << "Enter a number for the movie and their sizes. How many movie that you want to rank? " << endl;
	cin >> lengthOfArray;

	//The rank of the movie must be between 0 and 10. If there is not in between in this interval
	//You have to re enter another number.
	//I am initializing a size for these arrays.

	arrRank = new float[lengthOfArray];
	arrMovie = new string[lengthOfArray];

	for (int i = 0; i < lengthOfArray; i++)
	{
		cout << "Please enter the name of movie of [" << i << "] array: ";
		//cin >> arrMovie[i];
		cin.ignore(); //We are using ignore method to create a new space for getline function.
		//You have to use cin.ignore method before using getline method.
		getline(cin, arrMovie[i]);

		do {
			cout << "Please enter the rank of movie of [" << i << "] array: ";
			cin >> arrRank[i];
		} while (arrRank[i] < 0 || arrRank[i]>10);

	}
	
	cout << endl;

	cout << "Before sorting: " << endl;
	for (int i = 0; i < lengthOfArray; i++)
	{
		cout << i + 1 << ". " << arrMovie[i] << " " << arrRank[i] << endl;
	}
	cout << endl;
	cout << "*******************************" << endl;
	cout << endl;
	cout << "After Sorting: " << endl;
	returnRankAndMovie(arrRank, arrMovie, lengthOfArray);

	//We have to delete our arrays that we allocate memories for them.
	delete[] arrRank; 
	delete[] arrMovie;
}*/