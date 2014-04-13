#define RST 8 //RESET pin (1), initializes the display
#define FL A5 /*FLASH pin (2),
low indicates an access to the Flash RAM and is
unaffected by the state of address lines
A_3 to A_4
*/
//ADDRESS INPUTS
#define A_0 A0 //(3) theses three A_0 - A_2 are for giving
#define A_1 A1 //(4) the location address in character RAM
#define A_2 A2 //(5) or Flash RAM, and UDC (user defined character)
		//RAM

#define A_3 A3 //(6) A_3 to A_4 are to select which
#define A_4 A4 //(10) section of memory is accessed
/*
	TABLE
FL	A_4	A_3	section of mem	A_0-2
0	X	X	flash RAM	Character Address
1	0	0	UDC Addr Reg	Don't care
1	0	1	UDC RAM		Row Address
1	1	0	Ctrl Word Reg.	Don't care
1	1	1	Character RAM	Character Address

*/
#define WR 2 /*WRITE pin (13),
Data is written into the display when the WR input is low
and the CE input is low.
*/
#define CE 3 /*CHIP ENABLE (14),
This input must be at a logic low to read or write data to the display
and must go high between each read and write cycle.
*/
#define RD 4 /*READ (19),
Data is read from the display when the RD input is low and the 
CE input is low.
*/

//DATA BUS

#define D_0 5 //(20)
#define D_1 6 //(21)
#define D_2 7 //(25)


//#sketch to drive a HDSP 8 character led display
//#


void setup()
{
}

void loop()
{
}
