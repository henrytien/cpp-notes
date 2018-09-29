#include<stdio.h>
#include<stdlib.h>
#include<sys/sys/time.h>
#include<sys/sys/types.h>

int main()
{
    fd_set fds_read;

    FD_ZERO(&fds_read);
    FD_SET(0,&fds_read);

    // select
    struct timeval stMonTime;
    /*Wait up to 10000us*/
    stMonTime.tv_sec = 0;
    stMonTime.tv_usec = 10000;

    int32_t iOpenFDNum = 0;
    iOpenFDNum = select(FD_SETSIZE,&fds_read,NULL,NULL,&stMonTime);
    /*
    //处理请求和消息
    ManServerFDSet(fds_read,iOpenFDNum);
    FD_ISSET()
    */
    if(iOpenFDNum == -1)
        printf("select()");
    else if(iOpenFDNum)
        printf("Data is available now.\n");
        /*FD_ISSET(0,&fds_read) will be true*/
    else
        printf("No data within five seconds.\n");
    exit(EXIT_SUCCESS);
}
