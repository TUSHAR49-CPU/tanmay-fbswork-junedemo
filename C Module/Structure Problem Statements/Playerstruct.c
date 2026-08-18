#include<stdio.h>
#include<stdlib.h>
typedef struct Player
{
	char name[50];
	int matchesplayed;
	int runs;
	int wicket;
}Player;

void AcceptPlayer(Player* p,int size)
{
	for(int i=0;i<size;i++)
	{
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Name of Player: ");
        scanf("%s",p[i].name);

        printf("Matches played By Player: ");
        scanf("%d",&p[i].matchesplayed);

        printf("Runs made by Player: ");
        scanf("%d",&p[i].runs);

        printf("Wickets taken by Player: ");
        scanf("%d",&p[i].wicket);
	}
}
void display(Player* p,int size)
{
	for(int i=0;i<size;i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name    : %s\n", p[i].name);
        printf("Matches : %d\n", p[i].matchesplayed);
        printf("Runs    : %d\n", p[i].runs);
        printf("Wickets : %d\n", p[i].wicket);
    }
}
void sortByMaxRuns(Player* p,int size)
{
	int maxRuns=p[0].runs;
    int Playerruns=0;
    
    for(int i=0;i<size;i++)
    {
        if (p[i].runs>maxRuns)
        {
            maxRuns=p[i].runs;
            Playerruns=i;
        }
    }
    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name    : %s\n", p[Playerruns].name);
    printf("Matches : %d\n", p[Playerruns].matchesplayed);
    printf("Runs    : %d\n", p[Playerruns].runs);
    printf("Wickets : %d\n", p[Playerruns].wicket);
}

void sortByMaxWickets(Player* p,int size)
{
	int maxWickets=p[0].wicket;
    int PlayerWickets=0;
    
    for(int i=0;i<size;i++)
    {
        if (p[i].runs>maxWickets)
        {
            maxWickets=p[i].wicket;
            PlayerWickets=i;
        }
    }
    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name    : %s\n", p[PlayerWickets].name);
    printf("Matches : %d\n", p[PlayerWickets].matchesplayed);
    printf("Runs    : %d\n", p[PlayerWickets].runs);
    printf("Wickets : %d\n", p[PlayerWickets].wicket);
}

void main()
{
	int size=10;
	
	Player* p=(Player*)malloc(size*sizeof(Player));
	AcceptPlayer(p,size);
	display(p,size);
	sortByMaxRuns(p,size);
	sortByMaxWickets(p,size);

}
