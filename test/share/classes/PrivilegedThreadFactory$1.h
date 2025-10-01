#ifndef _PrivilegedThreadFactory$1_h_
#define _PrivilegedThreadFactory$1_h_
//$ class PrivilegedThreadFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

class PrivilegedThreadFactory;
namespace java {
	namespace lang {
		class Runnable;
	}
}

class PrivilegedThreadFactory$1 : public ::java::security::PrivilegedAction {
	$class(PrivilegedThreadFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PrivilegedThreadFactory$1();
	void init$(::PrivilegedThreadFactory* this$0, ::java::lang::Runnable* val$r);
	virtual $Object* run() override;
	::PrivilegedThreadFactory* this$0 = nullptr;
	::java::lang::Runnable* val$r = nullptr;
};

#endif // _PrivilegedThreadFactory$1_h_