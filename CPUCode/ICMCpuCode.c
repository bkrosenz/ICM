/**
 * Document: MaxCompiler Training (maxcompiler-training.pdf)
 * Chapter: 2
 * Exercise Solution: 3
 * Summary:
 * 	 Performs Sobel edge detection with a Gaussian blur on an image.
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "Maxfiles.h"
#include <MaxSLiCInterface.h>

#include "ppmIO.h"

int main(void)
{
    
/* 
TODO: change project file names from icmsolution to ICM

	int nColors = 8; 

	// TODO: add gaussian noise to source image

TODO: currently each cycle is a pass through the whole image.  
To improve performance, could use state machine to store the true image
for each pixel, provided image size is small enough.  Or memory map to CPU?

TODO: currently we compute the priors before running the ICM kernel.
Obviously, it would be more efficient to add another kernel to compute these,
or store it in an accumulator.

TODO: currently assumes input image consists of c unordered colors.  
For a grayscale image, we can turn this into a c-thresholding algorithm, with c evenly spaced values in [0,255].

// TODO initialize prior means
    int x,y;
    int32_t val;
    for (x=0; x<width; ++x){
        for (y=0; y<width++y){
            val=inImage[x][y];
        }
    }
*/


	printf("Loading image.\n");
	int32_t *inImage;
	int width = 256, height = 256;
	loadImage("lena.ppm", &inImage, &width, &height, 1);

	int dataSize = width * height * sizeof(int);
	// Allocate a buffer for the output image
	int32_t *outImage = malloc(dataSize);

	printf("Running Kernel.\n");
	ICM(width * height, inImage, outImage);

	printf("Saving image.\n");
	writeImage("lena_icm.ppm", outImage, width, height, 1);

	return 0;
}
