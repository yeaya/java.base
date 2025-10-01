#ifndef _sun_security_jca_ProviderList$PreferredEntry_h_
#define _sun_security_jca_ProviderList$PreferredEntry_h_
//$ class sun.security.jca.ProviderList$PreferredEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace jca {

class ProviderList$PreferredEntry : public ::java::lang::Object {
	$class(ProviderList$PreferredEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProviderList$PreferredEntry();
	void init$($String* t, $String* p);
	virtual bool match($String* t, $String* a);
	$String* print($String* t, $String* a, $String* p);
	virtual $String* toString() override;
	$String* type = nullptr;
	$String* algorithm = nullptr;
	$String* provider = nullptr;
	$StringArray* alternateNames = nullptr;
	bool group = false;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$PreferredEntry_h_