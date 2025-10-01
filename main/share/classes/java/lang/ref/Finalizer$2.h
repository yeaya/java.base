#ifndef _java_lang_ref_Finalizer$2_h_
#define _java_lang_ref_Finalizer$2_h_
//$ class java.lang.ref.Finalizer$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace ref {

class Finalizer$2 : public ::java::lang::Runnable {
	$class(Finalizer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Finalizer$2();
	void init$();
	virtual void run() override;
	$volatile(bool) running = false;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Finalizer$2_h_