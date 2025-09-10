#include "Image.h"
#include <math.h>

void contrast_stretch(GrayscaleImage& img, GrayscaleImage& out)
{
	int min = img(0, 0);
	int max = img(0, 0);
	int result;
	for (int y = 0; y < img.GetHeight(); y++)
	{
		for (int x = 0; x < img.GetWidth(); x++)
		{
			if (img(x, y) > max)
				max = img(x, y);
			if (img(x, y) < min)
				min = img(x, y);
		}
	}
	for (int y = 0; y < img.GetHeight(); y++)
	{
		for (int x = 0; x < img.GetWidth(); x++)
		{
			result = round((img(x, y) - min) * (255.0 / (max - min)));
			if (result > 255)
				result = 255;
			if (result < 0)
				result = 0;
			out(x, y) = result;

		}
	}

}
void negative(GrayscaleImage& img, GrayscaleImage& out)
{
	for (int y = 0; y < img.GetHeight(); y++)
	{
		for (int x = 0; x < img.GetWidth(); x++)
		{
			out(x, y) = 255 - img(x, y);

		}
	}
}

int main() {

	GrayscaleImage img;
	img.Load("images/image_4.png");
	GrayscaleImage out(img.GetWidth(), img.GetHeight());
	/*contrast_stretch(img,out);*//*kindly comment out when performing inverse or negative*/
	negative(img, out);/*kindly comment out when performing contrast stretching*/
	out.Save("images/output.png");
	return 0;
}


