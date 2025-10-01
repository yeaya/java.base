#ifndef _HugeCapacity4StringBuffer_h_
#define _HugeCapacity4StringBuffer_h_
//$ class HugeCapacity4StringBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HugeCapacity4StringBuffer : public ::java::lang::Object {
	$class(HugeCapacity4StringBuffer, 0, ::java::lang::Object)
public:
	HugeCapacity4StringBuffer();
	void init$();
	static void main($StringArray* args);
	static void testHugeInitialCharSequence();
	static void testHugeInitialString();
	static int32_t failures;
};

#endif // _HugeCapacity4StringBuffer_h_