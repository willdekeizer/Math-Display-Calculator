#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;

    double sum = 0,
            count = 0,
            odd_count = 0,
            even_count = 0,
            average;
    int number;


    inputFile.open("Random.txt");

    if (inputFile.fail())
    {
        cout << "Error opening the file." <<endl;

    }
    else{

        while(inputFile>>number)
        {

            sum+=number;
            count++;
            if (number % 2==0) {
                even_count++;
            } else {
                odd_count++;
            }
            

        }

        average = sum / count;

        cout << "Number of numbers in the files: " << count << endl;
        cout << "Number of odd numbers in the file: " << odd_count << endl;
        cout << "Number of even numbers in the file: " << even_count << endl;
        cout << "Sum of all numbers in the file: " << sum << endl;
        cout << "Average of all the numbers in the file: " << average << endl;

    }

    inputFile.close();
    cout << "End Program." << endl;

    return 0;



}