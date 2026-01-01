#include <iostream>
#include <fstream>   
#include <sstream>   
#include <iomanip>   
#include <cstdlib>  
#include <ctime>    
#include <vector>

using namespace std;

int max_students = 100;


int loadData(const char filename[], int ids[], int scores[], int maxSize) {
    ifstream infile("students.csv");
    if (!infile) {
        cout << "Could not open file " << endl;
        return 0;
    }
    
    string line;
	getline(infile, line);
	
	int count = 0;
    while (count < max_students ) {
        char comma;
        int id, score;

        if (!(infile >> id))
            break;

        infile >> comma;
        if (!(infile >> score))
            break;

        ids[count] = id;
        scores[count] = score;
        count++;
    }

    infile.close();
    return count;
}


void printAll(int ids[], int scores[], int size) {
    cout << "All student records:\n";
    for (int i = 0; i < size; i++) {
        cout << "StudentID: " << ids[i]
             << "   Score: " << scores[i] << endl;
    }
    cout << endl;
}


void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore) {
    if (size == 0) {
        average = 0.0;
        minScore = 0;
        maxScore = 0;
        return;
    }

    int sum = 0;
    minScore = scores[0];
    maxScore = scores[0];

    for (int i = 0; i < size; i++) {
        sum += scores[i];
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
    }

    average = double (sum) / size;
}

void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC, int &countD, int &countF) {
    countA = 0;
	countB = 0;
	countC = 0;
	countD = 0;
	countF = 0;

    for (int i = 0; i < size; i++) {
        int scores_1 = scores[i];
        if (scores_1 >= 70 && scores_1 <= 100) {
        	
            countA++;
        } else if (scores_1 >= 60 && scores_1 <= 69) {
        	
            countB++;
        } else if (scores_1 >= 50 && scores_1 <= 59) {
        	
            countC++;
        } else if (scores_1 >= 45 && scores_1 <= 49) {
        	
            countD++;
        } else if (scores_1 >= 0 && scores_1 <= 44) {
        	
            countF++;
        }
    }
}


int pickRandomPassingStudent(int ids[], int scores[], int size) {
    int passing_indices[100];
    int pass_count = 0;

    for (int i = 0; i < size; i++) {
        if (scores[i] >= 50) {
            passing_indices[pass_count] = i;
            pass_count++;
        }
    }

    if (pass_count == 0) {
        return -1;
    }

    int r = rand() % pass_count;
    int index = passing_indices[r];
    return index; 
    }
    
    
    void saveSummary(char filename[],int numStudents,double average, int minScore, int maxScore,int countA, int countB, int countC,int countD, int countF){
	    ofstream outfile(filename);
	    if (!outfile) {
	        cout << "Could not create file " << filename << endl;
	        return;
	    }
	
	    outfile << "Metric,Value\n";
	    outfile << "Number of Students," << numStudents << "\n";
	
	    outfile << fixed << setprecision(2);
	    outfile << "Average Score," << average << "\n";
	
	    
	    outfile << "Minimum Score," << minScore << "\n";
	    outfile << "Maximum Score," << maxScore << "\n";
	    outfile << "A Count," << countA << "\n";
	    outfile << "B Count," << countB << "\n";
	    outfile << "C Count," << countC << "\n";
	    outfile << "D Count," << countD << "\n";
	    outfile << "F Count," << countF << "\n";
	
	    outfile.close();
    }


int main(){
	int ids[max_students];
	int scores[max_students];
	int numStudents = loadData("students.csv", ids, scores, max_students);

    cout << "Total number of students: " << numStudents << "\n\n";
    
    printAll(ids, scores, numStudents);
    
    double average;
    int minScore, maxScore;
    computeStats(scores, numStudents, average, minScore, maxScore);
    
    cout << fixed << setprecision(2);
    cout << "Average score: " << average << endl;
    cout << "Minimum score: " << minScore << endl;
    cout << "Maximum score: " << maxScore << endl << endl;
    
    int countA, countB, countC, countD, countF;
    computeGradeDistribution(scores, numStudents, countA, countB, countC, countD, countF);
    cout << "Grade distribution:\n";
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;
    cout << "F: " << countF << endl;
    
    
    
    int index = pickRandomPassingStudent(ids, scores, numStudents);
    cout << "Random passing student:\n";
    cout << "StudentID: " << ids[index]<<"\n";
    cout << "Score: " << scores[index] << "\n";
    
    saveSummary("summary.csv",numStudents,average, minScore, maxScore,countA, countB, countC, countD, countF);
    cout << "summary.csv has been created.\n";
    
    
    
    
    

   

    return 0;
}

  