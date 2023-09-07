#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
    
  //Write your code here.
  int b, g, y, x, sum;
  
  b = 0;
  g = 1;
  x = 1;
  y = 0;
  sum = 0;
  
void boys()
{
    for (; y <= number_of_students; y= y+2)
    {
        sum = sum + marks[y];  
    }
    //return (sum);
}
    
void girls()
{
    for (; x <= number_of_students; x = x+2)
    {
        sum = sum + marks[x];  
    }
    //return (sum);
}
    
  if (gender == 'b' && number_of_students%2 == b)
  {
      boys();
  }
  else if (gender == 'b' && number_of_students%2 == g)
  {
      number_of_students--;
      boys();
  }
  if (gender == 'g' && number_of_students%2 == g)
  {
      girls();
  }
  else if (gender == 'g' && number_of_students%2 == b)
  {
      number_of_students--;
      girls();
  }  
  return (sum);
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
