#ifndef _sun_security_provider_NativePRNG$Variant_h_
#define _sun_security_provider_NativePRNG$Variant_h_
//$ class sun.security.provider.NativePRNG$Variant
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCKING")
#undef BLOCKING
#pragma push_macro("MIXED")
#undef MIXED
#pragma push_macro("NONBLOCKING")
#undef NONBLOCKING

namespace sun {
	namespace security {
		namespace provider {

class NativePRNG$Variant : public ::java::lang::Enum {
	$class(NativePRNG$Variant, 0, ::java::lang::Enum)
public:
	NativePRNG$Variant();
	static $Array<::sun::security::provider::NativePRNG$Variant>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::provider::NativePRNG$Variant* valueOf($String* name);
	static $Array<::sun::security::provider::NativePRNG$Variant>* values();
	static ::sun::security::provider::NativePRNG$Variant* MIXED;
	static ::sun::security::provider::NativePRNG$Variant* BLOCKING;
	static ::sun::security::provider::NativePRNG$Variant* NONBLOCKING;
	static $Array<::sun::security::provider::NativePRNG$Variant>* $VALUES;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("BLOCKING")
#pragma pop_macro("MIXED")
#pragma pop_macro("NONBLOCKING")

#endif // _sun_security_provider_NativePRNG$Variant_h_