#ifndef _TestWildcardType_h_
#define _TestWildcardType_h_
//$ class TestWildcardType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

class TestWildcardType : public ::java::lang::Object {
	$class(TestWildcardType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestWildcardType();
	void init$();
	virtual ::java::util::List* foo();
	$Class* f1 = nullptr;
	$Class* f2 = nullptr;
	$Class* f3 = nullptr;
};

#endif // _TestWildcardType_h_