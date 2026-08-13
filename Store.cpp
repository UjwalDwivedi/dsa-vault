#include <iostream>

int main(){
    int x = 5;
    int y(5);
    int z{8};
    char Hold{'#'};
    int e{};
    std::cout<<z;
    std::cout<<Hold;
    std::cout<<e; //prints 0 -- When you use empty braces {} for a built-in scalar type like int, the compiler performs zero-initialization.
    return 0;
}

// Different types of initialization in c++

#include <iostream>

int main(){
    int x{5};
    float y = 6.7;
    double pi = 3.14;

    std::cout<< x << '\n' << pi << '\n' << y;
    return 0;


}

//Basics

#include <iostream>

int main(){
    int x{6};

    std::cout<<"my name is ujwal\n";
    std::cout<< "I have "<< x<< " porsche"<<'\n'<< "biee";
}

//Basics continues

#include <iostream>

int main(){
    int x;

    std::cout<< "enter the number\n";
    std::cin>>x;
    std::cout<< "number is "<< x;
}

#include <iostream>

int main(){
    int x, y;
    std::cout<<"Enter the numbers \n";
    std::cin>>x>>y;
    std::cout<<"Entered numbers are\n"<<x<< '\n'<< y;
    std::cout<<x<<std::endl<<y; //std::endl presses enter
    return 0;
}

//Basics continues *2

#include  <iostream>

int getvalue(){
    std::cout<< "enter the number ";
    int x;
    std::cin>>x;

    return x;
}

void calculation(int x, int y, int z){
    std::cout<< (x*y) + z;
}

int main(){
    calculation(getvalue(), getvalue(), getvalue());
}

#include <iostream>

int main(){
    int n;
    std::cin>>n;
    
    if(n>=0){
        std::cout<<"The entered number is a whole number"<<'\n'<< "The double of that number is "<< n*2;
    }else{
        std::cout<<"the entered number is neg";
    }
}

#include <iostream>

int main(){
    char str[100] = "ujwal";
    int count{0};

    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    
    std::cout<<count;
}

#include <iostream>
#include <string>

int main(){
    std::string name{};
    std::getline(std::cin>>std::ws,name );
    std::cout<<name;

    std::getline(std::cin, name);
    std::cout<<name;
    
}

//ways to define and input strings

#include <iostream>
#include <string>

int main(){
    std::string name{};
    std::getline(std::cin, name);
    std::cout<<name;
    int n = name.length();
    std::cout<<'\n';
    std::cout<<n;

    
}

#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    if (!(x > y))
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';

    return 0;
}

#include <iostream>

int getvalue(){
    std::cout<<"Enter The Number ";
    int x;
    std::cin>>x;

    return x;
}

int main(){
    int n = getvalue();
    std::cout<<std::endl;
    int m = getvalue();

    int max{(n>m) ? n : m};
    std::cout<<"The max Number among n and m is "<< max;

}
//c++ Practice

#include <iostream>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionsort(int arr[], int n){
    for(int i=0; i <= n-2; i++){
        int mini = i;

        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(&arr[i], &arr[mini]);
    }
}

void bubblesort(int arr[], int n){
    int didswap = 0;
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                didswap=1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
}

void insertionsort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(&arr[j-1], &arr[j]);
            j--;
        }
    }
}

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    selectionsort(arr, n);

    std::cout<<"Sorted array is as follows"<<'\n';
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<'\t';
    }

    return 0;
}

//sorting algos

#include <iostream>

int main(){
    int n =5;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<'\n';
    }


    std::cout<<'\n';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<i;
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
    
    std::cout<<'\n';

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            std::cout<<' ';
        }
        for(int j=0; j<2*i+1;j++){
            std::cout<<'*';
        }
        for(int j=0; j<n-i-1; j++){
            std::cout<<' ';
        }
        std::cout<<'\n';
    }



    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n-i-1; j++){
            std::cout<<' ';
        }
        for(int j=0; j<2*i+1; j++){
            std::cout<<'*';
        }
        for(int j=0; j<n-i-1; j++){
            std::cout<<' ';
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j=1; j<=stars;j++){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i+j) % 2 == 0){
                std::cout<<1;
            }else if((i+j) % 2 != 0){
                std::cout<<0;
            }
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    int space = 2*(n-1);

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        for(int j=1; j<=space; j++){
            std::cout<<' ';
        }
        for(int j=i; j>=1; j--){
            std::cout<<j;
        }

        space -= 2;
        std::cout<<'\n';
    }

    std::cout<<'\n';

    int num = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            std::cout<<num<<' '; 
            num+=1;
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';

    
}

