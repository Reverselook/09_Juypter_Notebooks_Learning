#include <stdio.h>
#include <stdint.h>

void XorByOneKey(uint8_t *pShellcode, size_t sShellcodeSize, uint8_t bKey) {
    for (size_t i = 0; i < sShellcodeSize; i++) {
        pShellcode[i] = pShellcode[i] ^ bKey;
    }
}

int main() {
    // Example shellcode (you can replace this with your own data)
    uint8_t shellcode[] = {0x90, 0x90, 0x90, 0x90, 0x90};
    size_t shellcodeSize = sizeof(shellcode);
    uint8_t key = 0xAA;

    printf("Original shellcode: ");
    for (size_t i = 0; i < shellcodeSize; i++) {
        printf("%02X ", shellcode[i]);
    }
    printf("\n");
    
}
