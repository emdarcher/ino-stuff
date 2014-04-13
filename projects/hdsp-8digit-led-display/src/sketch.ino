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
//the Data bus is used to reat from or write to the display
#define D_0 5 //(20)
#define D_1 6 //(21)
#define D_2 7 //(25)
#define D_3 13 //(26)
#define D_4 12 //(27)
#define D_5 11 //(28)
#define D_6 10 //(29)
#define D_7 9 //(30)


//#sketch to drive a HDSP 8 character led display
//#

//array of the defined pin names/numbers
int defPinArray[] = {RST,FL,A_0,A_1,A_2,A_3,A_4,WR,CE,RD,D_0,D_1,D_2,D_3,D_4,D_5,D_6,D_7};


void setup()
{
    //setup the pins in defPinArray
    for(int i = 0, i < sizeof(defPinArray), i++){
	pinMode(defPinArray[i], OUTPUT);
    }

}

void loop()
{



}

void reset(){
    //resets chip
    digitalWrite(RST, LOW);
    digitalWrite(CE, HIGH);
    delay(300);
    digitalWrite(RST, HIGH);
    digitalWrite(CE, LOW);

}

void flash_ram(){

}

void CE_switch(){
    //switches the CE pin after a read/write cycle
    digitalWrite(CE, HIGH);
    digitalWrite(CE, LOW);
}
