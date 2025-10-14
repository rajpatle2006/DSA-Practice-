//Find Union and Intersection of two arrays
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // input sizes
    
    int A[n], B[m];
    
    for(int i = 0; i < n; i++) scanf("%d", &A[i]); // input A
    for(int i = 0; i < m; i++) scanf("%d", &B[i]); // input B
    
    qsort(A, n, sizeof(int), cmp); // sort A
    qsort(B, m, sizeof(int), cmp); // sort B
    
    // Intersection
    int i = 0, j = 0;
    printf("Intersection: ");
    while(i < n && j < m) {
        if(A[i] == B[j]) {
            printf("%d ", A[i]);
            i++; j++;
        } else if(A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    // Union
    i = 0; j = 0;
    printf("\nUnion: ");
    while(i < n && j < m) {
        if(A[i] == B[j]) {
            printf("%d ", A[i]);
            i++; j++;
        } else if(A[i] < B[j]) {
            printf("%d ", A[i++]);
        } else {
            printf("%d ", B[j++]);
        }
    }
    
    while(i < n) printf("%d ", A[i++]);
    while(j < m) printf("%d ", B[j++]);
    
   return 0;
}
