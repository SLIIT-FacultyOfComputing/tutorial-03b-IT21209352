#include <iostream>
using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box {
  int height;
  int width;
  int length;
};

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    Box  Box_1;
    
    // 3. Create a variable called box2 of the Box structure type
    Box  Box_2;
  
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Box_1.height;
    cout << "Enter Box 1 Width : ";
    cin >> Box_1.width;
    cout << "Enter Box 1 Length : ";
    cin >> Box_1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> Box_2.height;
    cout << "Enter Box 2 Width : ";
    cin >>Box_2.width;
    cout << "Enter Box 2 Length : ";
    cin >> Box_2.length;
    
    // 5. Replace the coding below to pass the Box type structure

  totalVolume = volume( Box_1.height,Box_1.width,Box_1.length) + volume(Box_2.height,Box_2.width , Box_2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return (height*width*length);
}