#include <stdio.h>


struct StructureExample {
    int intValue;
    float floatValue;
    char charValue;
};


union UnionExample {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    
    struct StructureExample structVar;
    union UnionExample unionVar;

    
    structVar.intValue = 10;
    structVar.floatValue = 3.14;
    structVar.charValue = 'A';

    
    unionVar.intValue = 20;
    
    
    unionVar.floatValue = 6.28;
    
    printf("Structure Values:\n");
    printf("Int Value: %d\n", structVar.intValue);
    printf("Float Value: %.2f\n", structVar.floatValue);
    printf("Char Value: %c\n\n", structVar.charValue);

    printf("Union Values:\n");
    printf("Int Value: %d\n", unionVar.intValue);
    printf("Float Value: %.2f\n", unionVar.floatValue);
    printf("Char Value: %c\n", unionVar.charValue); 

    return 0;
}
