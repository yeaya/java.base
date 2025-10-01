#ifndef _WithoutParameters$Foo_h_
#define _WithoutParameters$Foo_h_
//$ class WithoutParameters$Foo
//$ extends java.lang.Object

#include <java/lang/Array.h>

class WithoutParameters;
namespace java {
	namespace util {
		class List;
	}
}

class $export WithoutParameters$Foo : public ::java::lang::Object {
	$class(WithoutParameters$Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WithoutParameters$Foo();
	void init$(::WithoutParameters* this$0);
	virtual void qux(int32_t quux, ::WithoutParameters$Foo* quuux, ::java::util::List* l, ::java::util::List* l2, ::java::util::List* l3, $StringArray* rest);
	::WithoutParameters* this$0 = nullptr;
	int32_t thing = 0;
};

#endif // _WithoutParameters$Foo_h_