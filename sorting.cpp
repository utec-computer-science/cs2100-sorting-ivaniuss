//
// Created by ivaniuss on 3/28/20.
//

#include "sorting.h"




sorting::sorting(vector<int> &v){
    cout<< __PRETTY_FUNCTION__<<endl;


    for (const auto &i : v)
        v1.emplace_back(i);



}

vector<int>  sorting::InsertSort(vector<int> &v1) {
    cout<< __PRETTY_FUNCTION__<<endl;

    int k = 0;
    int j = 0;
    for (int i = 1; i < v1.size() ; ++i) {

        k = v1[i];
        j = i - 1;
        while (j >= 0 && v1[j] > k){
            v1[j+1] = v1[j];
            j -=1;
        }
        v1[j+1] = k;

    }
    return v1;

}
vector<int>  sorting::SelectionSort(vector<int> &v1) {

    cout<< __PRETTY_FUNCTION__<<endl;

    int min  = 0;

    for (int i = 0; i < v1.size() - 1 ; ++i) {
        min  = i;
        for (int j = i+ 1; j < v1.size(); ++j) {
            if (v1[j] < v1[min]){
                min = j;
            }
            if (min!= i){
                swap(v1[min], v1[i]);
        }

        }
    }
    return v1;
}


vector<int> sorting::BubbleSort(vector<int> &v1) {


    cout<< __PRETTY_FUNCTION__<<endl;

    int n;
    int x;
    bool swapped;
    n = v1.size();
    swapped = true;
    x = -1;

    while (swapped){
        swapped = false;
        x = x + 1;
        for (int i = 1; i < n - x ; ++i) {
            if (v1[i - 1] > v1[i]){
                swap(v1[i-1],v1[i]);
                swapped = true;
            }
            
        }
    }
    return v1;

}

vector<int> Merge(vector<int>& left, vector<int>&right) {
    vector<int> result;
    while ((int)left.size() > 0 || (int)right.size() > 0) {
            if ((int)left.size() > 0 && (int)right.size() > 0) {
                if ((int)left.front() <= (int)right.front()) {
                    result.push_back((int)left.front());
                    left.erase(left.begin());
                }
                else {
                    result.push_back((int)right.front());
                    right.erase(right.begin());
                }
            }  else if ((int)left.size() > 0) {
                for (int i = 0; i < (int)left.size(); i++)
                    result.push_back(left[i]);
                break;
            }  else if ((int)right.size() > 0) {
                for (int i = 0; i < (int)right.size(); i++)
                    result.push_back(right[i]);
                break;
            }
        }
    return result;
}


vector<int> sorting::MergeSort(vector<int> &v1) {
    int mid = 0;
    vector<int> left,right, result;

    if (v1.size() <=1)
        return v1;

    mid = int((v1.size()+1)/2);

    for (int i = 0; i < mid; ++i) {
        left.emplace_back(v1[i]);
    }

    for (int i = mid; i < v1.size(); ++i) {
        right.emplace_back(v1[i]);
    }

    left = MergeSort(left);
    right = MergeSort(right);
    result = Merge(left, right);

    return result;
}

void sorting::QuickSort(vector<int> &v1, int left_index, int right_index) {

    int left, right, pivot;
    if(left_index >= right_index) return;

    left = left_index;
    right = right_index;

    pivot = v1[(left_index + right_index) /2];

    while(left <= right) {
        while(v1[left] < pivot) left++;
        while(v1[right] > pivot) right--;
        if(left <= right) {
            swap(v1[left],v1[right]);
            left++;
            right--;
        }
        cout << v1 << endl;
    }

    QuickSort(v1,left_index,right);
    QuickSort(v1,left,right_index);

}


ostream &operator<<(ostream &os, const vector<int> &v) {
    for (const auto &i: v)
        os << i << " ";
    return os;
}


