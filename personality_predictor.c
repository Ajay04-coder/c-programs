#include<stdio.h>
int main (){
    int Birthdate,d,m,sum;
    printf("Enter your birthdate :\n");
    scanf("%d",&Birthdate);
    if(Birthdate<=0 || Birthdate>=32){
        printf("invalid birthdate");
        return 0;
    }
    
    d=Birthdate/10;
    m=Birthdate%10;
    sum=d+m;
    printf("predicting your personality......\n");
    
    if (sum >= 10) {
    sum = (sum / 10) + (sum % 10);
}
    if (sum==1){
        printf("1. The Leader \n");
        printf("Strengths: Independent, confident, ambitious, and courageous.\nWeakness: Can be stubborn or impatient.\nFun prediction: You may enjoy taking charge of a challenging project and inspiring others.");
    }
    else if (sum==2){
     printf("2. The Peacemaker \n");
     printf("Strengths: Cooperative, patient, empathetic, and diplomatic.\nWeakness: May overthink decisions or avoid disagreements.\nFun prediction: You may become the person your friends turn to when they need advice.");
    }
    else if (sum==3){
printf("3. The Creator \n");
printf("Strengths: Imaginative, expressive, energetic, and humorous.\nWeakness: May get distracted or leave projects unfinished.\nFun prediction: An unexpected creative idea could become your next exciting hobby.");
    }

    else if (sum==4){
printf("4. The Builder \n");
printf("Strengths: Reliable, disciplined, practical, and organised.\nWeakness: May resist change or become too rigid.\nFun prediction: A project built through consistent effort could become a source of pride.");
    }
    else if (sum==5){
printf("5. The Adventurer \n");
printf("Strengths: Curious, adaptable, bold, and open-minded.\nWeakness: May get bored with routines or act impulsively.\nFun prediction: Trying something unfamiliar could introduce you to an exciting opportunity.");
    }
    else if (sum==6){
printf("6. The Protector \n");
printf("Strengths: Caring, responsible, loyal, and supportive.\nWeakness: May take on too many responsibilities.\nFun prediction: A small act of kindness could strengthen an important friendship.");
    }
    else if (sum==7){
printf("7. The Thinker \n");
printf("Strengths: Analytical, observant, curious, and reflective.\nWeakness: May overanalyse situations or prefer working alone.\nFun prediction: Following your curiosity could lead you to discover a fascinating new subject.");
    }
    else if (sum==8){
printf("8. The Strategist \n");
printf("Strengths: Determined, organised, strategic, and goal-oriented.\nWeakness: May become overly competitive or focus too much on results.\nFun prediction: A well-planned goal could motivate you to achieve something meaningful.");
    }
    else {
printf("9. The Humanitarian \n");
printf("Strengths: Compassionate, generous, idealistic, and understanding.\nWeakness: May neglect personal needs while helping others.\nFun prediction: Contributing to a cause you care about could give you a strong sense of purpose.");
    }


    


    
    return 0;
}