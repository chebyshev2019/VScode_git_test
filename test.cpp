
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    //VideoCapture类的构造函数：C++: VideoCapture::VideoCapture(int device);
    VideoCapture cap(0);
    Mat img;

    while (1)
    {
        cap >> img;
        if (img.empty())
            break;
        namedWindow("img_win", WINDOW_NORMAL);
        imshow("img_imshow", img);
        if (waitKey(20) == 27)
            break;
    }

    return 0;
}

