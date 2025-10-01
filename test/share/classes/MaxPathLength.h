#ifndef _MaxPathLength_h_
#define _MaxPathLength_h_
//$ class MaxPathLength
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH

class $export MaxPathLength : public ::java::lang::Object {
	$class(MaxPathLength, 0, ::java::lang::Object)
public:
	MaxPathLength();
	void init$();
	static $String* getNextName($String* fName);
	static void main($StringArray* args);
	static void testLongPath(int32_t max, $String* fn, bool tryAbsolute);
	static $String* sep;
	static $String* pathComponent;
	static $String* fileName;
	static bool isWindows;
	static const int32_t MAX_LENGTH = 256;
	static int32_t counter;
};

#pragma pop_macro("MAX_LENGTH")

#endif // _MaxPathLength_h_