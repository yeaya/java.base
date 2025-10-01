#ifndef _AsyncCloseTest_h_
#define _AsyncCloseTest_h_
//$ class AsyncCloseTest
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

class $export AsyncCloseTest : public ::java::lang::Object {
	$class(AsyncCloseTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AsyncCloseTest();
	void init$();
	virtual void closed();
	virtual $String* description() {return nullptr;}
	virtual ::AsyncCloseTest* failed($String* r);
	virtual $String* failureReason();
	virtual ::AsyncCloseTest* go() {return nullptr;}
	virtual bool hasPassed();
	virtual bool isClosed();
	virtual ::AsyncCloseTest* passed();
	bool passed$ = false;
	::java::lang::StringBuilder* reason = nullptr;
	bool closed$ = false;
};

#endif // _AsyncCloseTest_h_