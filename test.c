
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
#include <stdio.h>
#include <time.h>
 
fiftyseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 50.0);
}
 
twoseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 2.0);
}
 
redlight()
{
    printf("X Ave. - RED; Y Blvd. - GREEN\n");
    fiftyseconds();
    printf("X Ave. - RED; Y Blvd. - YELLOW\n");
    twoseconds();
    printf("X Ave. - RED; Y Blvd. - RED\n");
    twoseconds();
    printf("X Ave. - GREEN; Y Blvd. - RED\n");
    fiftyseconds();
    printf("X Ave. - YELLOW; Y Blvd. - RED\n");
    twoseconds();
    printf("X Ave. - RED; Y Blvd. - RED\n");
    twoseconds();
}
     
int main()
{
    printf("Stoplight 1.0\n\n");
    while(1)
        redlight();
    return 0;
}