#ifndef _sun_security_util_RegisteredDomain$Type_h_
#define _sun_security_util_RegisteredDomain$Type_h_
//$ class sun.security.util.RegisteredDomain$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ICANN")
#undef ICANN
#pragma push_macro("PRIVATE")
#undef PRIVATE

namespace sun {
	namespace security {
		namespace util {

class $import RegisteredDomain$Type : public ::java::lang::Enum {
	$class(RegisteredDomain$Type, 0, ::java::lang::Enum)
public:
	RegisteredDomain$Type();
	static $Array<::sun::security::util::RegisteredDomain$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::util::RegisteredDomain$Type* valueOf($String* name);
	static $Array<::sun::security::util::RegisteredDomain$Type>* values();
	static ::sun::security::util::RegisteredDomain$Type* ICANN;
	static ::sun::security::util::RegisteredDomain$Type* PRIVATE;
	static $Array<::sun::security::util::RegisteredDomain$Type>* $VALUES;
};

		} // util
	} // security
} // sun

#pragma pop_macro("ICANN")
#pragma pop_macro("PRIVATE")

#endif // _sun_security_util_RegisteredDomain$Type_h_