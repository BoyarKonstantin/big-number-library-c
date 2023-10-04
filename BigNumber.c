#include<stdio.h>
#include<stdint.h>
#define MODULO 1000000000

typedef struct Bigint{
    uint32_t *number;
    size_t count;
    size_t size;
} Bigint;

extern BigInt *new_bigint(uint8_t *str);
extern void free_bigint(BigInt *x);

extern void add_bigint(BigInt *x, BigInt *y);
extern void sub_bigint(BigInt *x, BigInt *y)

extern void print_bigint(BigInt *x);

int main(){
    BigInt *x = new_bigint("99999999999999999999999999999999999999999999999999999999999999999");
    BigInt *y = new_bigint("22222222222222222222222222222222222222222222222222222222222222222222222222222");
    
    add_bigint(x, y);
    print_bigint(x)
    
    return 0;
}
