#ifndef _ParameterAnnotations_h_
#define _ParameterAnnotations_h_
//$ class ParameterAnnotations
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export ParameterAnnotations : public ::java::lang::Object {
	$class(ParameterAnnotations, 0, ::java::lang::Object)
public:
	ParameterAnnotations();
	void init$();
	virtual void check(bool cond);
	virtual void equal(Object$* x, Object$* y);
	virtual void fail();
	virtual void fail($String* msg);
	virtual void instanceMain($StringArray* args);
	static void main($StringArray* args);
	virtual void nop(Object$* foo, Object$* bar);
	virtual void pass();
	virtual void test($StringArray* args);
	virtual void test1();
	virtual void unexpected($Throwable* t);
	$volatile(int32_t) passed = 0;
	$volatile(int32_t) failed = 0;
	static $Class* thisClass;
};

#endif // _ParameterAnnotations_h_