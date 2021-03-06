#pragma once
#include "CoordinateBuilder.h"
class DataTransformerBase
{
public:
	DataTransformerBase();
	virtual ~DataTransformerBase();
	virtual void ReadFile(const char* filename)=0;
private:
	virtual int Transform(string outputFile,OGRSpatialReference* To, OGRSpatialReference * GCPFrom = nullptr, string sourceFile=nullptr, string desFile=nullptr) = 0;
public:
	OGRSpatialReference* InputProj;
protected:
	CoordinateBuilder* myCoordianteBuilder;
	unordered_map<string, string>formatMap;
	string inputFileName;
};

