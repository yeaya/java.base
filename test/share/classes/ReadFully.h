#ifndef _ReadFully_h_
#define _ReadFully_h_
//$ class ReadFully
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ReadFully : public ::java::lang::Object {
	$class(ReadFully, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadFully();
	void init$();
	static void main($StringArray* args);
	static void testBigOffsetLength1();
	static void testBigOffsetLength2();
	static void testBigOffsetLength3();
	static void testBigOffsetLength4();
	static void testNegativeLength();
	static void testNegativeOffset();
	static void testNegativeOffsetZeroLength();
};

#endif // _ReadFully_h_