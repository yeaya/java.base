#ifndef _SurrogatePairs_h_
#define _SurrogatePairs_h_
//$ class SurrogatePairs
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SurrogatePairs : public ::java::lang::Object {
	$class(SurrogatePairs, 0, ::java::lang::Object)
public:
	SurrogatePairs();
	void init$();
	static $String* getHexBytes($String* s);
	static void main($StringArray* args);
	static void test($String* str, $String* correctEncoding);
	static $StringArray* testStrings;
	static $StringArray* correctEncodings;
};

#endif // _SurrogatePairs_h_