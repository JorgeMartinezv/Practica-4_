#include <18F4620.h>
#include <stdlib.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)
void main (void)
{
   setup_oscillator(OSC_16MHZ);
   set_tris_b(0x00);
   set_tris_d(0x00);
   set_tris_c(0x00);
   int conteoDisplay200=0;
   int conteoDisplay500=0;
   int conteoDisplay1s=0;
   int display[10]={63,6,91,79,102,109,125,7,127,103};
   while(1)
   {
       output_b(display[conteoDisplay200]);
       output_c(display[conteoDisplay500]);
       output_d(display[conteoDisplay1s]);
    }
}
