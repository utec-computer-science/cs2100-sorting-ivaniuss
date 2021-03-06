//
// Created by ivaniuss on 3/28/20.
//


#ifndef SORTING_SORTING_H
#define SORTING_SORTING_H

#include <iostream>
#include <vector>
using namespace std;


class sorting {
private:
    vector<int> v1;

public:
    explicit sorting(vector<int>&);
    static vector<int> InsertSort(vector<int> &v1);
    static vector<int> SelectionSort(vector<int> &v1);
    static vector<int> BubbleSort(vector<int> &v1);
    static vector<int> MergeSort(vector<int> &v1);
    static void QuickSort(vector<int> &v1, int left_index, int right_index);
    static vector<int> ShellSort(vector<int> &v1);
    static vector<int> BinSort(vector<int>& v1);


    friend ostream &operator<<(ostream &os, const vector<int> &v);
};

ostream& operator<<(ostream& os, const vector<int>& v);


#endif //SORTING_SORTING_H

