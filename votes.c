# include<stdio.h>
int main()
{
    char name[40];
    int bjp_count=0,congress_count=0,shivsena_count=0,manase_count=0,partyid; 
    for(int i=1;i<=10;i++)
    { 
        printf("***********\n");
        printf("enter your full name:\n");
        scanf("%s",name);
        printf("THE PARTIES NAME:101.congress, 102.bjp, 103.shivsena, 104.manase:\n");
        printf("please select the party which you want to vote:\n");
        scanf("%d",&partyid);
        //scanf("%d",&vote);
        printf("hi %s\n",name);
        if(partyid==101)
        {
            printf("your vote is : congress\n");
            congress_count=congress_count+1;
        }
        else if(partyid==102)
        {
            printf("your vote is :bjp\n");
            bjp_count=bjp_count+1;
        }
        else if(partyid==103)
        {
            printf("your vote is :shivsena\n");
            shivsena_count=shivsena_count+1;
        }
        else if(partyid==104)
        {
        printf("your vote is :manase\n");
        manase_count=manase_count+1;
        }
        else
        {
            printf("please select party\n");
        }  
    }
        printf("the total votes for\n congress:%d\n  bjp:%d\n shivsena:%d\n manase:%d\n",congress_count,bjp_count,shivsena_count,manase_count);
        if(congress_count>bjp_count && congress_count >shivsena_count && congress_count>manase_count)
        {
            printf("congress wins");
        }
        if(bjp_count>congress_count && bjp_count >shivsena_count && bjp_count>manase_count)
        {
            printf("bjp wins");
        }

}
