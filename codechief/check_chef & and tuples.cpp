#include<bits/stdc++.h>
using namespace std;

int main()
{
    array[] arrayString = new array[]{1,2,3,4};
    List<array[]> splitted = new List<array[]>();//This list will contain all the splitted arrays.
    int lengthToSplit = 3;

    int arrayLength = arrayString.Length;

    for (int i = 0; i < arrayLength; i = i + lengthToSplit)
    {
      array[] val = new array[lengthToSplit];

      if (arrayLength < i + lengthToSplit)
         {
            lengthToSplit = arrayLength - i;
         }
      Array.Copy(arrayString, i, val, 0, lengthToSplit);
      splitted.Add(val);
    }
return 0;
}
