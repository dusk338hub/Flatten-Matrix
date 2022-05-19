#include <iostream>
#include <vector>
using namespace  std;
int main() {
    int height;
    int width;
    int depth;
    cout<<"please enter the height and width and depth\n";
    cin>>height>>width>>depth;
    int numbers[width][height][depth];
    cout<<"please enter the elements\n";
 for(int i=0;i<width;i++)
 {
     for(int j=0;j<height;j++)
     {
         for(int k=0;k<depth;k++)
         {
             cin >> numbers[i][j][k];
         }
     }

 }

 vector<int>FlattenArray(height*width*depth);
    for(int i=0;i<width;i++)
    {
        for(int j=0;j<height;j++)
        {
            for(int k=0;k<depth;k++)
            {
                FlattenArray[i * height * depth + j * depth + k] =numbers[i][j][k];
            }
        }

    }
    cout<<"the Flatten Vector is :   ";
for(int i=0;i<height*width*depth;i++)
    cout << FlattenArray[i] << " ";
    return 0;
}
