#ifndef _java_text_DecimalFormat$FastPathData_h_
#define _java_text_DecimalFormat$FastPathData_h_
//$ class java.text.DecimalFormat$FastPathData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {

class DecimalFormat$FastPathData : public ::java::lang::Object {
	$class(DecimalFormat$FastPathData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DecimalFormat$FastPathData();
	void init$();
	int32_t lastFreeIndex = 0;
	int32_t firstUsedIndex = 0;
	int32_t zeroDelta = 0;
	char16_t groupingChar = 0;
	int32_t integralLastIndex = 0;
	int32_t fractionalFirstIndex = 0;
	double fractionalScaleFactor = 0.0;
	int32_t fractionalMaxIntBound = 0;
	$chars* fastPathContainer = nullptr;
	$chars* charsPositivePrefix = nullptr;
	$chars* charsNegativePrefix = nullptr;
	$chars* charsPositiveSuffix = nullptr;
	$chars* charsNegativeSuffix = nullptr;
	bool positiveAffixesRequired = false;
	bool negativeAffixesRequired = false;
};

	} // text
} // java

#endif // _java_text_DecimalFormat$FastPathData_h_