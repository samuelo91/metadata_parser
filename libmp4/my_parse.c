#include<stdio.h>

#include<libmp4.h>


int main(void)
{
 printf("Start parsing stuff\n");

struct mp4_demux* demux = mp4_demux_open("/home/ait/Desktop/ExpOnboardVideos/running_silvan/running_silvan1.mp4");

int count = mp4_demux_get_track_count(demux);

 printf("Count: %d \n", count);

 return 0;
}
