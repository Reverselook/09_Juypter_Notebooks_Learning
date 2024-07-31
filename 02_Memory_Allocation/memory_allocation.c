#include <Windows.h>
#include <stdio.h>

int main(){

    // Method Using HeapAlloc()
    PVOID pAddress = HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY, 100);
    CHAR* cString = "This is a memory allocation example";

    memcpy(pAddress, cString, strlen(cString));
    
    printf("[+] Base Address Of Allocated Memory : 0x%p \n", pAddress);
    printf("[#] Press <Enter> To Quit ... ");
    getchar();

    return 0;

}

