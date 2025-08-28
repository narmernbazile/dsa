#include <iostream>
#include <vector>
#include <string>

using namespace std;

char get_letter(double grade)
{
  if (grade >= 90.0) return 'A';
  if (grade >= 80 && grade < 90) return 'B';
  if (grade >= 70 && grade < 80) return 'C';
  if (grade >= 60 && grade < 70) return 'D';
  return 'F';
}

void grade(int math, int physics, int chemistry)
{
  double grade = (math + physics + chemistry) / 3.0;
  bool pass;
  char letter;

  if (math < 40 || physics < 40 || chemistry < 40)
  {
    pass = false;
    letter = 'F';
  }
  else
  {
    pass = true;
    letter = get_letter(grade);
  }

  cout << "Final Percentage: " << grade << "%" << endl;
  cout << "Status: " << (pass ? "Pass" : "Fail") << endl;
  cout << "Letter Grade: " << letter << endl;
}

int main() 
{
  int math; cin >> math;
  int physics; cin >> physics;
  int chemistry; cin >> chemistry;

  grade(math, physics, chemistry);
}