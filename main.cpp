// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

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

// Function prototypes (if any)
void welcome();

// Validate and conditionally re-prompt
// Always return valid int
int readInt(string prompt); 
 
//  The function must do data validation to make sure it is a numeric value, and 
//  that it is within the range of 0 to 4 inclusive.
double readScore(string prompt);

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

  // Read the midterm exam score and the final exam score in main() by calling the readScore() function.
  // Print the letter grade in main().
  return 0;
}

// Function implementations (if any)
// Function prototypes (if any)
void welcome()
{
  cout << messageWelcome << endl;
  cout << messageInstructions << endl;

  int countAssignments = readInt(promptNumberOfAssignments);
  
  double assignmentAverageScore = assignAverage(countAssignments);
  double midtermExamScore = readScore(promptMidtermExamScore);
  double finalExamScore = readScore(promptFinalExamScore);

  double classNumericScore = calcClassNumericScore(assignmentAverageScore, midtermExamScore, finalExamScore);
  char letterGrade = calcLetterGrade(classNumericScore);
  
  cout << labelClassNumericScore << classNumericScore << endl;
  cout << labelGradeCharacter << letterGrade << endl;

  cout << messageThankYou << endl;
}

// Validate and conditionally re-prompt
// Always return valid int
int readInt(string prompt)
{
  int n = 0;
  cout << "TODO: int readInt(string prompt)" << endl;
  return n;
} 
 
//  The function must do data validation to make sure it is a numeric value, and 
//  that it is within the range of 0 to 4 inclusive.
double readScore(string prompt)
{
  double d = 0;
  cout << "TODO: double readScore(string prompt)" << endl;
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
