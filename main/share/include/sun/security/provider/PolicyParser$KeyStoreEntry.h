#ifndef _sun_security_provider_PolicyParser$KeyStoreEntry_h_
#define _sun_security_provider_PolicyParser$KeyStoreEntry_h_
//$ class sun.security.provider.PolicyParser$KeyStoreEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import PolicyParser$KeyStoreEntry : public ::java::lang::Object {
	$class(PolicyParser$KeyStoreEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyParser$KeyStoreEntry();
	void init$($String* name, ::java::util::Map* properties);
	virtual $String* getName();
	virtual ::java::util::Map* getProperties();
	virtual $String* toString() override;
	$String* name = nullptr;
	::java::util::Map* properties = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser$KeyStoreEntry_h_