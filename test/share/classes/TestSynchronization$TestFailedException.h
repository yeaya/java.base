#ifndef _TestSynchronization$TestFailedException_h_
#define _TestSynchronization$TestFailedException_h_
//$ class TestSynchronization$TestFailedException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class TestSynchronization$TestFailedException : public ::java::lang::Exception {
	$class(TestSynchronization$TestFailedException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TestSynchronization$TestFailedException();
	void init$(::java::lang::reflect::Method* m);
	virtual ::java::lang::reflect::Method* getMethod();
	::java::lang::reflect::Method* m = nullptr;
	TestSynchronization$TestFailedException(const TestSynchronization$TestFailedException& e);
	TestSynchronization$TestFailedException wrapper$();
	virtual void throwWrapper$() override;
};

#endif // _TestSynchronization$TestFailedException_h_