//Pattern Printing 

#include <iostream>
#include <vector>

void merge(int arr[], int low, int mid, int high){
    std::vector<int> temp; 
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergesort(int arr[], int low, int high){
    if(low>=high) return;
    int mid = (low + high) / 2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[] = {3,1,2,4,1,5,6,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<' ';
    }
}

//merge sort

#include <iostream>

void swap(int *x, int *y){
    int temp = *x; 
    *x = *y;
    *y = temp;
}

int find(int arr[],int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>pivot && j>=low+1){
            j--;
        }

        if(i<j){
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);

    return j;

}

void quicksort(int arr[], int low, int high){
    if(low<high){
        int partition_index = find(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);
    }
}

int main(){
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n-1;

    quicksort(arr,low,high);

    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<' ';
    }

    return 0;

}

//quick sort

#include <iostream>

int main(){
    int arr[] = {3, 6, 1, 7 , 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_element = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max_element){
            max_element = arr[i];
        }
    }
    std::cout<<"Max element from the given array is "<<max_element;
    return 0;
}

//Largest element

#include <iostream>

int main(){
    int arr[] = {3,1,4,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int small = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]< small){
            small = arr[i];
        }
    }

    int large = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]> large){
            large = arr[i];
        }
    }
    int secondsmall;
    int secondlarge;
    int smalldiff = 100;
    int largediff = 100;
    for(int i=0; i<n; i++){
        int currentdiff = arr[i] - small;
        if(currentdiff < smalldiff && arr[i] != small){
            secondsmall = arr[i];
            smalldiff = currentdiff;
        }
    }
    for(int j=0; j<n; j++){
        int currentdiff2 = large -arr[j];
        if(currentdiff2 < largediff && arr[j] != large){
            secondlarge = arr[j];
            largediff = currentdiff2;
        }
    }
    std::cout<< "second large and second small is "<< secondlarge<<' '<< secondsmall;
    return 0;

}

//Find Second Smallest and Second Largest Element in an array

#include <iostream>

int main(){
    int arr[] = {3,1,2,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int small, large;
    small = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i]< small){
            small = arr[i];
        }
    }
    large = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]> large){
            large = arr[i];
        }
    }

    int secondsmall = large;

    for(int i=0; i<n; i++){
        if(arr[i]<secondsmall && arr[i] != small){
            secondsmall = arr[i];
        }
    }

    int secondlarge = small;    


    for(int i=0; i<n; i++){
        if(arr[i]>secondlarge && arr[i] != large){
            secondlarge = arr[i];
        }
    }

    std::cout<< "second largest and smallest are "<< secondlarge<< ' '<<secondsmall;

}

//Find Second Smallest and Second Largest Element in an array

#include <iostream>

int main(){
    int arr[] = {1,2,56,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sorted = 1;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            sorted = 0;
            break;  
        }
    }

    if(sorted == 0){
        std::cout<<"no";
    }
    else{
        std::cout<<"yes";
    }
}

//Check if an Array is Sorted

#include <iostream>

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
        
    }
    int k = i+1;

    for(int j=0; j<k; j++){
        std::cout<<arr[j];
    }

    std::cout<<'\n';

    std::cout<<"number of elements"<<k;
}

//Remove Duplicates in-place from Sorted Array

#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1 % n;

    for(int i=k; i<n; i++){
        std::cout<<arr[i]<<' ';
    }

    for(int i=0; i<k; i++){
        std::cout<<arr[i]<<' ';
    }
    return 0;
}

//Left Rotate the Array by One

#include <iostream>
#include <string>

