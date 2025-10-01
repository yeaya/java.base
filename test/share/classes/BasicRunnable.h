#ifndef _BasicRunnable_h_
#define _BasicRunnable_h_
//$ interface BasicRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class BasicRunnable : public ::java::lang::Runnable {
	$interface(BasicRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	virtual void init(::java::lang::Appendable* a, $String* csq, $String* exp) {}
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* csq) {return nullptr;}
};

#endif // _BasicRunnable_h_