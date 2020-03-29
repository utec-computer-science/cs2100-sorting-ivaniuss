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



//void sorting::Merge(vector<int> &Arr, int start, int mid, int end) {
//    int temp[end - start + 1];
//
//    // crawlers for both intervals and for temp
//    int i = start, j = mid+1, k = 0;
//
//    // traverse both arrays and in each iteration add smaller of both elements in temp
//    while(i <= mid && j <= end) {
//    if(Arr[i] <= Arr[j]) {
//    temp[k] = Arr[i];
//    k += 1; i += 1;
//    }
//    else {
//    temp[k] = Arr[j];
//    k += 1; j += 1;
//    }
//    }
//
//    // add elements left in the first interval
//    while(i <= mid) {
//    temp[k] = Arr[i];
//    k += 1; i += 1;
//    }
//
//    // add elements left in the second interval
//    while(j <= end) {
//    temp[k] = Arr[j];
//    k += 1; j += 1;
//    }
//
//    // copy temp to original interval
//    for(i = start; i <= end; i += 1) {
//    Arr[i] = temp[i - start];
//    }
//}
//
//void sorting::MergeSort(vector<int> &v1, int start, int end) {
//
//    end-=1;
//    if(start < end) {
//        int mid = (start + end) / 2;
//        MergeSort(v1, start, mid);
//        MergeSort(v1, mid+1, end);
//        Merge(v1, start, mid, end);
//    }
//
//}
//
//int partition( vector<int> &v, int p,int q)
//{
//    int x= v[p];
//    int i=p;
//    int temp;
//    int j;
//
//    for(j=p+1; j<q; j++)
//    {
//        if(v[j]<=x)
//        {
//            i=i+1;
//            temp= v[j];
//            v[j]=v[i];
//            v[i]=temp;
//        }
//
//    }
//
//    temp= v[p];
//    v[p]=v[i];
//    v[i]=temp;
//
//    return i;
//}
//
//void sorting::QuickSort(vector<int> &v, int p, int q) {
//    int r;
//    if(p<q)
//    {
//        r=partition(v, p,q);
//        QuickSort(v,p,(r-1)); //I think the problem is here this first quickSort call
//        // is reducing the value of r and hence value of q becomes
//        // less than p recursively. How can I separate both calls
//        // one for left and one for right sub array of the pivot.
//        QuickSort(v,(r+1),q);
//    }
//}

ostream &operator<<(ostream &os, const vector<int> &v) {
    for (const auto &i: v)
        os << i << " ";
    return os;
}

