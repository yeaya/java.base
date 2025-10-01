#ifndef _InterruptMapDeadlock_h_
#define _InterruptMapDeadlock_h_
//$ class InterruptMapDeadlock
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAPPER_COUNT")
#undef MAPPER_COUNT

class $export InterruptMapDeadlock : public ::java::lang::Object {
	$class(InterruptMapDeadlock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InterruptMapDeadlock();
	void init$();
	static void main($StringArray* args);
	static const int32_t MAPPER_COUNT = 4;
};

#pragma pop_macro("MAPPER_COUNT")

#endif // _InterruptMapDeadlock_h_