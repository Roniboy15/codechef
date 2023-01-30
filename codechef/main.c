//
//  main.c
//  codechef
//
//  Created by Jaron Treyer on 22.09.22.
//

#include <stdio.h>
#include <string.h>
/*
int main(void) {
    int T;
    scanf("%d", &T);
    
    while(T--){
        int counter1 = 1;
        int counter2 = 1;
        int min = 1;
        int index = 0;
        int N;
        scanf("%d", &N);
        int distances[N];
        for(int i = 0; i < N; i++){
            scanf("%d", &distances[i]);
        }
        for(int j = 0; j < N-1; j++){
            if((distances[j+1] - distances[j]) <= 2){
                if(index%2 == 0){
                counter1++;
                }
                else{
                counter2++;
                }
                continue;
            }
            else{
                index++;
                
                if (counter1 > counter2) {
                    min = counter1;
                    counter1 = 1;
                }
                else{
                    min = counter2;
                    counter2 = 1;
                }
            }
        }
        if (counter1 > counter2)counter2 = counter1;
        if (index == 0)min = counter2;
        printf("%d %d\n", min, counter2);
    }
    return 0;
}

3
 2
 3 6
 3
 1 3 5
 5
 1 2 5 6 7*/

/*
int fac(int x){
    int sumfac = x;

    for (int i = x-1; i>=1; i--) {
        sumfac *= i;
    }
    return sumfac;
}

int main(){
    int X, N, sum = 0;
    scanf("%d %d", &X, &N);
    
    //length = X * 54;
    char train[55];
    //fgets(train, sizeof train, stdin);
    //for (int i = 0; i < length; i++) {
    int ersatzX = X;
    
    while (N--) {
        
        scanf("%s", train);
        printf("%s\n", train);
    
    int counter = 0, counter2 = 1;
    int j = 0, x = 53;
    
    while (j < 36) {
    for (; j < 36; j++, counter2++) {
        if (train[j] == '0')counter++;
        if (counter2 == 4){
            counter2 = 1;
            break;
        }
    }
        
    for (; x >= 35; x--, counter2++) {
        if (train[x] == '0')counter++;
        if (counter2 == 2){
            counter2 = 1;
            if (counter > ersatzX) {
                    sum+=(fac(counter) / (fac(ersatzX)*fac(counter - ersatzX)));
                    printf("%d\n", sum);

                }
            else if(counter == ersatzX){
                sum++;
                printf("%d\n", sum);
            }
            counter = 0;
            break;
            }
                
        }
        j++;
        x--;
    }
}
    printf("%d\n", sum);
}
*/

/*
int main(void) {
int N, cakes[100], Q, i;

scanf("%d", &N);

for(i = 0; i<N; i++){
    scanf("%d", &cakes[i]);
}

scanf("%d", &Q);

while(Q--){
    int task;
    scanf("%d", &task);
    
    int L, R, X, sum=0;
    
    if(task==1){
        scanf("%d %d %d", &L, &R, &X);
        
        for(int i = L-1; i<R; i++){
            cakes[i] += X;
        }
    }
    else if(task==2){
        for(int i = 0; i<N; i++){
            if(i%2 == 0){//odd
                sum += cakes[i];
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    else if(task==3){
        for(int i = 0; i<N; i++){
            if(i%2 != 0 ){//even
                sum += cakes[i];
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    else{
        printf("Not valid\n");
        break;
    }
}

return 0;
}

/*6
 2 9 5 2 1 8
 5
 2
 3
 1 1 3 2
 3
 2*/

