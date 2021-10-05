#include<bits/stdc++.h>
using namespace std;
  
// Function to randomly generates password of length N
void randomPasswordGeneration(int n)
{
    // Initialize counter
    int i = 0;
  
    int randomizer = 0;
  
    srand((unsigned int)(time(NULL)));
  
    // Array of numbers
    char numbers[] = "0123456789";
  
    // Array of small alphabets
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    // Array of capital alphabets
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    // Array of all the special symbols
    char symbols[] = "@#!~$%^&*()-+?:.,<>?| ";
  
    // Stores the random password
    char password[n];
  
    // To select the randomizer inside the loop
    randomizer = rand() % 4;
  
    // Iterate over the range [0, N]
    for (i = 0; i < n; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            cout<<password[i];
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 24];
            randomizer = rand() % 4;
            cout<<password[i];
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            cout<<password[i];
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            cout<<password[i];
        }
    }
}
  
// Driver Code
int main()
{
    int n;
    cout<<"Enter Length of password to generated form 10 to 26 ->";
    cin>>n;
    
  
    // Function Call
    randomPasswordGeneration(n);
  
    return 0;
}