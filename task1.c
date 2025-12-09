#include <stdio.h>

int main() {
    char message[100];
    int count;
    printf("Enter a message:");
    scanf("%s",message);
    return 0;
    printf("Enter the count u want to shift:");
    scanf("%d",&count);
    for(int i=0;message[i]!='\0';i++){
        char c=message[i];
        if(isupper(c))
            message[i]=(c-'A'+shift)%26+'A';
        else if(islower(c))
            message[i]=(c-'a'+shift)%26+'a';
    }
        printf("Encrypted:%s\n",message);

    for(int i=0;message[i]!='\0';i++) {
        char c=message[i];
        if(isupper(c))
            message[i]=(c-'A'-shift+26)%26+'A';
        else if(islower(c))
            message[i]=(c-'a'-shift+26)%26+'a';
    }
    printf("Decrypted: %s\n", message);

}
