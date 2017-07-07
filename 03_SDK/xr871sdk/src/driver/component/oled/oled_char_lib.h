#ifndef _OLED_CHAR_LIB_H_
#define _OLED_CHAR_LIB_H_

const unsigned char ascii_1608[95][16]= {
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/

	{0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0x0C,0x00,0x00,0x00},/*"!",1*/

	{0x00,0x08,0x30,0x60,0x08,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/

	{0x02,0x03,0x1E,0x02,0x03,0x1E,0x02,0x00,0x20,0xFC,0x20,0x20,0xFC,0x20,0x20,0x00},/*"#",3*/

	{0x00,0x0E,0x11,0x3F,0x10,0x0C,0x00,0x00,0x00,0x18,0x04,0xFF,0x84,0x78,0x00,0x00},/*"$",4*/

	{0x0F,0x10,0x0F,0x00,0x07,0x18,0x00,0x00,0x00,0x84,0x38,0xC0,0x78,0x84,0x78,0x00},/*"%",5*/

	{0x00,0x0F,0x10,0x11,0x0E,0x00,0x00,0x00,0x78,0x84,0xC4,0x24,0x98,0xE4,0x84,0x08},/*"&",6*/

	{0x08,0x68,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/

	{0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00},/*"(",8*/

	{0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00},/*")",9*/

	{0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00},/*"*",10*/

	{0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xF8,0x80,0x80,0x80,0x00},/*"+",11*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0D,0x0E,0x00,0x00,0x00,0x00,0x00},/*",",12*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"-",13*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00},/*".",14*/

	{0x00,0x00,0x00,0x00,0x01,0x06,0x18,0x20,0x00,0x06,0x18,0x60,0x80,0x00,0x00,0x00},/*"/",15*/

	{0x00,0x07,0x08,0x10,0x10,0x08,0x07,0x00,0x00,0xF0,0x08,0x04,0x04,0x08,0xF0,0x00},/*"0",16*/

	{0x00,0x08,0x08,0x1F,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00},/*"1",17*/

	{0x00,0x0E,0x10,0x10,0x10,0x11,0x0E,0x00,0x00,0x0C,0x14,0x24,0x44,0x84,0x0C,0x00},/*"2",18*/

	{0x00,0x0C,0x10,0x11,0x11,0x12,0x0C,0x00,0x00,0x18,0x04,0x04,0x04,0x88,0x70,0x00},/*"3",19*/

	{0x00,0x00,0x03,0x04,0x08,0x1F,0x00,0x00,0x00,0xE0,0x20,0x24,0x24,0xFC,0x24,0x00},/*"4",20*/

	{0x00,0x1F,0x10,0x11,0x11,0x10,0x10,0x00,0x00,0x98,0x84,0x04,0x04,0x88,0x70,0x00},/*"5",21*/

	{0x00,0x07,0x08,0x11,0x11,0x18,0x00,0x00,0x00,0xF0,0x88,0x04,0x04,0x88,0x70,0x00},/*"6",22*/

	{0x00,0x1C,0x10,0x10,0x13,0x1C,0x10,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00},/*"7",23*/

	{0x00,0x0E,0x11,0x10,0x10,0x11,0x0E,0x00,0x00,0x38,0x44,0x84,0x84,0x44,0x38,0x00},/*"8",24*/

	{0x00,0x07,0x08,0x10,0x10,0x08,0x07,0x00,0x00,0x00,0x8C,0x44,0x44,0x88,0xF0,0x00},/*"9",25*/

	{0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00},/*":",26*/

	{0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x00,0x00,0x00},/*";",27*/

	{0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x00},/*"<",28*/

	{0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00},/*"=",29*/

	{0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00,0x00,0x04,0x08,0x10,0x20,0x40,0x80,0x00},/*">",30*/

	{0x00,0x0E,0x12,0x10,0x10,0x10,0x0F,0x00,0x00,0x00,0x00,0x0C,0x6C,0x80,0x00,0x00},/*"?",31*/

	{0x03,0x0C,0x13,0x14,0x17,0x08,0x07,0x00,0xE0,0x18,0xE4,0x24,0xC4,0x28,0xD0,0x00},/*"@",32*/

	{0x00,0x00,0x03,0x1C,0x07,0x00,0x00,0x00,0x04,0x3C,0xC4,0x40,0x40,0xE4,0x1C,0x04},/*"A",33*/

	{0x10,0x1F,0x11,0x11,0x11,0x0E,0x00,0x00,0x04,0xFC,0x04,0x04,0x04,0x88,0x70,0x00},/*"B",34*/

	{0x03,0x0C,0x10,0x10,0x10,0x10,0x1C,0x00,0xE0,0x18,0x04,0x04,0x04,0x08,0x10,0x00},/*"C",35*/

	{0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00,0x04,0xFC,0x04,0x04,0x04,0x08,0xF0,0x00},/*"D",36*/

	{0x10,0x1F,0x11,0x11,0x17,0x10,0x08,0x00,0x04,0xFC,0x04,0x04,0xC4,0x04,0x18,0x00},/*"E",37*/

	{0x10,0x1F,0x11,0x11,0x17,0x10,0x08,0x00,0x04,0xFC,0x04,0x00,0xC0,0x00,0x00,0x00},/*"F",38*/

	{0x03,0x0C,0x10,0x10,0x10,0x1C,0x00,0x00,0xE0,0x18,0x04,0x04,0x44,0x78,0x40,0x00},/*"G",39*/

	{0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,0x04,0xFC,0x84,0x80,0x80,0x84,0xFC,0x04},/*"H",40*/

	{0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00},/*"I",41*/

	{0x00,0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x03,0x01,0x01,0x01,0xFE,0x00,0x00,0x00},/*"J",42*/

	{0x10,0x1F,0x11,0x03,0x14,0x18,0x10,0x00,0x04,0xFC,0x04,0x80,0x64,0x1C,0x04,0x00},/*"K",43*/

	{0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0x04,0x04,0x04,0x04,0x0C,0x00},/*"L",44*/

	{0x10,0x1F,0x1F,0x00,0x1F,0x1F,0x10,0x00,0x04,0xFC,0x00,0xFC,0x00,0xFC,0x04,0x00},/*"M",45*/

	{0x10,0x1F,0x0C,0x03,0x00,0x10,0x1F,0x10,0x04,0xFC,0x04,0x00,0xE0,0x18,0xFC,0x00},/*"N",46*/

	{0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,0xF0,0x08,0x04,0x04,0x04,0x08,0xF0,0x00},/*"O",47*/

	{0x10,0x1F,0x10,0x10,0x10,0x10,0x0F,0x00,0x04,0xFC,0x84,0x80,0x80,0x80,0x00,0x00},/*"P",48*/

	{0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,0xF0,0x18,0x24,0x24,0x1C,0x0A,0xF2,0x00},/*"Q",49*/

	{0x10,0x1F,0x11,0x11,0x11,0x11,0x0E,0x00,0x04,0xFC,0x04,0x00,0xC0,0x30,0x0C,0x04},/*"R",50*/

	{0x00,0x0E,0x11,0x10,0x10,0x10,0x1C,0x00,0x00,0x1C,0x04,0x84,0x84,0x44,0x38,0x00},/*"S",51*/

	{0x18,0x10,0x10,0x1F,0x10,0x10,0x18,0x00,0x00,0x00,0x04,0xFC,0x04,0x00,0x00,0x00},/*"T",52*/

	{0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,0x00,0xF8,0x04,0x04,0x04,0x04,0xF8,0x00},/*"U",53*/

	{0x10,0x1E,0x11,0x00,0x00,0x13,0x1C,0x10,0x00,0x00,0xE0,0x1C,0x70,0x80,0x00,0x00},/*"V",54*/

	{0x1F,0x10,0x00,0x1F,0x00,0x10,0x1F,0x00,0xC0,0x3C,0xE0,0x00,0xE0,0x3C,0xC0,0x00},/*"W",55*/

	{0x10,0x18,0x16,0x01,0x01,0x16,0x18,0x10,0x04,0x0C,0x34,0xC0,0xC0,0x34,0x0C,0x04},/*"X",56*/

	{0x10,0x1C,0x13,0x00,0x13,0x1C,0x10,0x00,0x00,0x00,0x04,0xFC,0x04,0x00,0x00,0x00},/*"Y",57*/

	{0x08,0x10,0x10,0x10,0x13,0x1C,0x10,0x00,0x04,0x1C,0x64,0x84,0x04,0x04,0x18,0x00},/*"Z",58*/

	{0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00},/*"[",59*/

	{0x00,0x30,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x1C,0x03,0x00},/*"\",60*/

	{0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00},/*"]",61*/

	{0x00,0x00,0x20,0x40,0x40,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01},/*"_",63*/

	{0x00,0x40,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/

	{0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x98,0x24,0x44,0x44,0x44,0xFC,0x04},/*"a",65*/

	{0x10,0x1F,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0xFC,0x88,0x04,0x04,0x88,0x70,0x00},/*"b",66*/

	{0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x70,0x88,0x04,0x04,0x04,0x88,0x00},/*"c",67*/

	{0x00,0x00,0x00,0x01,0x01,0x11,0x1F,0x00,0x00,0x70,0x88,0x04,0x04,0x08,0xFC,0x04},/*"d",68*/

	{0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0xF8,0x44,0x44,0x44,0x44,0xC8,0x00},/*"e",69*/

	{0x00,0x01,0x01,0x0F,0x11,0x11,0x11,0x18,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00},/*"f",70*/

	{0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0xD6,0x29,0x29,0x29,0xC9,0x06,0x00},/*"g",71*/

	{0x10,0x1F,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0xFC,0x84,0x00,0x00,0x04,0xFC,0x04},/*"h",72*/

	{0x00,0x01,0x19,0x19,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00},/*"i",73*/

	{0x00,0x00,0x00,0x01,0x19,0x19,0x00,0x00,0x00,0x03,0x01,0x01,0x01,0xFE,0x00,0x00},/*"j",74*/

	{0x10,0x1F,0x00,0x00,0x01,0x01,0x01,0x00,0x04,0xFC,0x24,0x40,0xB4,0x0C,0x04,0x00},/*"k",75*/

	{0x00,0x10,0x10,0x1F,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00},/*"l",76*/

	{0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x04,0xFC,0x04,0x00,0xFC,0x04,0x00,0xFC},/*"m",77*/

	{0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0xFC,0x84,0x00,0x00,0x04,0xFC,0x04},/*"n",78*/

	{0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0xF8,0x04,0x04,0x04,0x04,0xF8,0x00},/*"o",79*/

	{0x01,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0xFF,0x85,0x04,0x04,0x88,0x70,0x00},/*"p",80*/

	{0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x70,0x88,0x04,0x04,0x05,0xFF,0x01},/*"q",81*/

	{0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x04,0x04,0xFC,0x84,0x04,0x00,0x80,0x00},/*"r",82*/

	{0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0xCC,0x24,0x24,0x24,0x24,0x98,0x00},/*"s",83*/

	{0x00,0x01,0x01,0x07,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0xF8,0x04,0x04,0x00,0x00},/*"t",84*/

	{0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0xF8,0x04,0x04,0x04,0x08,0xFC,0x04},/*"u",85*/

	{0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x00,0x80,0x70,0x0C,0x10,0x60,0x80,0x00},/*"v",86*/

	{0x01,0x01,0x00,0x01,0x00,0x01,0x01,0x01,0xF0,0x0C,0x30,0xC0,0x30,0x0C,0xF0,0x00},/*"w",87*/

	{0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0x8C,0x74,0x70,0x8C,0x04,0x00},/*"x",88*/

	{0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x81,0x71,0x0E,0x18,0x60,0x80,0x00},/*"y",89*/

	{0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x84,0x0C,0x34,0x44,0x84,0x0C,0x00},/*"z",90*/

	{0x00,0x00,0x00,0x00,0x01,0x3E,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0xFC,0x02,0x02},/*"{",91*/

	{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"|",92*/

	{0x00,0x40,0x40,0x3E,0x01,0x00,0x00,0x00,0x00,0x02,0x02,0xFC,0x00,0x00,0x00,0x00},/*"}",93*/

	{0x00,0x60,0x80,0x80,0x40,0x40,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/

};

const unsigned char flag[36]= {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x70,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x38,0x00,0x00,0x00,0x00,/*":",0*/
};/*":",0*/

#endif /*_OLED_CHAR_LIB_H_*/
