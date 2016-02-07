

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{

	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "image.jpg";
	Mat image;

	//cargamos la imagen y se comprueba que se ha hecho correctamente
	image = cv::imread(NombreImagen);
	if (!image.data) 
	{
		cout << "Error al cargar la imagen:" << NombreImagen << std::endl;
		return -1;
	}

	//Mostrar la imagen
	namedWindow("Original", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Original", image); // Show our image inside it.

	waitKey(0); // Wait for a keystroke in the window
	return 0;
}