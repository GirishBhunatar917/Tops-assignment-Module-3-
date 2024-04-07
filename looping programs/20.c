#include <stdio.h>

int main() {
    int rowCount = 5; 
    int colCount = 10; 
    int num = 1;

    
    for (int i = 0; i < rowCount; i++) {
        
        for (int j = 0; j < colCount; j++) {
            
            printf("%02d ", num++);
        }
        printf("\n"); 
    }

    return 0;
}
