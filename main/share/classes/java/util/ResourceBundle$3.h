#ifndef _java_util_ResourceBundle$3_h_
#define _java_util_ResourceBundle$3_h_
//$ class java.util.ResourceBundle$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace java {
	namespace util {

class ResourceBundle$3 : public ::java::security::PrivilegedAction {
	$class(ResourceBundle$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ResourceBundle$3();
	void init$($String* val$providerName, ::java::lang::ClassLoader* val$loader);
	virtual $Object* run() override;
	::java::lang::ClassLoader* val$loader = nullptr;
	$String* val$providerName = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$3_h_