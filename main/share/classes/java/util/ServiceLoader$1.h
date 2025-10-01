#ifndef _java_util_ServiceLoader$1_h_
#define _java_util_ServiceLoader$1_h_
//$ class java.util.ServiceLoader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace java {
	namespace util {

class ServiceLoader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ServiceLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ServiceLoader$1();
	void init$(::java::util::ServiceLoader* this$0, $Class* val$clazz);
	virtual $Object* run() override;
	::java::util::ServiceLoader* this$0 = nullptr;
	$Class* val$clazz = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$1_h_