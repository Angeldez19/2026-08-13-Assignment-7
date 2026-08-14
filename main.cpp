// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>
#include <limits>

using namespace std;

const string messageWelcome =  "Welcome to my Final Grade Calculator!";
const string messageInstructions = "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!\n"
                            "The number of assignments must be between 0 and 10.\n"
                            "All scores entered must be between 0 and 4.\n";
const string messageScoreRange = "All scores entered must be between 0 and 4.";
const string messageThankYou = "Thank you for using my Grade Calculator!";

const string promptNumberOfAssignments = "Enter the number of assignments (0 to 10): ";
const string promptEnterScore = "Enter score";
const string promptMidtermExamScore = "Enter your midterm exam score: ";
const string promptFinalExamScore = "Enter your final exam score: ";

const string labelClassNumericScore = "Your Class Numeric score ";
const string labelGradeCharacter = "Your Grade is ";

const double ASSIGNMENTS_WEIGHT = 60.0;
const double EXAM_WEIGHT = 20.0;

const double MIN_SCORE = 0.0;
const double MAX_SCORE = 4.0;

const int MIN_ASSIGNMENT_COUNT = 0;
const int MAX_ASSIGNMENT_COUNT = 10;

// Function prototypes (if any)
void welcome();

// Validate and conditionally re-prompt
// Always return valid int
int readInt(string prompt); 
 
//  The function must do data validation to make sure it is a numeric value, and 
//  that it is within the range of 0 to 4 inclusive.
double readScore(string prompt);

double readDouble(string prompt);

 // Read the Assignment scores from the user.  
 // Calculate and return the average score.
double assignAverage(int numAssigns);

// Calculate the class numerical score based on the appropriate weights for assignments and exams. 
// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcClassNumericScore(double assignAvgScore, double midtermExamScore, double finalExamScore);

// Takes a score and returns a letter grade.
// See table for values
char calcLetterGrade(double classNumericScore);

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

  welcome();
  cout << messageInstructions << endl;

  int countAssignments = 0;
  bool next = true;
  while(next) {
    countAssignments = readInt(promptNumberOfAssignments);
    if(MIN_ASSIGNMENT_COUNT <= countAssignments && countAssignments <= MAX_ASSIGNMENT_COUNT) {
      next = false;
    } 
  }

  double assignmentAverageScore = assignAverage(countAssignments);
  double midtermExamScore = readScore(promptMidtermExamScore);
  double finalExamScore = readScore(promptFinalExamScore);

  double classNumericScore = calcClassNumericScore(assignmentAverageScore, midtermExamScore, finalExamScore);
  char letterGrade = calcLetterGrade(classNumericScore);
  
  cout << labelClassNumericScore << classNumericScore << endl;
  cout << labelGradeCharacter << letterGrade << endl;

  cout << messageThankYou << endl;
  return 0;
}

// Function implementations (if any)
// Function prototypes (if any)
void welcome()
{
  cout << messageWelcome << endl;
}

// Validate and conditionally re-prompt
// Always return valid int
int readInt(string prompt)
{
  int n = 0;
  bool next = true;
  while(next) {
    cout << prompt;
    cin >> n;
    if(cin) {
      next = false;
    } else {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
  return n;
} 

double readDouble(string prompt) {
  double d = 0;
  bool next = true;
  while(next) {
    cout << prompt;
    cin >> d;
    if(cin) {
      next = false;
    } else {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
  return d;
}
 
//  The function must do data validation to make sure it is a numeric value, and 
//  that it is within the range of 0 to 4 inclusive.
double readScore(string prompt)
{
  bool next = true;
  double d = 0;
  while(next) {
    d = readDouble(prompt);
    if(d >= MIN_SCORE && d <= MAX_SCORE) {
      next = false;
    } else {
      cout << messageScoreRange << endl;
    }
  }

  return d;
}

 // Read the Assignment scores from the user.  
 // Calculate and return the average score.
double assignAverage(int numAssigns)
{
  double average = 0;
  cout << "TODO: double assignAverage(int numAssigns)" << endl;
  return average;
}

// Calculate the class numerical score based on the appropriate weights for assignments and exams. 
// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcClassNumericScore(double assignAvgScore, double midtermExamScore, double finalExamScore)
{
  double score = 0;
  cout << "TODO: calcClassNumericScore(double assignAvgScore, double midtermExamScore, double finalExamScore)" << endl;
  return score;
}

// Takes a score and returns a letter grade.
// See table for values
char calcLetterGrade(double classNumericScore)
{
  char c = '\0';
  cout << "TODO: char calcLetterGrade(double classNumericScore)" << endl;
  return c;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