int main(){
    int arr[100];
    int n;
    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }

    int k;
    std::cin>>k;
    std::cout<<"right or  left"<<'\n';

    std::string type{};
    std::getline(std::cin >> std::ws, type);

    int r = k % n;

    if(type == "right"){
        for(int i = n-r; i<n; i++){
            std::cout<<arr[i]<<' ';
        }

        for(int i=0;i<n-r; i++){
            std::cout<<arr[i]<<' ';
        }
    }

    if(type == "left"){
        for(int i=r; i<n; i++){
            std::cout<<arr[i]<<' ';
        }

        for(int i=0; i<r; i++){
            std::cout<<arr[i]<<' ';
        }
    }

    return 0;
}

//Rotate array by K elements

#include <iostream>

void swap(int *x, int *y){
    int temp = *x; 
    *x = *y;
    *y = temp;
}

int main(){
    int arr[]= {1,0,2,3,0,4,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j=-1;
    

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
        
    }
    if(j == -1){
        std::cout<<"No zeros found";
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(&arr[j], &arr[i]);
            j++;
        }
        
    }
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<' ';
    }
    return 0;
}

//Move all Zeros to the end of the array

#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num; 
    std::cin>>num;
    int index = -1;

    for(int i=0; i<n; i++){
        if(arr[i] == num){
            index = i;
            break;
        }
    }

    if(index == -1){
        std::cout<<"-1";
    }else{
        std::cout<<"index is "<<index;
    }

    return 0;
}

//Linear Search

#include <iostream>
#include <set>

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int m = sizeof(arr2) / sizeof(arr2[0]);

    std::set<int> st;
    for(int i=0;i<n; i++){
        st.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }

    int combine[1000];
    //set datastructure to array
    std::copy(st.begin(),st.end(),combine);
    int k = st.size();

    for(int i=0; i<k; i++){
        std::cout<<combine[i]<<' ';
    }

    return 0;
}

//Union of Two Sorted Arrays using set approach 

#include <iostream>

int main(){
    int arr[] = {8,2,4,5,3,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = ((n+1)*(n+2)) / 2;
    int nsum = 0;

    for(int i=0; i<n; i++){
        nsum += arr[i];
    }

    int missing = sum - nsum;

    std::cout<<missing;
    return 0;
}

//Find the Missing Number

#include <iostream>

int main(){
    int arr[] = {1,1,0,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
        }

        if(arr[i] == 0){
            count = 0;
        }
    }

    std::cout<<count;
    return 0;
}

//Count Maximum Consecutive One's in the array

#include <iostream>

int main(){
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int value = -1;

    for(int i=0; i<n; i++){
        int current_num = arr[i];
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == current_num){
                count++;
            }
        }

        if(count ==1){
            value = current_num;
        }
    }

    std::cout<<value;
    return 0;
}   

//Find the number that appears once, and the other numbers twice ----- Brute force approach t.c = 0(n^n) s.c = 0(1)

#include <iostream>

int main(){
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr^arr[i];
    }

    std::cout<<xorr;
    return 0;
}   

//Find the number that appears once, and the other numbers twice ------ optimal approach t.c = 0(n) s.c = 0(1)

#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {10,5,2,7,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;


    int len = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int count = 0;
            for(int k=i; k<=j; k++){
                count+= arr[k];
            }
            
            if(count == target){
                len = std::max(len, j-i+1);
            }
        }
    }

    std::cout<<len;
    return 0;
}   

//Longest Subarray with given Sum K(Positives) -------- Brute force approach t.c = 0(n^3) s.c = 0(1)

#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {10,5,2,7,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;


    int len = 0;
    for(int i=0; i<n; i++){
        int count =0; 

        for(int j=i; j<n; j++){
            count += arr[j];


            if(count == target){
                len = std::max(len, j-i+1);
            }
        }
    }

    std::cout<<len;
    return 0;
}   

//Longest Subarray with given Sum K(Positives) -------- Brute force approach t.c = 0(n^2) s.c = 0(1)

#include <iostream>
#include <algorithm>
#include <unordered_map>

