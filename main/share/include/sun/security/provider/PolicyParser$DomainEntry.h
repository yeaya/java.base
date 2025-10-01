#ifndef _sun_security_provider_PolicyParser$DomainEntry_h_
#define _sun_security_provider_PolicyParser$DomainEntry_h_
//$ class sun.security.provider.PolicyParser$DomainEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyParser$KeyStoreEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import PolicyParser$DomainEntry : public ::java::lang::Object {
	$class(PolicyParser$DomainEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyParser$DomainEntry();
	void init$($String* name, ::java::util::Map* properties);
	virtual void add(::sun::security::provider::PolicyParser$KeyStoreEntry* entry);
	virtual ::java::util::Collection* getEntries();
	virtual $String* getName();
	virtual ::java::util::Map* getProperties();
	virtual $String* toString() override;
	$String* name = nullptr;
	::java::util::Map* properties = nullptr;
	::java::util::Map* entries = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser$DomainEntry_h_