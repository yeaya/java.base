#ifndef _sun_security_util_DomainName$Rule$Type_h_
#define _sun_security_util_DomainName$Rule$Type_h_
//$ class sun.security.util.DomainName$Rule$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("WILDCARD")
#undef WILDCARD
#pragma push_macro("EXCEPTION")
#undef EXCEPTION
#pragma push_macro("NORMAL")
#undef NORMAL

namespace sun {
	namespace security {
		namespace util {

class DomainName$Rule$Type : public ::java::lang::Enum {
	$class(DomainName$Rule$Type, 0, ::java::lang::Enum)
public:
	DomainName$Rule$Type();
	static $Array<::sun::security::util::DomainName$Rule$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::util::DomainName$Rule$Type* valueOf($String* name);
	static $Array<::sun::security::util::DomainName$Rule$Type>* values();
	static ::sun::security::util::DomainName$Rule$Type* EXCEPTION;
	static ::sun::security::util::DomainName$Rule$Type* NORMAL;
	static ::sun::security::util::DomainName$Rule$Type* OTHER;
	static ::sun::security::util::DomainName$Rule$Type* WILDCARD;
	static $Array<::sun::security::util::DomainName$Rule$Type>* $VALUES;
};

		} // util
	} // security
} // sun

#pragma pop_macro("OTHER")
#pragma pop_macro("WILDCARD")
#pragma pop_macro("EXCEPTION")
#pragma pop_macro("NORMAL")

#endif // _sun_security_util_DomainName$Rule$Type_h_