#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main() {
    void *ptr = NULL;
    int (*fptr)(int, int); // Function pointer signature should match the function being loaded
    int iNo1 = 10, iNo2 = 10, iRet = 0;

    ptr = dlopen("/home/devendra/Desktop/LSP/Dynamic/library.so", RTLD_LAZY);
    if (ptr == NULL) {
        printf("UNABLE TO LOAD LIBRARY..\n");
        return -1;
    }

    // Correct the way you use dlsym to load the function pointer
    fptr = (int (*)(int, int))dlsym(ptr, "Addition");
    if (fptr == NULL) {
        printf("UNABLE TO LOAD ADDRESS OF FUNCTION..\n");
        return -1;
    }

    // Call the function using the function pointer
    iRet = fptr(iNo1, iNo2);
    printf("ADDITION IS: %d\n",iRet);

    dlclose(ptr); // Close the library handle after use

    return 0;
}
