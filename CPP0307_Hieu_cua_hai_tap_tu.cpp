#include <stdio.h>
#include <cstring>

void xoaLapLai(char s[200][200], int &count){
    int i,j,k;
    for (i = 0; i < count; i++)
    {
        for(j = i+1; j < count; j++){
            if(strcmp(s[i],s[j]) == 0){
                for(k = j; k < count-1; k++){
                    strcpy(s[k],s[k+1]);
                }
                --count;
                --j;
            }
        }
    }
    
}

void sapXepTuDien(char s[200][200], int count){
    int i,j;
    for(i = 0; i < count; i++){
        int vtmin = i;
        for(int j = i+1; j < count; j++){
            if(strcmp(s[j], s[vtmin]) < 0){
                vtmin = j;
            }
        }
        char temp[200];
        strcpy(temp, s[i]);
        strcpy(s[i], s[vtmin]);
        strcpy(s[vtmin], temp);
    }
}

int main(){
    int T;
    scanf("%s",&T);
    while(T--){
        char s1[200][200];
        char s2[200][200];
        int count_1 = 0, count_2 = 0;
        char kitu;
        do{
            scanf("%s", s1[count_1]);
            ++count_1;
            kitu = getchar();
        }while(kitu == ' ');
        xoaLapLai(s1, count_1);
        do{
            scanf("%s", s2[count_2]);
            ++count_2;
            kitu = getchar();
        }while(kitu == ' ');
        xoaLapLai(s2, count_2);
        char s_result[200][200];
        int count_result = 0;
        for(int i = 0; i < count_1; i++){
            bool check = true;
            for(int j = 0; j < count_2; j++){
                if(strcmp(s1[i],s2[j]) == 0){
                    check = false;
                    break;
                }
            }
            if(check == true){
                strcpy(s_result[count_result], s1[i]);
                ++count_result;
            }
        }
        sapXepTuDien(s_result, count_result);
        for(int i = 0; i < count_result; i++){
            printf("%s ",s_result[i]);
        }
        printf("\n");
    }
}