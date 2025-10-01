#ifndef _Truncate$4_h_
#define _Truncate$4_h_
//$ class Truncate$4
//$ extends java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Thread$UncaughtExceptionHandler.h>

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}

class Truncate$4 : public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(Truncate$4, $NO_CLASS_INIT, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	Truncate$4();
	void init$();
	virtual void uncaughtException($Thread* t, $Throwable* e) override;
};

#endif // _Truncate$4_h_