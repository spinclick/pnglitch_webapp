#ifndef GLOBALS_H_
#define GLOBALS_H_
#define MAX_PNG_IN_BYTESIZE 10737418240 //10MB
#define MAX_PNG_OUT_BYTESIZE 32212254720 //30MB
//#define IN_BUF_SIZE 1024

//Need to be global for custom libpng write/read fns
extern long long MY_PNG_READ_OFFSET;
extern unsigned char *ENTIRE_PNG_BUF;
extern long long PNG_LENGTH; //Also used for writing

#endif