#ifndef _TestObj_h_
#define _TestObj_h_
//$ class TestObj
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

class TestObj : public ::java::lang::Object {
	$class(TestObj, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestObj();
	void init$($String* str, ::java::io::PrintWriter* writer);
	virtual void test();
	virtual $String* toString() override;
	$String* mStr = nullptr;
	::java::io::PrintWriter* writer = nullptr;
};

#endif // _TestObj_h_