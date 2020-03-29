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

ostream &operator<<(ostream &os, const vector<int> &v) {
    for (const auto &i: v)
        os << i << " ";
    return os;
}


