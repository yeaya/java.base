#ifndef _java_lang_ref_Finalizer$1_h_
#define _java_lang_ref_Finalizer$1_h_
//$ class java.lang.ref.Finalizer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace lang {
		namespace ref {

class Finalizer$1 : public ::java::security::PrivilegedAction {
	$class(Finalizer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Finalizer$1();
	void init$(::java::lang::Runnable* val$proc);
	virtual $Object* run() override;
	::java::lang::Runnable* val$proc = nullptr;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Finalizer$1_h_