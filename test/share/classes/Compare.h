#ifndef _Compare_h_
#define _Compare_h_
//$ class Compare
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Compare : public ::java::lang::Object {
	$class(Compare, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Compare();
	void init$();
	virtual void check(bool cond);
	virtual void compareAll(int64_t x, int64_t y);
	virtual void equal(Object$* x, Object$* y);
	virtual void fail();
	virtual void fail($String* msg);
	virtual void instanceMain($StringArray* args);
	static void main($StringArray* args);
	virtual void pass();
	virtual void test($StringArray* args);
	virtual bool toBoolean(int64_t x);
	virtual void unexpected($Throwable* t);
	::java::util::Random* rnd = nullptr;
	$volatile(int32_t) passed = 0;
	$volatile(int32_t) failed = 0;
};

#endif // _Compare_h_