#include "Syn6288.h"

Syn6288 syn;

char text1[] = {0xB3,0xC9,0xB6,0xBC,0xBC,0xAB,0xC8,0xA4,0xBF,0xC6,0xBC,0xBC,0xD3,0xD0,0xCF,0xDE,0xB9,0xAB,0xCB,0xBE}; //成都极趣科技有限公司
uint8_t text2[]={0x74,0x61,0x79,0x6C,0x6F,0x72}; //taylor
uint8_t text3[]={0x65,0x63,0x65,0x33,0x38,0x37}; //ece387

int main(void)
{
	syn.play(text2,sizeof(text2),2);
	my_delay_ms(1000);
	syn.play(text3,sizeof(text3),3);
	my_delay_ms(1000);
	
	return 0;
}

/* 
 * Handles larger delays the _delay_ms can't do by itself (not sure how accurate)  
 * Note no DBC as this function is used in the DBC !!! 
 *
 * borrowed from : https://www.avrfreaks.net/forum/delayms-problem 
 * */
void my_delay_ms(unsigned int delay) 
{
	unsigned int i;

	for (i=0; i<(delay/10); i++) 
	{
		_delay_ms(10);
	}
	for (i=0; i < (delay % 10); i++)
	{
		_delay_ms(1);
	}
}

