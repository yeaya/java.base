#ifndef _sun_security_jca_ProviderList_h_
#define _sun_security_jca_ProviderList_h_
//$ class sun.security.jca.ProviderList
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_PROVIDER")
#undef EMPTY_PROVIDER
#pragma push_macro("PC0")
#undef PC0
#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace security {
		class Provider;
		class Provider$Service;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class ProviderConfig;
			class ProviderList$PreferredList;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $import ProviderList : public ::java::lang::Object {
	$class(ProviderList, 0, ::java::lang::Object)
public:
	ProviderList();
	void init$($Array<::sun::security::jca::ProviderConfig>* configs, bool allLoaded);
	void init$();
	static ::sun::security::jca::ProviderList* add(::sun::security::jca::ProviderList* providerList, ::java::security::Provider* p);
	static ::sun::security::jca::ProviderList* fromSecurityProperties();
	int32_t getIndex($String* name);
	::sun::security::jca::ProviderList* getJarList($StringArray* jarProvNames);
	::java::security::Provider* getProvider(int32_t index);
	::java::security::Provider* getProvider($String* name);
	::sun::security::jca::ProviderConfig* getProviderConfig($String* name);
	::java::security::Provider$Service* getService($String* type, $String* name);
	::java::util::List* getServices($String* type, $String* algorithm);
	::java::util::List* getServices($String* type, ::java::util::List* algorithms);
	::java::util::List* getServices(::java::util::List* ids);
	static ::sun::security::jca::ProviderList* insertAt(::sun::security::jca::ProviderList* providerList, ::java::security::Provider* p, int32_t position);
	int32_t loadAll();
	static ::sun::security::jca::ProviderList* newList($Array<::java::security::Provider>* providers);
	::java::util::List* providers();
	static ::sun::security::jca::ProviderList* remove(::sun::security::jca::ProviderList* providerList, $String* name);
	::sun::security::jca::ProviderList* removeInvalid();
	int32_t size();
	$Array<::java::security::Provider>* toArray();
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	static $Array<::sun::security::jca::ProviderConfig>* PC0;
	static $Array<::java::security::Provider>* P0;
	static ::sun::security::jca::ProviderList* EMPTY;
	static ::sun::security::jca::ProviderList$PreferredList* preferredPropList;
	static ::java::security::Provider* EMPTY_PROVIDER;
	$Array<::sun::security::jca::ProviderConfig>* configs = nullptr;
	$volatile(bool) allLoaded = false;
	::java::util::List* userList = nullptr;
	static $StringArray* SHA2Group;
	static $StringArray* HmacSHA2Group;
	static $StringArray* SHA2RSAGroup;
	static $StringArray* SHA2DSAGroup;
	static $StringArray* SHA2ECDSAGroup;
	static $StringArray* SHA3Group;
	static $StringArray* HmacSHA3Group;
};

		} // jca
	} // security
} // sun

#pragma pop_macro("EMPTY_PROVIDER")
#pragma pop_macro("PC0")
#pragma pop_macro("EMPTY")

#endif // _sun_security_jca_ProviderList_h_