// Aufgabe string taxes
/*
int main(void) {
    int T;
    scanf("%d", &T);
    
    while(T--){
        int N, X, Y;
        scanf("%d%d%d", &N, &X, &Y);
        char S[1001];
        scanf("%s", S);
        char search, replace;
         if(X >= Y){
             search = '1';
             replace = '0';
         }
            else{
                search = '0';
                replace = '1';
            }
        int counter = 0;
        int i = 0;
       
        for(i = 0; ; i++){
            if(S[i] == '\0'){
                if(counter == 0){
                    break;
                }
                int j = i-1;
                for(int x = 0; x<counter; x++, j--){
                    S[j] = replace;
                }
                break;
            }
            
            if(S[i] == search) continue;
            else{
                S[i] = search;
                counter++;
            }
        }
        if(counter == 0){
            printf("%d\n", counter);
            return 0;
        }
        if(search == '1') printf("%d\n", Y);
        else printf("%d\n", X);
    }
    
    return 0;
}
/*
 2
 4 7 3
 1101
 5 3 4
 00000
 */

//sorting numbers searching initial index (merge sort)

/*void myMergeSort(int songs[], int l, int r){
    
    if(l<r){
        int m = l + (r - l) / 2;
        
        myMergeSort(songs, l, m);
        myMergeSort(songs, m+1, r);
        
        int L, R;
        L = m - l + 1;
        R = r - m;
        int Left[L];
        int Right[R];
        for (int i = 0; i < L; i++) {
            Left[i] = songs[l+i];
        }
        for (int i = 0; i < R; i++) {
            Left[i] = songs[m+1+i];
        }
        int i = 0; // Initial index of first subarray
        int j = 0; // Initial index of second subarray
        int k = l; // Initial index of merged subarray
            while (i < L && j < R) {
                if (Left[i] <= Right[j]) {
                    songs[k] = Left[i];
                    i++;
                }
                else {
                    songs[k] = Right[j];
                    j++;
                }
                k++;
            }
         
            /* Copy the remaining elements of L[], if there
            are any *//*
            while (i < L) {
                songs[k] = Left[i];
                i++;
                k++;
            }
    }
    
}
*/

/*
    void merge(int arr[], int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
     
        //create temp arrays
        int L[n1], R[n2];
     
        //Copy data to temp arrays L[] and R[]
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];
     
        // Merge the temp arrays back into arr[l..r]
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
     
        // Copy the remaining elements of L[], if there are any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
     
        // Copy the remaining elements of R[], if there are any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
     
    // l is for left index and r is right index of the sub-array of arr to be sorted
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r) {
            // Same as (l+r)/2, but avoids overflow for
            // large l and h
            int m = l + (r - l) / 2;
     
            // Sort first and second halves
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
     
            merge(arr, l, m, r);
        }
    }

int main(){
    int T;
    scanf("%d", &T);
    
    while(T--) {
        int N, K, number;
        scanf("%d", &N);
        int songs[100];
        for (int i = 0; i < N; i++) {
            scanf("%d", &songs[i]);
        }
        scanf("%d", &K);
        number = songs[K-1];
        
        mergeSort(songs, 0, N-1);
        
        for (int i = 0; i < N; i++) {
            if(songs[i] == number){
                printf("%d\n", i+1);
                break;
            }
        }
    }
}

*/
 
//weight balance codechef
/*
void main(){
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int w1, w2, x1, x2, m;
        scanf("%d%d%d%d%d", &w1, &w2, &x1, &x2, &m);
        
        int totalChef = w2-w1;
        int totalMin = x1 * m;
        int totalMax = x2 * m;
        
        if(totalChef < 0){
            printf("%d", 0);
            continue;
        }
        
        if(totalChef >= totalMin && totalChef <= totalMax){
            printf("%d", 1);
            continue;
        }
        
        
    }
}
*/
/*
int findHighestMax(int saveMax[], int index, int n);

int main(void) {
    int T;
    scanf("%d", &T);
    
    while(T--){
        int n;
        scanf("%d", &n);
        
        int set[100];
        
        for(int i = 0; i<n; i++){
            scanf("%d", &set[i]);
        }
        
        int max = 1;
        int half;
        
        if(n%2 != 0){
            half = (n/2)+1;
        }
        else{
            half = n/2;
        }
        
        int warnung = 0;
        int saveMax[100];
        int i = 0;
        
        for(i = 0; i<n-1; i++){
            
            for(int x = 0; x < i; x++){
                
             if(set[i] == set[x]){
                 warnung = 1;
                 break;
             }
            }
            if(warnung == 1){
                warnung = 0;
                break;
            }
            
            for(int j = i+1; j<n; j++){
                
               
                if(set[j] == set[i]){
                    max++;
                    
                    /*if(max == half){
                    printf("%d\n", n-half);
                    warnung = 1;
                    break;
                    }*/
