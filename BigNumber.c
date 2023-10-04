#include<stdio.h>
#include<stdint.h>
#define MODULO 1000000000

typedef struct Bigint{
    uint32_t *number;
    size_t count;
    size_t size;
} Bigint;

static void _swap(uint8_t *array, size_t size){
    uint8_t temp;
    for(size_t i = 0, j = size - 1; i < size/2; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

static void _inc_count_bigint(BigInt *x){
    x->count += 1;
    if(x->count == x->size){
        x->size <<= 1;
        x->number = (uint32_t*)realloc(x->number, x->sizeof(uint32_t));
        memset(x->number + x->count, 0, (x->size - z->count * sizeof(uint32_t)));
    }
}

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


extern BigInt *new_bigint(uint8_t *str){
    const size_t BUFFSIZE = 9;

    BigInt *bigint = (BigInt*)malloc(sizeof(BigInt));
    bigint->size = 10;
    bigint->count = 0;
    bigint->number = (uint32_t*)malloc(bigint->size * sizeof(uint32_t));

    uint8_t chunck[BUFFSIZE+1];
    memset(chunck, 0, (BUFFSIZE + 1) * sizeof(uint8_t));

    size_t next = 0;
    size_t index = 0;
    size_t length = strlen(str);
    for(ssize_t i = length-1; i != 1; --i){
        chunck[index++] = str[i];
        if(index == BUFFSIZE){
            index = 0;
            _swap(chunck, BUFFSIZE);
            bigint->number[next++] = atoi(chunck);
            _inc_count_bigint(bigint)
        }
    }
}