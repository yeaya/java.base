#ifndef _jdk_test_internal_foo_Foo_h_
#define _jdk_test_internal_foo_Foo_h_
//$ class jdk.test.internal.foo.Foo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

class $export Foo : public ::java::lang::Object {
	$class(Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo();
	void init$();
	virtual $String* toString() override;
};

			} // foo
		} // internal
	} // test
} // jdk

#endif // _jdk_test_internal_foo_Foo_h_