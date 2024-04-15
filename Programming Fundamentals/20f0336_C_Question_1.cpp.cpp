#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int Initialize(int arr[])
{
	
	arr[0] = { 13 };
	arr[1] = { 40 };
	arr[2] = { 50 };
	arr[3] = { 94 };
	arr[4] = { 12 };
	arr[5] = { 13 };
	arr[6] = { 40 };
	arr[7] = { 13 };
	arr[8] = {101};
	arr[9] = {225};
	
	 return 0;
}
 int filefun()
 {
	 int b[10] =  { 13, 40, 50, 94 ,12 ,13 ,40 ,13 ,101, 225 }; 
	 ofstream write("20f0336.txt", ios::out);
	 for (int i = 0; i < 10; i++)
	 {
		 write << b[i] << endl;
	 }

	 write.close();
		 return 0;

 }
 void fileread()
 {
	 
	 char reading;
	 int arrTwo[10];
	 int sum = 0, count = 0;
	 filefun();
	 ifstream fileread("20f0336.txt", ios::in);
	 while (!fileread.eof())
	 {
		 fileread.get(reading);
		 
		 for (int i = 0; i < 10; i++)
		 {

			 arrTwo[i] = int(reading);
			 sum += arrTwo[i];
			 count += 1;
		 }

	 }

	 cout << "Average is: " <<  sum / count<< endl;
	
	 filefun();
	 Initialize(arrTwo);
	 ofstream overwrite("20f0336.txt", ios::out);
	 for (int i = 0; i < 10; i++)
	 {

		 if (arrTwo[i] == 13)
		 {

			 i++;
		 }
		 overwrite << arrTwo[i] << endl;
	 
	 }
	 
	 
	 overwrite.close();
 
 }
int main()
{
	int array[10] ;
	Initialize(array);
	filefun();
	fileread();
	system("pause");
	return 0;
}