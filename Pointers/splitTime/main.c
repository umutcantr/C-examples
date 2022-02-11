// This program finds how much time elapsed since midnight by entered sec value.
#include <stdio.h>


void split_time(long total_sec, int *hr, int *min, int *sec);

int hr, min, sec;

int main()
{
    long total_sec;

    printf("Enter total seconds since midnight:\n");
    scanf("%d", &total_sec);

    if(total_sec >= 86400){ // 24hr x 60 x 60 = 86400 is max total sec.
        printf("Total seconds too much.");
        exit(0);
    }

    split_time(total_sec, &hr, &min, &sec);

    printf("Hour:%d\n"
           "Minute:%d\n"
           "Second:%d\n",
           hr, min, sec);

    return 0;
}


void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec / 3600;
    *min = (total_sec - ((*hr) * 3600)) / 60;
    *sec = (total_sec - ((*hr) * 3600) - ((*min) * 60));
}
