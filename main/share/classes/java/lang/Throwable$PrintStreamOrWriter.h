#ifndef _java_lang_Throwable$PrintStreamOrWriter_h_
#define _java_lang_Throwable$PrintStreamOrWriter_h_
//$ class java.lang.Throwable$PrintStreamOrWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class Throwable$PrintStreamOrWriter : public ::java::lang::Object {
	$class(Throwable$PrintStreamOrWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Throwable$PrintStreamOrWriter();
	void init$();
	virtual $Object* lock() {return nullptr;}
	virtual void println(Object$* o) {}
};

	} // lang
} // java

#endif // _java_lang_Throwable$PrintStreamOrWriter_h_