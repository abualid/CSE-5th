#include<stdio.h>
int main()
{
int bt[20], wt[20], tat[20], i, n;
float wtavg, tatavg;
printf("Enter the number of processes: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("\nEnter Burst Time for Process %d: ", i);
scanf("%d", &bt[i]);
}
wt[1] = wtavg = 0;
tat[1] = tatavg = wt[1]+bt[1];
for(i=2;i<=n;i++)
{
wt[i] = wt[i-1] +bt[i-1];
tat[i] = wt[i] +bt[i];
wtavg =wtavg + wt[i];
tatavg = tatavg + tat[i];
}
printf("\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n");
for(i=1;i<=n;i++)
{
printf("\n\t P%d \t\t %d \t\t %d \t\t %d", i, bt[i], wt[i], tat[i]);
}

printf("\nAverage Waiting Time: %0.2f", wtavg/n);
printf("\nAverage Turnaround Time: %0.2f", tatavg/n);
return 0;
}
