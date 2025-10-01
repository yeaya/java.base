#ifndef _java_lang_Thread$1_h_
#define _java_lang_Thread$1_h_
//$ class java.lang.Thread$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {

class Thread$1 : public ::java::security::PrivilegedAction {
	$class(Thread$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Thread$1();
	void init$($Class* val$subcl);
	virtual $Object* run() override;
	$Class* val$subcl = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Thread$1_h_