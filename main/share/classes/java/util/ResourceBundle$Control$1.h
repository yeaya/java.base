#ifndef _java_util_ResourceBundle$Control$1_h_
#define _java_util_ResourceBundle$Control$1_h_
//$ class java.util.ResourceBundle$Control$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		class ResourceBundle$Control;
	}
}

namespace java {
	namespace util {

class ResourceBundle$Control$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ResourceBundle$Control$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ResourceBundle$Control$1();
	void init$(::java::util::ResourceBundle$Control* this$0, $Class* val$bundleClass);
	virtual $Object* run() override;
	::java::util::ResourceBundle$Control* this$0 = nullptr;
	$Class* val$bundleClass = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$Control$1_h_