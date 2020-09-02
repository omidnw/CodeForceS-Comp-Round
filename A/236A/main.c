#include <stdio.h>
#include <string.h>

int main(){
    char InPuTCharaCTerS[101];
    scanf("%s", InPuTCharaCTerS);
    int res = strlen(InPuTCharaCTerS);
    for (int i = 0; i < strlen(InPuTCharaCTerS); i++){ 
        for (int j = i+1; j < strlen(InPuTCharaCTerS); j++){ 
            if (InPuTCharaCTerS[i] == InPuTCharaCTerS[j]){
                res--;
                break;
            }
        }
    }
    puts(res % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}