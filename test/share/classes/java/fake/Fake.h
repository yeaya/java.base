#ifndef _java_fake_Fake_h_
#define _java_fake_Fake_h_
//$ class java.fake.Fake
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace fake {

class $export Fake : public ::java::lang::Object {
	$class(Fake, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Fake();
	void init$();
	virtual void run();
};

	} // fake
} // java

#endif // _java_fake_Fake_h_