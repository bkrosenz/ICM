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
	printf("Loading image.\n");
	int32_t *inImage;
	int width = 0, height = 0;
	
	// TODO: add gaussian noise to source image
	
	loadImage("lena.ppm", &inImage, &width, &height, 1);

	int dataSize = width * height * sizeof(int);
	// Allocate a buffer for the output image
	int32_t *outImage = malloc(dataSize);

/* TODO: currently each cycle is a pass through the whole image.  
To improve performance, could use state machine to store the true image
for each pixel, provided image size is small enough.  Or memory map to CPU?

TODO: currently we compute the priors before running the ICM kernel.
Obviously, it would be more efficient to add another kernel to compute these.

TODO: currently assumes input image consists of c unordered colors.  
For a grayscale image, we can turn this into a c-thresholding algorithm, with c evenly spaced values in [0,255].

*/

    printf("Running Kernel.\n");
	SobelGaussianSolution(width * height, inImage, outImage);

	printf("Saving image.\n");
	writeImage("lena_sobelgaussian.ppm", outImage, width, height, 1);

	return 0;
}
