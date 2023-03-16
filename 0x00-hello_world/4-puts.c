#include <stdio.h>
int main(void)
{
	/* String initialisation with backlash to keep double quotes */
	char MyStr[] = "\"Programming is like building a multilingual puzzle";
	/* Usign puts function to write string in stdout 
	* No need to add newline since puts adds it to the end of argument and publishes it to the output stream */

	puts(MyStr);
		return(0);
}
