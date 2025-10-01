#ifndef _java_util_ServiceLoader$ProviderImpl$1_h_
#define _java_util_ServiceLoader$ProviderImpl$1_h_
//$ class java.util.ServiceLoader$ProviderImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		class ServiceLoader$ProviderImpl;
	}
}

namespace java {
	namespace util {

class ServiceLoader$ProviderImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ServiceLoader$ProviderImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ServiceLoader$ProviderImpl$1();
	void init$(::java::util::ServiceLoader$ProviderImpl* this$0);
	virtual $Object* run() override;
	::java::util::ServiceLoader$ProviderImpl* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$ProviderImpl$1_h_