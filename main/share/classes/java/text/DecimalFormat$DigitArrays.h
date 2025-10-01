#ifndef _java_text_DecimalFormat$DigitArrays_h_
#define _java_text_DecimalFormat$DigitArrays_h_
//$ class java.text.DecimalFormat$DigitArrays
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {

class DecimalFormat$DigitArrays : public ::java::lang::Object {
	$class(DecimalFormat$DigitArrays, 0, ::java::lang::Object)
public:
	DecimalFormat$DigitArrays();
	void init$();
	static $chars* DigitOnes1000;
	static $chars* DigitTens1000;
	static $chars* DigitHundreds1000;
};

	} // text
} // java

#endif // _java_text_DecimalFormat$DigitArrays_h_