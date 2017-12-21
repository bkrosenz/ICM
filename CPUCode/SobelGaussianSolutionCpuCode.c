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
	int nIters = 20;
	loadImage("lena.ppm", &inImage, &width, &height, 1);

	int dataSize = width * height * sizeof(int);
	// Allocate a buffer for the intermediate image
	int32_t *tmpImage = malloc(dataSize);
	// Allocate a buffer for the output image
	int32_t *outImage = malloc(dataSize);

	printf("Running Kernel.\n");
	SobelGaussianSolution(width * height, inImage, outImage);
	for (int i=0; i<nIters; ++i){
	  tmpImage = outImage;
	  SobelGaussianSolution(width * height, tmpImage, outImage);
	}

	printf("Saving image.\n");
	writeImage("lena_sobelgaussian.ppm", outImage, width, height, 1);

	return 0;
}
