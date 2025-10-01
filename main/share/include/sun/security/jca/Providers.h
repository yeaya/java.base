#ifndef _sun_security_jca_Providers_h_
#define _sun_security_jca_Providers_h_
//$ class sun.security.jca.Providers
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class ProviderList;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $import Providers : public ::java::lang::Object {
	$class(Providers, 0, ::java::lang::Object)
public:
	Providers();
	void init$();
	static ::sun::security::jca::ProviderList* beginThreadProviderList(::sun::security::jca::ProviderList* list);
	static void changeThreadProviderList(::sun::security::jca::ProviderList* list);
	static void clearCachedValues();
	static void endThreadProviderList(::sun::security::jca::ProviderList* list);
	static ::sun::security::jca::ProviderList* getFullProviderList();
	static ::sun::security::jca::ProviderList* getProviderList();
	static ::java::security::Provider* getSunProvider();
	static ::sun::security::jca::ProviderList* getSystemProviderList();
	static ::sun::security::jca::ProviderList* getThreadProviderList();
	static void setProviderList(::sun::security::jca::ProviderList* newList);
	static void setSystemProviderList(::sun::security::jca::ProviderList* list);
	static $Object* startJarVerification();
	static void stopJarVerification(Object$* obj);
	static ::java::lang::ThreadLocal* threadLists;
	static $volatile(int32_t) threadListsUsed;
	static $volatile(::sun::security::jca::ProviderList*) providerList;
	static $StringArray* jarVerificationProviders;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_Providers_h_