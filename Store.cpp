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