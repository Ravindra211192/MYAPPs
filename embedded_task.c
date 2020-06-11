/******************************************************************************

*******************************************************************************/
#include <stdio.h> 
#include <stdint.h>

void print_info(uint8_t raw[6]) { 
    // Implement this function.
    uint8_t manufacturer_id[2];
    uint8_t serial[4];
    
	//decoding manufacturer id
    for(int i=0;i<sizeof(manufacturer_id);i++){
        manufacturer_id[i]=raw[i];
        printf("manufacturer id at %d: %x \n",i,manufacturer_id[i]);
    }
    
	//decoding Serial data
    for(int i=0;i<sizeof(serial);i++){
        serial[i]=raw[i+2];
        printf("Serial data at %d: %x \n",i,serial[i]);
    }
}
int main(int argc, char const *argv[]) { 
    uint8_t example[6] = {0xa5, 0x11, 0x06, 0x05, 0x60, 0x70}; 
    print_info(example); 
    return 0; 
}

