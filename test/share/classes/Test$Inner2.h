#ifndef _Test$Inner2_h_
#define _Test$Inner2_h_
//$ class Test$Inner2
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Test;
namespace java {
	namespace util {
		class List;
	}
}

class Test$Inner2 : public ::java::lang::Object {
	$class(Test$Inner2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test$Inner2();
	void init$(::Test* this$0);
	virtual ::java::util::List* foo2(::java::util::List* t);
	::Test* this$0 = nullptr;
};

#endif // _Test$Inner2_h_