#ifndef _EnsureCapacity_h_
#define _EnsureCapacity_h_
//$ class EnsureCapacity
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export EnsureCapacity : public ::java::lang::Object {
	$class(EnsureCapacity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EnsureCapacity();
	void init$();
	static void checkCapacity(int32_t before, int32_t after);
	static void main($StringArray* args);
	static void testStringBuffer();
	static void testStringBuilder();
};

#endif // _EnsureCapacity_h_