#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"



int main(int argc, char *argv[])
{
    int i=argv[0][0]-'0';
    while (1)
    {
        sleep(20);
        //printf(1,"philosopher %d is hungry!\n", i);
        pickup(i);
        //printf(1,"philosopher %d started to eat!\n", i);
        // for (long long c = 0; c < 10000000000; c++)
        // {
        //     //while (1);
        //     //Eating
        // }
        sleep(20);
        putdown(i);
        //printf(1,"philosopher %d is thinking!\n", i);
        // for (long long c = 0; c < 10000000000; c++)
        // {
        //     //Thinking
        // }

    }
}