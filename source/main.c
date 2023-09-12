#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

int main(int argc, char* argv[]) {
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	printf("Hey! This is Megalon, and I think I've genuinely gone insane. If this works on your end, can you take a picture of this message and send it to me on Discord?\n\n\nPress START to exit");

	while (aptMainLoop()) {
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break;
	}

	gfxExit();
	return 0;
}
