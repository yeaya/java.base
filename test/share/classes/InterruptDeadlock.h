#ifndef _InterruptDeadlock_h_
#define _InterruptDeadlock_h_
//$ class InterruptDeadlock
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("READER_COUNT")
#undef READER_COUNT

class $export InterruptDeadlock : public ::java::lang::Object {
	$class(InterruptDeadlock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InterruptDeadlock();
	void init$();
	static void main($StringArray* args);
	static const int32_t READER_COUNT = 4;
};

#pragma pop_macro("READER_COUNT")

#endif // _InterruptDeadlock_h_