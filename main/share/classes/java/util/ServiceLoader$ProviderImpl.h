#ifndef _java_util_ServiceLoader$ProviderImpl_h_
#define _java_util_ServiceLoader$ProviderImpl_h_
//$ class java.util.ServiceLoader$ProviderImpl
//$ extends java.util.ServiceLoader$Provider

#include <java/util/ServiceLoader$Provider.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace util {

class ServiceLoader$ProviderImpl : public ::java::util::ServiceLoader$Provider {
	$class(ServiceLoader$ProviderImpl, $NO_CLASS_INIT, ::java::util::ServiceLoader$Provider)
public:
	ServiceLoader$ProviderImpl();
	void init$($Class* service, $Class* type, ::java::lang::reflect::Method* factoryMethod, ::java::security::AccessControlContext* acc);
	void init$($Class* service, $Class* type, ::java::lang::reflect::Constructor* ctor, ::java::security::AccessControlContext* acc);
	virtual bool equals(Object$* ob) override;
	virtual $Object* get() override;
	virtual int32_t hashCode() override;
	$Object* invokeFactoryMethod();
	$Object* newInstance();
	virtual $Class* type() override;
	$Class* service = nullptr;
	$Class* type$ = nullptr;
	::java::lang::reflect::Method* factoryMethod = nullptr;
	::java::lang::reflect::Constructor* ctor = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$ProviderImpl_h_