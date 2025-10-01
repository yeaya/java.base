#ifndef _WithParameters$Foo_h_
#define _WithParameters$Foo_h_
//$ class WithParameters$Foo
//$ extends java.lang.Object

#include <java/lang/Array.h>

class WithParameters;
namespace java {
	namespace util {
		class List;
	}
}

class $export WithParameters$Foo : public ::java::lang::Object {
	$class(WithParameters$Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WithParameters$Foo();
	void init$(::WithParameters* this$0);
	virtual void qux(int32_t quux, ::WithParameters$Foo* quuux, ::java::util::List* l, ::java::util::List* l2, ::java::util::List* l3, $StringArray* rest);
	::WithParameters* this$0 = nullptr;
	int32_t thing = 0;
};

#endif // _WithParameters$Foo_h_