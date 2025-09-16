/* this is a code that asks a
 user to input Eight numbers and
  then it prints the largest number*/


  #include <iostream>

  using namespace std;

  // writing the defining function
  int main() {

    // defining the size of the arraya
    int Submition = 8;
    
     // defining the size of submition
    int numbers[Submition] ; 

    // using a loop to check out every number in the array
    // then using cin to insert the valuse given by the user

    cout << "Welcome , you are going to be given five chances to enter a number and the algorithm will guess the largest number. \n";


    for (int i = 0;i<Submition;i++){
    cout << "Enter number " << i+1 << ":";
    cin >> numbers[i];
 
     }

     // printing the array and showing the maximum value

     cout << "The array elements are:  ";
     for (int i = 0; i< Submition;i++){
        cout << numbers[i] << " ";


     }
 
     // printing the largest number 
     int largest = numbers[0];
     for (int i = 1; i < Submition;i++){
        if (numbers[i] > largest){
            largest = numbers[i];
        }
     }
     
    cout << " And the largest number is: " << largest << endl;
  

    return 0;


  }