/*
                }
                else{
                    continue;
                }
            }
             
          /*  if(max%2 != 0){
                half -= (max/2)+1;
            }
            else{
                half -= max/2;
            }*//*
            saveMax[i] = max;
            max = 1;
        }
            printf("%d\n", n - findHighestMax(saveMax, i, n));
        }
    
    return 0;
}

int findHighestMax(int saveMax[], int index, int n){
    int max = saveMax[0];
    for (int i = 1; i < index; i++) {
        if(saveMax[i] > max && max<= (n*10)){
            max = saveMax[i];
        }
    }
    return max;
}
*/
/*
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    
    while(T--){
        int n;
        scanf("%d", &n);
        
        int set[100];
        
        for(int i = 0; i<n; i++){
            scanf("%d", &set[i]);
        }
        
        int max;
        int max2 = 0;
        
        int i, j;
        
        for(i = 0; i<n; i++){
            max = 0;
            for(j = 0; j<n; j++){
                
                if(set[j] == set[i]){
                    max++;
                }
                if(max > max2){
                    max2 = max;
                }
            }
            
        }
            printf("%d\n", n - max2);
        }
    
    return 0;
}

*/


/*
//isolation problem

// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(char *a, char *b) {
  char t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(char array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(char array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// main function
int main() {
    
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, q;
        scanf("%d%d", &x,&q);
        
        char s[100000];
        scanf("%s", s);
        
        while (q--) {
            int c;
            scanf("%d", &c);
            
            quickSort(s, 0, x - 1);
            
            int counter = 0;
            int ppl = 1;
            int i;
            int arr[10];
            int index_arr = 0;
            
            for (i = 0; i < x; i++) {
                if(s[i] != s[i+1]) continue;
                else{
                    counter++;
                    while(s[i]==s[i+1]){
                        ppl++;
                        i++;
                    }
                    arr[index_arr] = ppl;
                    ppl = 1;
                    index_arr++;
                }
            }
            if(c == 0){
                printf("%d\n", x);
                return 0;
            }
            int left = c-1;
            int big_index = 0;
            
            while (left--) {
                for (int i = 0; i < counter; i++) {
                    if(arr[i+1] > arr[big_index]) big_index=i+1;
                }
                arr[big_index] = 0;
            }
            
            int final = 0;
            for (int i = 0; i < counter; i++) {
                final += arr[i];
            }
            printf("%d\n", final-counter);
        }
    }
    
}
*/


