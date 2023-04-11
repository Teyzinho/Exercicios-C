#include <stdio.h>
 
int main() {
 
    float n;
    float raio;
    float area;
    
    n = 3.14159;
    
    scanf("%f",&raio);
    
    area = n*(raio*raio);
    
    printf("A=%f",area);
    
    return 0;
}
