#ifndef _sun_security_provider_PolicyParser$PrincipalEntry_h_
#define _sun_security_provider_PolicyParser$PrincipalEntry_h_
//$ class sun.security.provider.PolicyParser$PrincipalEntry
//$ extends java.security.Principal

#include <java/security/Principal.h>

#pragma push_macro("REPLACE_NAME")
#undef REPLACE_NAME
#pragma push_macro("WILDCARD_CLASS")
#undef WILDCARD_CLASS
#pragma push_macro("WILDCARD_NAME")
#undef WILDCARD_NAME

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export PolicyParser$PrincipalEntry : public ::java::security::Principal {
	$class(PolicyParser$PrincipalEntry, 0, ::java::security::Principal)
public:
	PolicyParser$PrincipalEntry();
	void init$($String* principalClass, $String* principalName);
	virtual bool equals(Object$* obj) override;
	virtual $String* getDisplayClass();
	virtual $String* getDisplayName();
	virtual $String* getDisplayName(bool addQuote);
	virtual $String* getName() override;
	virtual $String* getPrincipalClass();
	virtual $String* getPrincipalName();
	virtual int32_t hashCode() override;
	virtual bool isReplaceName();
	virtual bool isWildcardClass();
	virtual bool isWildcardName();
	virtual $String* toString() override;
	virtual void write(::java::io::PrintWriter* out);
	static $String* WILDCARD_CLASS;
	static $String* WILDCARD_NAME;
	static $String* REPLACE_NAME;
	$String* principalClass = nullptr;
	$String* principalName = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("REPLACE_NAME")
#pragma pop_macro("WILDCARD_CLASS")
#pragma pop_macro("WILDCARD_NAME")

#endif // _sun_security_provider_PolicyParser$PrincipalEntry_h_