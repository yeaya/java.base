#ifndef _java_lang_invoke_ProxyClassesDumper$1_h_
#define _java_lang_invoke_ProxyClassesDumper$1_h_
//$ class java.lang.invoke.ProxyClassesDumper$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ProxyClassesDumper$1 : public ::java::security::PrivilegedAction {
	$class(ProxyClassesDumper$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProxyClassesDumper$1();
	void init$(::java::nio::file::Path* val$dir);
	virtual $Object* run() override;
	::java::nio::file::Path* val$dir = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ProxyClassesDumper$1_h_