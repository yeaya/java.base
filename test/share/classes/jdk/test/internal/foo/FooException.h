#ifndef _jdk_test_internal_foo_FooException_h_
#define _jdk_test_internal_foo_FooException_h_
//$ class jdk.test.internal.foo.FooException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

class $export FooException : public ::java::lang::RuntimeException {
	$class(FooException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	FooException();
	void init$();
	FooException(const FooException& e);
	FooException wrapper$();
	virtual void throwWrapper$() override;
};

			} // foo
		} // internal
	} // test
} // jdk

#endif // _jdk_test_internal_foo_FooException_h_