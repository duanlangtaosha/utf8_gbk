/*
 * main.c
 *
 *  Created on: 2018年7月4日
 *      Author: Administrator
 */

#include "stdio.h"
#include "convert.h"

extern void convet_test(void);
extern int gbk2utf8(char **ptr, void *pin_buf, s32 in_len);

int main()
{
	FILE *stream, *stream2;


	char in[100];
	char *pout;
	s32 len;

//	make_uni2gbk_tab();
	 /* Open for write */
   if( (stream = fopen( "data", "w+" )) == NULL )
	  printf( "The file 'data' was not opened\n" );
   else
	  printf( "The file 'data' was opened\n" );


   if( (stream2 = fopen( "data2", "w+" )) == NULL )
	  printf( "The file 'data2' was not opened\n" );
   else
	  printf( "The file 'data2' was opened\n" );

	strcpy(in, "a1严歌谣去大发送打发");

	len = gbk2utf8(&pout, in, strlen(in));
	printf("out_buf=%s\n", pout);
	printf("out_buf=%x\n", pout);

	fprintf( stream2, "%s", pout);
	if (!pout)
	{
		return 0;
	}

	strncpy(in, pout, sizeof(in) - 1);
//	free(pout);

	len = utf82gbk(&pout, in, strlen(in));
	printf("out_buf=%s\n", pout);
	fprintf( stream, "%s", pout);
	free(pout);



//	convet_test();
	printf("hhhhhhhhhhhhh");
//	while(1);

//   int numclosed;

   /* Open for write */
//   if( (stream2 = fopen( "data2", "w+" )) == NULL )
//      printf( "The file 'data2' was not opened\n" );
//   else
//      printf( "The file 'data2' was opened\n" );

//   fprintf( stream2, "%s%c", s, c );

   /* Close stream */
   if(fclose( stream2 ))
	 printf( "The file 'data2' was not closed\n" );

   if(fclose( stream ))
	 printf( "The file 'data2' was not closed\n" );


   /* All other files are closed: */
//   numclosed = _fcloseall( );
//   printf( "Number of files closed by _fcloseall: %u\n", numclosed );

   while(1);
}


