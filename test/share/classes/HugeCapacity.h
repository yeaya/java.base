#ifndef _HugeCapacity_h_
#define _HugeCapacity_h_
//$ class HugeCapacity
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HugeCapacity : public ::java::lang::Object {
	$class(HugeCapacity, 0, ::java::lang::Object)
public:
	HugeCapacity();
	void init$();
	static void main($StringArray* args);
	static void testHugeInitialCharSequence();
	static void testHugeInitialString();
	static void testLatin1(bool isCompact);
	static void testUtf16();
	static int32_t failures;
};

#endif // _HugeCapacity_h_