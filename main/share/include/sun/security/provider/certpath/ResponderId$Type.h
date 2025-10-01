#ifndef _sun_security_provider_certpath_ResponderId$Type_h_
#define _sun_security_provider_certpath_ResponderId$Type_h_
//$ class sun.security.provider.certpath.ResponderId$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BY_KEY")
#undef BY_KEY
#pragma push_macro("BY_NAME")
#undef BY_NAME

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import ResponderId$Type : public ::java::lang::Enum {
	$class(ResponderId$Type, 0, ::java::lang::Enum)
public:
	ResponderId$Type();
	static $Array<::sun::security::provider::certpath::ResponderId$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value, $String* name);
	virtual $String* toString() override;
	virtual int32_t value();
	static ::sun::security::provider::certpath::ResponderId$Type* valueOf($String* name);
	static $Array<::sun::security::provider::certpath::ResponderId$Type>* values();
	static ::sun::security::provider::certpath::ResponderId$Type* BY_NAME;
	static ::sun::security::provider::certpath::ResponderId$Type* BY_KEY;
	static $Array<::sun::security::provider::certpath::ResponderId$Type>* $VALUES;
	int32_t tagNumber = 0;
	$String* ridTypeName = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("BY_KEY")
#pragma pop_macro("BY_NAME")

#endif // _sun_security_provider_certpath_ResponderId$Type_h_