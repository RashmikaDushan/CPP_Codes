#include <iostream>
#include <vector>

using namespace std;


int twoStacks(int maxSum, vector<int> a, vector<int> b){
    vector<int> a_sum_list;
    int a_sum=0;
    int b_sum=0;
    int count=0;

    a_sum_list.push_back(0);
    for(int i=0;i<a.size();i++){
        a_sum+=a[i];
        a_sum_list.push_back(a_sum);
        if(a_sum>maxSum){
            count=i;
            break;
        }
    }

    for(int j=0;j<b.size();j++){
        b_sum+=b[j];
        for(int i=0;i<a_sum_list.size();i++){
            if(b_sum+a_sum_list[i]>)
        }
        if(a_sum>maxSum){
            count=j;
            break;
        }
    }
}


int main() {
    vector<int> arr1 = {17,5,0};
    vector<int> arr2 = {10,8,2,1,13,1,14,18,9,18,16,19,5};
    int maxSum = 13;
    int n = twoStacks(maxSum,arr1,arr2);
    cout<<n<<endl;
}

//3 13 60
//17 5 0
//10 8 2 1 13 1 14 18 9 18 16 19 5