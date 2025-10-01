#ifndef _GoldenFormattedValues_h_
#define _GoldenFormattedValues_h_
//$ class GoldenFormattedValues
//$ extends java.lang.Object

#include <java/lang/Array.h>

class GoldenFormattedValues : public ::java::lang::Object {
	$class(GoldenFormattedValues, 0, ::java::lang::Object)
public:
	GoldenFormattedValues();
	void init$();
	static $Array<int32_t, 2>* DecimalDigitsLocalizedFormattedValues;
	static $Array<int32_t, 2>* DecimalGoldenFormattedValues;
	static $Array<int32_t, 2>* CurrencyGoldenFormattedValues;
};

#endif // _GoldenFormattedValues_h_