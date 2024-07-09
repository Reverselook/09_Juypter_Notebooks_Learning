#include <Windows.h>
#include <stdio.h>

int main(){

    PVOID pAddress = HeapAlloc(hHeap:GetProcessHeap(), dwFlags:0, dwBytes:100);

    printf(_Format:"[+] Base Address Of Allocated Memory : 0x%p \n", pAddress);
    printf(_Format:"[#] Press <Enter> To Quit ... ")
    getchar();

    return 0;

}