/*


// basic stats

#include <stdio.h>
#include <stdlib.h>

void sortArr(int * p, int size);
void printArr(int * p, int size);
int *removeK(int *p, int size, int k);
double calcAverage(int*p, int size);


int main(void) {
    int T;
    scanf("%d", &T);
    
    while(T--){
        int n, k;
        scanf("%d%d", &n, &k);
        int *arr = malloc(n*sizeof(int));
        for (int*p = arr; p<arr+n; p++) {
            scanf("%d", p);
        }
        sortArr(arr, n);
        
        int newSize = n - (2*k);
        int *newP = removeK(arr, n, k);
        
        free(arr);
            
        double average = calcAverage(newP, newSize);
        
        printf("%f\n", average);
        free(newP);

    }
    
    return 0;
}



//insertion Sort
void sortArr(int * p, int size){
    int key;
    int * p1, *j;
    for (p1 = p+1; p1 < p+size; p1++) {
        key = *p1;
        j = p1 - 1;
        while (j >= p && *j > key) {
            *(j+1) = *j;
            j--;
        }
    *(j+1) = key;
    }
    
}

//print array
void printArr(int * p, int size){
    for (int*p1 = p; p1<p+size; p1++) {
        printf("%d", *p1);
    }
}

int *removeK(int *p, int size, int k){
    
    int *newArr = malloc((size-(2*k))*sizeof(int));
    
    for (int j = 0, i = k; i < size - k; i++, j++) {
        *(newArr+j) = *(p+i);
    }
    
    return newArr;
}

double calcAverage(int*p, int size){
double sum = 0;
for (int i = 0; i < size; i++) {
sum+= *(p+i);
}
sum /= size;
return sum;
}
*/


/*

// https://www.codechef.com/problems/HTMLTAGS
#include <stdio.h>
#include <stdlib.h>

char inputString() {
    char* str = NULL;
    str = malloc(sizeof(char));
    int currentLength = 0;
    int maxLength = 2;
    char c;
    int oTag = 0, cTag = 0, num = 0, let = 0, slash = 0, flag = 0;
    while (scanf("%c", &c) == 1 && c != '\n' && c != EOF) {
        if (currentLength + 1 > maxLength) {
            maxLength *= 2;
            str = (char*)realloc(str, maxLength);
        }
        str[currentLength] = c;
//        Check if correct HTML syntax
        
        if(currentLength == 0 && c != 60)return 0;
        if(c == 60){
            oTag++;
            if(oTag > 1)return 0;
            
        }
        if(currentLength == 1){
            if(c == 47){
                slash++;
                continue;
            }
            if(c < 97 || c > 122)return 0;
        }
        if(currentLength == 2){
            if(c < 48 || c > 57)flag = 1;
        }
        if(c == 62){
            cTag++;
            if(cTag > 1)return 0;
        }
        if(c > 47 && c < 58){
            num++;
            if(flag == 1 && num > 0)return 0;
            if(num > 1)return 0;
        }
        if(c > 96 && c < 123){
            let++;
            if(!flag && let > 1)return 0;
        }
        if(c == 47){
            slash++;
            if(slash > 1)return 0;
        }
        
        currentLength++;
    }
    str[currentLength] = '\0';
    
    if(str[currentLength-1] != 62)return 0;
    free(str);
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    fflush(stdin);
    while (t--) {
        int check;
        check = inputString();
        if(check == 0){
            printf("Error\n");
        }
        else{
            printf("Success\n");
        }
        fflush(stdin);
    }
   
    return 0;
}

*/


//binary tree
//https://www.codechef.com/problems/BINTREE

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    while(n--){
        long a, b;
        scanf("%ld%ld", &a,&b);
        
        int lengthA = log2(a);
        int lengthB = log2(b);

        int * arrA = malloc(1 + lengthA*sizeof(int));
        int * arrB = malloc(1 + lengthB*sizeof(int));
        
        int i = 0;
        
        while (a > 0) {
            *(arrA+lengthA-i) = a;
            i++;
            a /= 2;
        }
        
        int j = 0;
        while (b > 0) {
            *(arrB+lengthB-j) = b;
            j++;
            b /= 2;
        }
        
        int counter = 0;
        int * p1 = arrA, * p2 = arrB;
        while (p1 <= arrA+lengthA || p2 <= arrB + lengthB) {
            p1++;
            p2++;
            if( *p1 == *p2) counter++;
            else break;
            
        }
        if(lengthA == lengthB && lengthA <= counter){
            printf("0\n");
        continue;
        }
        int result = lengthA - counter + lengthB - counter;
        printf("%d\n", result);
     
    }
    return 0;
}


