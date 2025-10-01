#ifndef _ParameterCheck_h_
#define _ParameterCheck_h_
//$ class ParameterCheck
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ParameterCheck : public ::java::lang::Object {
	$class(ParameterCheck, 0, ::java::lang::Object)
public:
	ParameterCheck();
	void init$();
	static void doTest($String* method);
	static void main($StringArray* argv);
	static void printErr($String* method, int32_t numGood, int32_t i, $String* expStr);
	static $ints* off;
	static $ints* len;
	static $booleans* results;
	static int32_t numBad;
};

#endif // _ParameterCheck_h_