int main(){
    int arr[] = {10,5,2,7,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    std::unordered_map<int, int > mp;
    long long sum = 0;
    int max_len = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum == k){
            max_len = std::max(max_len, i+1);
        }

        long long remainder = sum - k;
        if(mp.find(remainder) != mp.end()){
            int len = i - mp[remainder];
            max_len = std::max(max_len, len);
        }   

        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }    

    std::cout<< max_len;

    return 0;
}   

//Longest Subarray with given Sum K(Positives) ----- Better approach t.c = 0(n) s.c = 0(1)

#include <iostream>

int main(){
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 14;
    bool exist = false;
    int index1 = -1;
    int index2 = -1;

    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            
            if((arr[i] + arr[j]) == target){
                exist = true;
                index1 = i;
                index2 = j;
            }
        }

        if(exist == true) break;
    }

    if(exist == true){
        std::cout<<"YES"<<' '<<"With the indexes"<<' '<<index1<<' '<<index2;
    }else{
        std::cout<<"NO";
    }

}   

//Two Sum : Check if a pair with given sum exists in Array ------ Brute force approach t.c = 0(n^2) s.c = 0(1)

#include <iostream>
#include <unordered_map>

int main(){
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool exist = false;
    int index2 = -1;
    int index1 = -1;
    int target =  15;
    std::unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        int state = arr[i];
        int diff = target - state;

        if(mp.find(diff) != mp.end()){
            exist = true;
            index1 = i;
            index2 = mp[diff];

            break;
        }

        mp[state] = i;
    }
    
    if(exist){
        std::cout<<"YES"<<' '<<"With the indexes"<<' '<<index1<<' '<<index2;
    }else{
        std::cout<<"NO";
    }
    return 0;
}   

//Two Sum : Check if a pair with given sum exists in Array ------ Better approach t.c 0(n) s.c(n)

#include <iostream>

int main(){
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0) count_0++;
        if(arr[i] == 1) count_1++;
        if(arr[i] == 2) count_2++;
    }

    int index = 0;

    for(int i=0; i<count_0; i++){
        arr[index] = 0;
        index++;
    }
    for(int i=0; i<count_1; i++){
        arr[index] = 1;
        index++;
    }
    for(int i=0; i<count_2; i++){
        arr[index] = 2;
        index++;
    }

    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<' ';
    }

    return 0;
}

//Sort an array of 0s, 1s and 2s ------- Better approach t.c = 0(2n) s.c = 0(1)

#include <iostream>

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int mid =0; 
    int high = n-1;
    
    while(mid<=high){
        if(arr[mid] == 0){
            swap(&arr[mid], &arr[low]);
            mid++;
            low++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(&arr[mid], &arr[high]);
            high--;
        }
    }

    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<' ';
    }

    return 0;
}

//Sort an array of 0s, 1s and 2s ------- optimal approach t.c = 0(n) s.c = 0(1)

#include <iostream>

int main(){
    int arr[] = {7,0,0,1,7,7,2,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int answer = -1;

    for(int i=0; i<n; i++){
        int count = 0;

        for(int j=0; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }

            if(count > n/2){
                answer = arr[i];
            }
        }
    }

    if(answer != -1){
        std::cout<<answer;
    }

    return 0;
}

//Find the Majority Element that occurs more than N/2 times ---- Brute force approach t.c 0(n^2) s.c 0(1)


#include <iostream>
#include <unordered_map>

int main(){
    int arr[] = {7,0,0,1,7,7,2,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::unordered_map <int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(mp[arr[i]] > n/2){
            std::cout<<arr[i];
            break;
        }
    }
    
    return 0;
}

//Find the Majority Element that occurs more than N/2 times ---- Better approach t.c 0(n) s.c 0(n)

#include <iostream>
#include <unordered_map>

int main(){
    int arr[] = {7,0,0,1,7,7,2,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int el;
    int count = 0;

    for(int i=0; i<n; i++){
        if(count == 0){
            count = 1;
            el = arr[i];
        }
        else if(arr[i] == el){
            count++;
        }
        else{
            count--;
        }
        
    }

    int count_1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el){
            count_1++;
        }
    }

    if(count_1 > n/2){
        std::cout<<el;
    }

    
    return 0;
}

//Find the Majority Element that occurs more than N/2 times ---- optimal approach t.c 0(n) s.c 0(1)

