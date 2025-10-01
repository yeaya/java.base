#ifndef _Test_h_
#define _Test_h_
//$ class Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Collection;
		class List;
	}
}

class Test : public ::java::lang::Object {
	$class(Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test();
	void init$();
	virtual ::java::util::List* foo(::java::util::List* t);
	static $Object* max(::java::util::Collection* coll);
};

#endif // _Test_h_