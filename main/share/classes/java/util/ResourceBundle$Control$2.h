#ifndef _java_util_ResourceBundle$Control$2_h_
#define _java_util_ResourceBundle$Control$2_h_
//$ class java.util.ResourceBundle$Control$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class ResourceBundle$Control;
	}
}

namespace java {
	namespace util {

class ResourceBundle$Control$2 : public ::java::security::PrivilegedExceptionAction {
	$class(ResourceBundle$Control$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ResourceBundle$Control$2();
	void init$(::java::util::ResourceBundle$Control* this$0, ::java::lang::ClassLoader* val$loader, $String* val$resourceName, bool val$reloadFlag);
	virtual $Object* run() override;
	::java::util::ResourceBundle$Control* this$0 = nullptr;
	bool val$reloadFlag = false;
	$String* val$resourceName = nullptr;
	::java::lang::ClassLoader* val$loader = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$Control$2_h_