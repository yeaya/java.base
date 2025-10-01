#ifndef _java_lang_Runnable_h_
#define _java_lang_Runnable_h_
//$ interface java.lang.Runnable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $import Runnable : public ::java::lang::Object {
	$interface(Runnable, $PRELOAD | $PREINIT | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void run() {}
};

	} // lang
} // java

#endif // _java_lang_Runnable_h_