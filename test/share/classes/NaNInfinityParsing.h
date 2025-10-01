#ifndef _NaNInfinityParsing_h_
#define _NaNInfinityParsing_h_
//$ class NaNInfinityParsing
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NaNInfinityParsing : public ::java::lang::Object {
	$class(NaNInfinityParsing, 0, ::java::lang::Object)
public:
	NaNInfinityParsing();
	void init$();
	static void main($StringArray* argv);
	static $StringArray* NaNStrings;
	static $StringArray* infinityStrings;
	static $StringArray* invalidStrings;
};

#endif // _NaNInfinityParsing_h_