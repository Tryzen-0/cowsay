#include <stdio.h>
#include <stdlib.h>

// Functions
void helptxt(void);
void printcow(void);

// Variables
int counter = 0;

// Main Program
int main(int argc, char *argv[]) {
	if ( argc == 1) {
		printcow();
		return 0;
	}

	// Arguments
	for(; counter < argc; counter++) {
		if ( !strcmp(argv[counter], "-h") || !strcmp(argv[counter], "--help") ) {
		helptxt();
		return 0;
        }
    }
}		
	
// Help Text
void helptxt(void) {
	puts("Help Menu:\n\nThere is no help available for this program yet!\n");
}

// Cow Ascii Art
void printcow(void) {
	puts("	\\   ^__^\n	 \\  (oo)\\_______\n	    (__)\\       )\\/\\ \n		||----w |\n		||     ||\n");
}
