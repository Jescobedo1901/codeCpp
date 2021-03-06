/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: housewife
 *
 * Created on February 17, 2018, 12:40 PM
 */

#include "dataClass.h"

using namespace std;

/*
 * 
 */




int main(int argc, char** argv) {
    //Direct importing of data for now
    double matrix[80][3] = {
    {3.2, 4.7, convertLabelToDouble("I. versicolor")},
    {3.2, 4.5, convertLabelToDouble("I. versicolor")},
    {3.1, 4.9, convertLabelToDouble("I. versicolor")},
    {2.3, 4, convertLabelToDouble("I. versicolor")},
    {2.8, 4.6, convertLabelToDouble("I. versicolor")},
    {2.8, 4.5, convertLabelToDouble("I. versicolor")},
    {3.3, 4.7, convertLabelToDouble("I. versicolor")},
    {2.4, 3.3, convertLabelToDouble("I. versicolor")},
    {2.9, 4.6, convertLabelToDouble("I. versicolor")},
    {2.7, 3.9, convertLabelToDouble("I. versicolor")},
    {2, 3.5, convertLabelToDouble("I. versicolor")},
    {3, 4.2, convertLabelToDouble("I. versicolor")},
    {2.2, 4, convertLabelToDouble("I. versicolor")},
    {2.9, 4.7, convertLabelToDouble("I. versicolor")},
    {2.9, 3.6, convertLabelToDouble("I. versicolor")},
    {3.1, 4.4, convertLabelToDouble("I. versicolor")},
    {3, 4.5, convertLabelToDouble("I. versicolor")},
    {2.7, 4.1, convertLabelToDouble("I. versicolor")},
    {2.2, 4.5, convertLabelToDouble("I. versicolor")},
    {2.5, 3.9, convertLabelToDouble("I. versicolor")},
    {3.2, 4.8, convertLabelToDouble("I. versicolor")},
    {2.8, 4, convertLabelToDouble("I. versicolor")},
    {2.5, 4.9, convertLabelToDouble("I. versicolor")},
    {2.8, 4.7, convertLabelToDouble("I. versicolor")},
    {2.9, 4.3, convertLabelToDouble("I. versicolor")},
    {3, 4.4, convertLabelToDouble("I. versicolor")},
    {2.8, 4.8, convertLabelToDouble("I. versicolor")},
    {3, 5, convertLabelToDouble("I. versicolor")},
    {2.9, 4.5, convertLabelToDouble("I. versicolor")},
    {2.6, 3.5, convertLabelToDouble("I. versicolor")},
    {2.4, 3.8, convertLabelToDouble("I. versicolor")},
    {2.4, 3.7, convertLabelToDouble("I. versicolor")},
    {2.7, 3.9, convertLabelToDouble("I. versicolor")},
    {2.7, 5.1, convertLabelToDouble("I. versicolor")},
    {3, 4.5, convertLabelToDouble("I. versicolor")},
    {3.4, 4.5, convertLabelToDouble("I. versicolor")},
    {3.1, 4.7, convertLabelToDouble("I. versicolor")},
    {2.3, 4.4, convertLabelToDouble("I. versicolor")},
    {3, 4.1, convertLabelToDouble("I. versicolor")},
    {2.5, 4, convertLabelToDouble("I. versicolor")},
    {3.2, 5.1, convertLabelToDouble("I. virginica")},
    {2.7, 5.3, convertLabelToDouble("I. virginica")},
    {3, 5.5, convertLabelToDouble("I. virginica")},
    {2.5, 5, convertLabelToDouble("I. virginica")},
    {2.8, 5.1, convertLabelToDouble("I. virginica")},
    {3.2, 5.3, convertLabelToDouble("I. virginica")},
    {3, 5.5, convertLabelToDouble("I. virginica")},
    {3.8, 6.7, convertLabelToDouble("I. virginica")},
    {2.6, 6.9, convertLabelToDouble("I. virginica")},
    {2.2, 5, convertLabelToDouble("I. virginica")},
    {3.2, 5.7, convertLabelToDouble("I. virginica")},
    {2.8, 4.9, convertLabelToDouble("I. virginica")},
    {2.8, 6.7, convertLabelToDouble("I. virginica")},
    {2.7, 4.9, convertLabelToDouble("I. virginica")},
    {3.3, 5.7, convertLabelToDouble("I. virginica")},
    {3.2, 6, convertLabelToDouble("I. virginica")},
    {2.8, 4.8, convertLabelToDouble("I. virginica")},
    {3, 4.9, convertLabelToDouble("I. virginica")},
    {2.8, 5.6, convertLabelToDouble("I. virginica")},
    {3, 5.8, convertLabelToDouble("I. virginica")},
    {2.8, 6.1, convertLabelToDouble("I. virginica")},
    {3.8, 6.4, convertLabelToDouble("I. virginica")},
    {2.8, 5.6, convertLabelToDouble("I. virginica")},
    {2.8, 5.1, convertLabelToDouble("I. virginica")},
    {2.6, 5.6, convertLabelToDouble("I. virginica")},
    {3, 6.1, convertLabelToDouble("I. virginica")},
    {3.4, 5.6, convertLabelToDouble("I. virginica")},
    {3.1, 5.5, convertLabelToDouble("I. virginica")},
    {3, 4.8, convertLabelToDouble("I. virginica")},
    {3.1, 5.4, convertLabelToDouble("I. virginica")},
    {3.1, 5.6, convertLabelToDouble("I. virginica")},
    {3.1, 5.1, convertLabelToDouble("I. virginica")},
    {2.7, 5.1, convertLabelToDouble("I. virginica")},
    {3.2, 5.9, convertLabelToDouble("I. virginica")},
    {3.3, 5.7, convertLabelToDouble("I. virginica")},
    {3, 5.2, convertLabelToDouble("I. virginica")},
    {2.5, 5, convertLabelToDouble("I. virginica")},
    {3, 5.2, convertLabelToDouble("I. virginica")},
    {3.4, 5.4, convertLabelToDouble("I. virginica")},
    {3, 5.1, convertLabelToDouble("I. virginica")} };
    
    double matrixTest[20][3] = {    
    {2.6, 4.4, convertLabelToDouble("I. versicolor")},
    {3, 4.6, convertLabelToDouble("I. versicolor")},
    {2.6, 4, convertLabelToDouble("I. versicolor")},
    {2.3, 3.3, convertLabelToDouble("I. versicolor")},
    {2.7, 4.2, convertLabelToDouble("I. versicolor")},
    {3, 4.2, convertLabelToDouble("I. versicolor")},
    {2.9, 4.2, convertLabelToDouble("I. versicolor")},
    {2.9, 4.3, convertLabelToDouble("I. versicolor")},
    {2.5, 3, convertLabelToDouble("I. versicolor")},
    {2.8, 4.1, convertLabelToDouble("I. versicolor")},
    {3.3, 6, convertLabelToDouble("I. virginica")},
    {2.7, 5.1, convertLabelToDouble("I. virginica")},
    {3, 5.9, convertLabelToDouble("I. virginica")},
    {2.9, 5.6, convertLabelToDouble("I. virginica")},
    {3, 5.8, convertLabelToDouble("I. virginica")},
    {3, 6.6, convertLabelToDouble("I. virginica")},
    {2.5, 4.5, convertLabelToDouble("I. virginica")},
    {2.9, 6.3, convertLabelToDouble("I. virginica")},
    {2.5, 5.8, convertLabelToDouble("I. virginica")},
    {3.6, 6.1, convertLabelToDouble("I. virginica")} };
    
    int epochs = 1000;
    int accPos = 0;
    int attrAmount = 3;
    int totalSize = 80;
    int trainingSize = 60;
    int testingSize = totalSize - trainingSize;
    double tempAccuracy = 0;
    
    vector<double> kAccuracy;
    vector<dataNode> originalSet;
    for (int i = 0; i < totalSize; i++) {
        dataNode temp(3);
        for (int j = 0; j < attrAmount; j++) {
            temp.setAttr(j,(matrix[i][j]));
        }
        originalSet.push_back(temp);
    }
    vector<dataNode> training;
    vector<dataNode> testing;
    for (int k = 1; k < trainingSize; k += 2) {
        tempAccuracy = 0;
        kAccuracy.push_back(tempAccuracy);
        for (int i = 0; i < epochs; i++) {
            //Divide data into two sets 
            createDataSets(training, testing, originalSet, trainingSize, testingSize);
            tempAccuracy = testKValue(training, testing, k);
            
            //Clear the temporary sets for new randomized sets
                training.clear();
                testing.clear();
            //Summation of all accuracy
            kAccuracy[accPos] += tempAccuracy;
        }
        //Find the mean accuracy value for each k
        kAccuracy[accPos] = kAccuracy[accPos]/epochs;
        cout << "K is: " << k << ", Accuracy = " << kAccuracy[accPos] << "%" << endl;
        accPos++;
    }
    //Find max accuracy
    int max = 0;
    for (int i = 0; i < accPos; i++) {
        if (kAccuracy[max] < kAccuracy[i]) {
            max = i;
        }
    }
    int k = 2*max+1;
    cout << "Best accuracy found when K = " << k << endl;
    cout << "With accuracy of " << kAccuracy[max] << "%" << endl;
    
    cout << "Now finding the Labels for the testing set" << endl;
    vector<dataNode> test;
    for (int i = 0; i < 20; i++) {
        dataNode temp(3);
        for (int j = 0; j < attrAmount; j++) {
            temp.setAttr(j,(matrixTest[i][j]));
        }
        test.push_back(temp);
    }
    
    unitTest(originalSet, test, k);
    
    
    return 0;
}

