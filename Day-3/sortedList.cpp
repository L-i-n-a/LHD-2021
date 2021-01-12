#include <iostream>
using namespace std;

float arr[10];
int i, j;
float h;
int n = sizeof (arr) / sizeof (arr[0]);

void
tri_crois ()
{
  //sorting - ASCENDING ORDER
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (arr[i] > arr[j])
	    {
	      h = *(arr + i);
	      *(arr + i) = *(arr + j);
	      *(arr + j) = h;
	    }
	}
    }
}


int
main ()
{
  //read n elements
  for (i = 0; i < n; i++)
    {
      cout << "Enter Element [" << i + 1 << "] ";
      cin >> arr[i];
    }

  //print input elements
  cout << "List :" << endl;
  for (i = 0; i < n; i++)
    cout << arr[i] << " " ;
    cout << endl;
  tri_crois ();

  //print sorted array elements
  cout << "Sorted List:" << endl;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;

}
