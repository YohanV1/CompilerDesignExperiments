
#include <stdio.h>

int main() {
    
    if (remove("output.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        perror("Error deleting file");
    }

    return 0;
}
