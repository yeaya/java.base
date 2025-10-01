#ifndef _java_lang_Thread$UncaughtExceptionHandler_h_
#define _java_lang_Thread$UncaughtExceptionHandler_h_
//$ interface java.lang.Thread$UncaughtExceptionHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import Thread$UncaughtExceptionHandler : public ::java::lang::Object {
	$interface(Thread$UncaughtExceptionHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void uncaughtException($Thread* t, $Throwable* e) {}
};

	} // lang
} // java

#endif // _java_lang_Thread$UncaughtExceptionHandler_h_