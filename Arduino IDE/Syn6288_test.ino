#include "Syn6288.h"
Syn6288 syn;
uint8_t text1[]={0xB3,0xC9,0xB6,0xBC,0xBC,0xAB,0xC8,0xA4,0xBF,0xC6,0xBC,0xBC,0xD3,0xD0,0xCF,0xDE,0xB9,0xAB,0xCB,0xBE}; //成都极趣科技有限公司
uint8_t text2[]={0x74,0x61,0x79,0x6C,0x6F,0x72}; //taylor
uint8_t text3[]={0x65,0x63,0x65,0x33,0x38,0x37}; //ece387
void setup()
{
Serial.begin(9600);
//syn.Slaveboudset(19200);
//Serial.begin(19200);
}
void loop()
{
// syn.play(text1,sizeof(text1),1);
syn.play(text2,sizeof(text2),2);
delay(1000);
syn.play(text3,sizeof(text3),3);
delay(1000);
}