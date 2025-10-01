#ifndef _java_lang_ClassLoader$1_h_
#define _java_lang_ClassLoader$1_h_
//$ class java.lang.ClassLoader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class SecurityManager;
	}
}

namespace java {
	namespace lang {

class ClassLoader$1 : public ::java::security::PrivilegedAction {
	$class(ClassLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ClassLoader$1();
	void init$(::java::lang::ClassLoader* this$0, ::java::lang::SecurityManager* val$sm, $String* val$packageName);
	virtual $Object* run() override;
	::java::lang::ClassLoader* this$0 = nullptr;
	$String* val$packageName = nullptr;
	::java::lang::SecurityManager* val$sm = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ClassLoader$1_h_