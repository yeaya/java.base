#ifndef _Unbounded_h_
#define _Unbounded_h_
//$ class Unbounded
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONCURRENCY_COUNT")
#undef CONCURRENCY_COUNT

class $export Unbounded : public ::java::lang::Object {
	$class(Unbounded, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Unbounded();
	void init$();
	static void main($StringArray* args);
	static const int32_t CONCURRENCY_COUNT = 256;
	static $volatile(bool) failed;
	static $volatile(bool) finished;
};

#pragma pop_macro("CONCURRENCY_COUNT")

#endif // _Unbounded_h_