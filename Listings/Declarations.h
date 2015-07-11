/** ###############Declarations.h#####################################
**     Filename  : Declarations.h
**     Processor : Universal
**     Date/Time : 2015-31-05, 20:34
** ###################################################################*/

#define MASK(x) (1UL << (x))

//Conditional set/clear
#define S_C_Bit(word,bit_n,flag) \
(word = (word & ~(MASK(bit_n))) | (-flag & MASK(bit_n))) //if (f) w |= m; else w &= ~m; 

#define LED_R 18
#define LED_G 19
#define LED_B 1

void _delay_ms(unsigned delayTicks);
static void init_hardware(void);
void RGB(uint16_t Red, uint16_t Green, uint16_t Blue);				// RGB-LED Control: 1=on, 0=off, for each of the 3 colors
