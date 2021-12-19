#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat img;
    img = imread("C:/Users/olgak/OneDrive/ConsoleApplication1/x64/Debug/1.jpg");
    imshow("dsf", img);
    waitKey(0);
    
    Mat gray_img = imread("C:/Users/olgak/OneDrive/ConsoleApplication1/x64/Debug/1.jpg", IMREAD_GRAYSCALE);
    imshow("gray", gray_img);
    
    waitKey(0);
    Mat small_img = imread("C:/Users/olgak/OneDrive/ConsoleApplication1/x64/Debug/1.jpg", IMREAD_REDUCED_COLOR_8);
    imshow("small x8", small_img);
    waitKey(0);
    
    
    Mat g_img;
    GaussianBlur(img, g_img, Size(11, 11), 0, 0, BORDER_DEFAULT);
    imshow("gauss",g_img); 
    waitKey(0);
    
    Mat c_img;
    Canny( img,c_img, 10, 70, 3 );
    imshow("canny",c_img);
    waitKey(0);
    
    Mat h_img;
    cvtColor(img, h_img, COLOR_HSV2BGR);
    imshow("hue",h_img); 
    waitKey(0);



    return 0;
}