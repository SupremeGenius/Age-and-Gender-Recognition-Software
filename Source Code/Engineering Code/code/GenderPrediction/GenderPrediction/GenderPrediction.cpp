// GenderPrediction.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <iostream>  
#include <string>  
//#include <opencv2/core/core.hpp>  
//#include <opencv2/highgui/highgui.hpp>  
#include "libcaffe.h"  
int main(int argc, char** argv)
{
	typedef struct
	{
		int classInfo;
		float confidence;
	}PredictionInfo;
	std::string model_file("C:/Users/qq/Desktop/deploy_gender.prototxt");
	std::string trained_file("C:/Users/qq/Desktop/gender.caffemodel");
	std::string mean_file("C:/Users/qq/Desktop/g_imagenet_mean.binaryproto");
	std::string image_file;
	PredictionInfo *AgeInfo = new PredictionInfo();
	PredictionInfo *GenderInfo = new PredictionInfo();
	//std::string label_file("./model/typelabels.txt");

	/*MultiClassifier   myclassifier(model_file, trained_file, mean_file);

	PredictionInfo gender = GenderPrediction(model_file, trained_file, mean_file,"E:/example_image.JPG");
	cv::Mat img = cv::imread("E:/example_image.JPG", -1);
	
	std::vector<Prediction> result = myclassifier.Classify(img);*/
	//Prediction p = result[0];
	int x = GenderPrediction(model_file, trained_file, mean_file, "E:/example_image.JPG", AgeInfo);
	/*std::cout << "���Ϊ:" << AgeInfo.classInfo << "ȷ�Ŷȣ�" << AgeInfo.confidence << "\n";
	std::cout << "���Ϊ:" << GenderInfo.classInfo << "ȷ�Ŷȣ�" << GenderInfo.confidence << "\n";*/
	std::cout << x;
	getchar();
	return 0;
}