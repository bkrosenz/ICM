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

// get overall fraction of white sites (prior)
float get_prior(int **dest, int *size){
    float p = 0.0;
	printf("in main. getting prior\n");
    for (int i = 0; i<*size; ++i){
	printf("val: %d at %d. size=%d\n",(*dest)[i],i,*size);
	p+=(*dest)[i];
}
printf("got priors\n");
    return p/=*size;
}

int main(void)
{
	printf("Loading image.\n");
	int32_t *inImage;
	int width = 0, height = 0;
	int nIters = 5;
	loadImage("lena.ppm", &inImage, &width, &height, 1);
	printf("in main\n");
	printf("loaded. height: %d.  width: %d.",height, width);
	int imsize = width*height;
	int dataSize = width * height * sizeof(int);
	// Allocate a buffer for the intermediate image
	
	int32_t *tmpImage = malloc(dataSize);
	// Allocate a buffer for the output image
	int32_t *outImage = malloc(dataSize);
	printf("in main.allocating\n");
	float prior = get_prior(&inImage,&imsize);
	
	printf("Running Kernel.\n");
	SobelGaussianSolution(width * height, prior, inImage, outImage);
	for (int i=0; i<nIters; ++i){
	  for (int j=0; j<width*height; j++)
	    tmpImage[j] = outImage[j];
	  SobelGaussianSolution(width * height, prior, tmpImage, outImage);
	}

	printf("Saving image.\n");
	printf("height: %d.  width: %d.",height, width);
	writeImage("lena_icm.ppm", outImage, width, height, 1);
	writeImage("lena_bw_noisy.ppm", inImage, width, height, 1);
	return 0;
}

