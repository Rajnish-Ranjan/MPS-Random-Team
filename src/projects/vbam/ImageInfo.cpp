//===========================================================================
//===========================================================================
//===========================================================================
//==      ImageInfo.cpp                                                    ==
//===========================================================================
//===========================================================================
//===========================================================================
#include "stdafx.h"
#include "ImageInfo.h"


ImageInfo::ImageInfo(uint32_t pixelSum, uint64_t confidenceSum)
	: _pixelSum(pixelSum), _confidenceSum(confidenceSum)
{
}

uint32_t ImageInfo::PixelSum()
{
	return _pixelSum;
}

uint64_t ImageInfo::ConfidenceSum()
{
	return _confidenceSum;
}
