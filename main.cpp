// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>
#include <limits>

using namespace std;

const string messageWelcome =  "Welcome to the Final Grade Calculator";
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
Program Name: The Final Grade Calculator

Program Description: The program is designed to calculate a students final grade using a 4.0 letter score, 
calculate the average using assignment score, midterm and final exam scores to the corresponding letter grade

Design:
A. INPUT
numAssignments :int total number of assignments completed 
currentAssignmentScore: float point the score earned on each assignment
midTermScore: float point the score earned on the mid term
FinalExamScore: float point the score earned on the final exam


B. OUTPUT
AssignmentAverage: float point calculated average score of all assignments
totalWeightScore: float point calculated number of score
letterGrade: single character the letter grade corresponding with final weighted grade


C. CALCULATIONS
 Total assignment tracking
assignmentSum = assignmentSum + currentAssignmentScore
Assignment average
AssignmentAverage = assignmentSum/NumAssignments
Final score
totalWeightedScore = (assignmentAverage * 0.60) + (midtermScore * 0.20) + finalExamScore * 0.20)


D. LOGIC and ALGORITHMS
MODULE welcome():
    PRINT "Welcome to the Final Grade Calculator!"
    PRINT "Please enter the following information and I will calculate your"
    PRINT "Final Numerical Grade and Letter Grade for you!"
    PRINT "The number of assignments must be between 0 and 10."
    PRINT "All scores entered must be between 0 and 4."
END MODULE

MODULE readInt(prompt):
    SET value TO -1
    WHILE value < 0 OR value > 10:
        PRINT prompt
        READ value
        IF value IS INVALID OR value < 0 OR value > 10 THEN
            PRINT "Invalid input. Must be between 0 and 10."
            RESET value TO -1
        END IF
    END WHILE
    RETURN value
END MODULE

MODULE readScore(prompt):
    SET score TO -1.0
    SET isValid TO false
    WHILE isValid IS false:
        PRINT prompt
        READ score
        IF score IS INVALID OR score < 0.0 OR score > 4.0 THEN
            PRINT "Invalid input. Must be between 0 and 4."
        ELSE
            SET isValid TO true
        END IF
    END WHILE
    RETURN score
END MODULE

MODULE assignAverage(numAssigns):
    SET sum TO 0.0
    FOR i FROM 1 TO numAssigns:
        SET currentAssignmentScore TO readScore("Enter score " + i + ": ")
        SET sum TO sum + currentAssignmentScore
    END FOR
    RETURN sum / numAssigns
END MODULE

MODULE calcFinalScore(assignAvg, midterm, final):
    RETURN (assignAvg * 0.60) + (midterm * 0.20) + (final * 0.20)
END MODULE

MODULE calcLetterGrade(finalScore):
    IF finalScore >= 3.3 THEN
        RETURN 'A'
    ELSE IF finalScore >= 2.8 THEN
        RETURN 'B'
    ELSE IF finalScore >= 2.0 THEN
        RETURN 'C'
    ELSE IF finalScore >= 1.2 THEN
        RETURN 'D'
    ELSE
        RETURN 'F'
    END IF
END MODULE

MODULE main():
    CALL welcome()
    
    SET numAssignments TO readInt("Enter the number of assignments (0 to 10): ")
    
    SET assignmentAvg TO 0.0
    IF numAssignments > 0 THEN
        SET assignmentAvg TO assignAverage(numAssignments)
    END IF
    
    SET midtermScore TO readScore("Enter your midterm exam score: ")
    SET finalExamScore TO readScore("Enter your final exam score: ")
    
    SET totalWeightedScore TO calcFinalScore(assignmentAvg, midtermScore, finalExamScore)
    SET letterGrade TO calcLetterGrade(totalWeightedScore)
    
    PRINT "Your Final Numeric score is " + totalWeightedScore with 1 decimal digit precision
    PRINT "Your Final Grade is " + letterGrade
    PRINT "Thank you for using the Grade Calculator!"
END MODULE


SAMPLE RUNS
Copy from assignment document.
Welcome to the Final Grade Calculator!
Please enter the grade information and I will calculate your
Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.

Enter the number of assignments (0 to 10): 3
Enter score 1: 3
Enter score 2: 4
Enter score 3: 2.5

Enter your midterm exam score: 2.5
Enter your final exam score: 2

Your Final Numeric score is 2.8
Your Final Grade is B

Thank you for using the final Grade Calculator!

*/
