#ifndef _Capacity_h_
#define _Capacity_h_
//$ class Capacity
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export Capacity : public ::java::lang::Object {
	$class(Capacity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Capacity();
	void init$();
	virtual void check(bool cond);
	virtual void equal(Object$* x, Object$* y);
	virtual void fail();
	virtual void fail($String* msg);
	virtual void instanceMain($StringArray* args);
	static void main($StringArray* args);
	virtual void pass();
	virtual void test($StringArray* args);
	virtual void unexpected($Throwable* t);
	$volatile(int32_t) passed = 0;
	$volatile(int32_t) failed = 0;
};

#endif // _Capacity_h_