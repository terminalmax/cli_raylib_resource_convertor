#include "raylib.h"

int main(int argc, char *argv[]) {
	
	if (argc < 3) {
		return -1;
	}
	
	Image image = LoadImage(argv[1]);
	ExportImageAsCode(image, argv[2]);
	UnloadImage(image);

}