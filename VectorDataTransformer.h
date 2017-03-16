#pragma once
#include "DataTransformerBase.h"
class VectorDataTransformer:DataTransformerBase
{
public:
	VectorDataTransformer(string filename, string geo, double cenLon);
	~VectorDataTransformer();
	void VectorDataTransformer::ReProject(string sourceFile, string desFileName, OGRSpatialReference* sourceProj, OGRSpatialReference* desProj);

	// ͨ�� DataTransformerBase �̳�
	virtual int Transform(string outputFile, OGRSpatialReference * To, OGRSpatialReference * GCPFrom = nullptr, OGRSpatialReference * GCPTo = nullptr, _Matrix * M = nullptr) override;
};

