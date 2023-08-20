#include <stdlib.h>

/* Girilen dizideki en büyük elemaný bulan programý C dilinde Rekürsif olarak yazýnýz. */
 int maximum(int arr[], int n) {
    // Dizinin sadece bir elemaný kaldýðýnda, bu elemaný döndür
    if (n == 1){
	
        return arr[0];
}
    // Dizinin ilk elemanýný al
    int first = arr[0];

    // Ýlk elemandan sonraki elemanlar içinde en büyüðü bul
    int rest_max = maximum(arr + 1, n - 1);

    // Ýlk eleman ile geri kalan elemanlar arasýndaki maksimumu hesapla
    if (first > rest_max){
	
        return first;
    }
    else{
	
        return rest_max;
    }
}    
int main() {
	
int arr[];
int size,j;	
printf("dizinin boyutunu giriniz");
scanf("%d",&size);	
printf("dizinin elemanlarini girin ");
for(j=0;j<size;j++){
	
	scanf("%d",&arr[j]);
}
 int max = maximum(arr, size);
    printf("En buyuk eleman: %d\n", max);
}
