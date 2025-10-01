#ifndef _WithoutParameters$Foo$Inner_h_
#define _WithoutParameters$Foo$Inner_h_
//$ class WithoutParameters$Foo$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

class WithoutParameters$Foo;

class $export WithoutParameters$Foo$Inner : public ::java::lang::Object {
	$class(WithoutParameters$Foo$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WithoutParameters$Foo$Inner();
	void init$(::WithoutParameters$Foo* this$1, int32_t theng);
	::WithoutParameters$Foo* this$1 = nullptr;
	int32_t thang = 0;
};

#endif // _WithoutParameters$Foo$Inner_h_