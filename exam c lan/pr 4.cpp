#include <stdio.h>
#include <string.h>


struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};


void iLaptopDetails(struct Laptop *laptops, int n);
void dLaptopDetails(const struct Laptop *laptops, int n);

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    iLaptopDetails(laptops, n);

    dLaptopDetails(laptops, n);

}

void iLaptopDetails(struct Laptop *laptops, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for laptop %d:\n", i + 1);
        
        printf("Company Name: ");
        scanf(" %[^\n]%*c", laptops[i].company_name); 
        
        printf("Processor: ");
        scanf(" %[^\n]%*c", laptops[i].processor); 

        printf("Price: ");
        scanf("%f", &laptops[i].price);

        printf("\n");
    }
}


void dLaptopDetails(const struct Laptop *laptops, int n) {
    printf("Laptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
        printf("\n");
    }
}