#include <iostream>

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count_max = 0;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i; j<n; j++){
            count += arr[j];

            if(count > count_max){
                count_max = count;
            }
        }
    }
    std::cout<<count_max;
    return 0;
}

//Kadane's Algorithm : Maximum Subarray Sum in an Array ------- Brute force approach t.c = 0(n^2) s.c = 0(1)

#include <iostream>

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = 0;
    int sum = 0;
    int ans_start = -1;
    int ans_end = -1;

    for(int i=0; i<n; i++){

        if(sum == 0){
            ans_start = i;
        }

        sum += arr[i];

        if(sum > max_sum){
            max_sum = sum;
            ans_end = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    std::cout<<max_sum<<' '<<"and the max sub array is "<< '\n';

    for(int i=ans_start; i<=ans_end; i++){
        std::cout<<arr[i]<<' ';
    }

    return 0;
}

//"Kadane's Algorithm" : Maximum Subarray Sum in an Array ------- optimal approach using kadane's algo t.c = 0(n) s.c = 0(1)

#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {7,6,4,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_profit = 0;

    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            int curr_pro = arr[j] - arr[i];

            max_profit = std::max(max_profit, curr_pro);
        }
    }

    std::cout<<max_profit;
    return 0;
}

//Stock Buy And Sell ------- brute force approach t.c = 0(n^2) s.c = 0(1)

#include <iostream>
#include <algorithm>
#include <climits>

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;

    int max_profit = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else{
            max_profit = std::max(max_profit, (arr[i] - min));
        }
    }

    std::cout<<max_profit;
    return 0;
}

//Stock Buy And Sell ------- optimal approach t.c = 0(n) s.c = 0(1)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> rearrange_array(vector<int>& arr){
        vector<int> pos;
        vector<int> neg;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] > 0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }

        for(int i=0; i< arr.size()/2; i++){
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }

        return arr;
    }

};

//Rearrange Array Elements by Sign t.c = O(N+N/2) s.c = O(n)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> rearrange_array(vector<int> &arr){
        int pos_index = 0;
        int neg_index = 1;
        vector<int> ans(arr.size(), 0);

        for(int i=0; i< arr.size(); i++){
            if(arr[i] > 0){
                ans[pos_index] = arr[i];
                pos_index += 2;
            }
            else{
                ans[neg_index] = arr[i];
                neg_index += 2;
            }
        }

        return ans;

    }

};

//Rearrange Array Elements by Sign t.c = O(N) s.c = O(N)

#include <iostream>

int main(){
    int arr[] = {3,5,8,15,19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 9;
    int ans;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    std::cout<<ans;
}

//lower bound problem t.c = O(logn) s.c = O(1)

#include <iostream>

int main(){
    int arr[] = {1,2,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;
    int ans;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid]>target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    std::cout<<ans;
}


//upper bound problem t.c = O(logn) s.c = O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return low;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Floorceil{
public:

    int floor(int arr[], int n, int tar){
        int low = 0, high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = (low + high) / 2;

            if(arr[mid] <= tar){
                ans = arr[mid];
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }

        return ans;
    }

    int ceil(int arr[], int n, int tar){
        int low = 0, high = n-1;
        int ans = -1;

        while(low<= high){
            int mid = (low + high) / 2;
            
            if(arr[mid] >= tar){
                ans = arr[mid];
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }

    pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
        int f = floor(arr, n, x);
        int c = ceil(arr, n, x);
        return make_pair(f, c);
    }

};

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 25;

    Floorceil finder;
    pair<int, int> ans = finder.getFloorAndCeil(arr, n, x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;
    return 0;
}

//  Floor and Ceil in Sorted Array t.c = O(logn) s.c = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int lowerbound(vector<int>& nums, int n, int target) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperbound(vector<int>& nums, int n, int target) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums, n, target);
        
        if (lb == n || nums[lb] != target) {
            return {-1, -1};
        }

        int ub = upperbound(nums, n, target);
        return {lb, ub - 1};
    }
};

//find-first-and-last-position-of-element-in-sorted-array t.c = O(logn) s.c = O(1)