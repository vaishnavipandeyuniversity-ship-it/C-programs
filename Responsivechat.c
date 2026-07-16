#include<stdio.h>
int main(){
    printf("HI whats your name?");
    scanf("%s",&name);
    printf("whats your age?");
    scanf("%d",&age);
    printf("whats your gender?");
    scanf("%s",&gender);
    printf("what is your profession");
    scanf("%s",&profession);
    printf("How is your mood now?");
    scanf("%s",&mood);
    switch(mood){
        case1:
        if(mood == happy){
            printf("Its good to hear that you are feeling happy");
            printf("if you don't have any issue can you let us know what made you happy");
            scanf("%s",&cause);
            printf("share that happiness with your friends and family")
            printf("it was nice to meet you");
            printf("%s%d%s%s%s%s",name,age,gender,profession,mood,cause);
        }
        case2:
        if(mood == sad){
            printf("Its sad to hear that you are feeling sad");
            printf("if you don't have any issue can you let us know what made you sad");
            scanf("%s",&cause);
            printf("share it with your friends and family,it will make you feel good/n Do something that will make you happy");
            printf("it was nice to meet you");
            printf("%s%d%s%s%s%s",name,age,gender,profession,mood,cause);
        }
        case3:
        if(mood == angry){
            printf("Its sad to hear that you are feeling angry");
            printf("if you don't have any issue can you let us know what made you angry");
            scanf("%s",&cause);
            printf("just calm yourself and don't let that agression affects your loved ones")
            printf("it was nice to meet you");
            printf("%s%d%s%s%s%s",name,age,gender,profession,mood,cause);
        }
        case4:
        if(mood == Excited){
            printf("Its good to hear that you are feeling Excited");
            printf("if you don't have any issue can you let us know what you are excited for");
            scanf("%s",&cause);
            printf("Enjoy this pretty good moment and keep calmness in you.")
            printf("it was nice to meet you");
            printf("%s%d%s%s%s%s",name,age,gender,profession,mood,cause);
        }
        case5:
        if(mood == Nervous){
            printf("Its sad to hear that you are feeling nervous but everyone feels that its okay");
            printf("if you don't have any issue can you let us know what made you feel nervous");
            scanf("%s",&cause);
            printf("just calm yourself and don't let that affect your performance or confidence")
            printf("it was nice to meet you");
            printf("%s%d%s%s%s%s",name,age,gender,profession,mood,cause);
        }
    }
}
