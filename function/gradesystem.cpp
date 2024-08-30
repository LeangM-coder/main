#include <iostream>
using namespace std;
// Print Title
void printTitle();
void printDynamicTitle(string total);
// Calculate Average Score
float calculateAvg(float totalScore){
    return totalScore / 3;
}

// Print Grade
void printGrade(float avgScore){
    if (avgScore >=90 && avgScore <= 100){
        cout << " Grade A "<< endl;
    }
    if (avgScore >=80 && avgScore <=89){
        cout << " Grade B "<< endl;
    }
    if (avgScore >=70 && avgScore <=79){
    cout << " Grade c "<< endl;
    }
    if (avgScore < 70){
    cout << " Fail "<< endl;
    }
}




// sum of 3 subject score
float sumScore(float math, float khmer, float english);
// Print information of student
void studentInfo(float math, float khmer, float english){
    cout << " Math: "<< math << endl;
    cout << " Khmer: "<< khmer << endl;
    cout << " English: "<< english << endl;
    float totalScore = sumScore(math, khmer, english);
    cout << " Tatal score: "<< totalScore<< endl;
    float avgScore = calculateAvg(totalScore);
    cout << " Average score "<< avgScore << endl;
    // call function grade
    printGrade(avgScore);



}
int main(){
    system("clear");
    string studentName;
    float mathScore;
    float khmerScore;
    float englishScore;
    cout<<" Enter Math score: ";
    cin >> mathScore;
    cout << " Enter Khmer score:  ";
    cin >> khmerScore;
    cout<<" Enter English score: ";
    cin >> englishScore;
    // call print information function
    studentInfo(mathScore, khmerScore, englishScore);
}
void printTitle(){
    cout << "===========| Grad System |========="<< endl;
}
void printDynamicTitle(string title){
    cout << "==========| "<< title<< " |=======" << endl;
}
float sumScore(float math , float khmer , float english){
    return math + khmer + english;
}