#ifndef _java_security_DrbgParameters$Capability_h_
#define _java_security_DrbgParameters$Capability_h_
//$ class java.security.DrbgParameters$Capability
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PR_AND_RESEED")
#undef PR_AND_RESEED
#pragma push_macro("RESEED_ONLY")
#undef RESEED_ONLY

namespace java {
	namespace security {

class $import DrbgParameters$Capability : public ::java::lang::Enum {
	$class(DrbgParameters$Capability, 0, ::java::lang::Enum)
public:
	DrbgParameters$Capability();
	static $Array<::java::security::DrbgParameters$Capability>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool supportsPredictionResistance();
	virtual bool supportsReseeding();
	virtual $String* toString() override;
	static ::java::security::DrbgParameters$Capability* valueOf($String* name);
	static $Array<::java::security::DrbgParameters$Capability>* values();
	static ::java::security::DrbgParameters$Capability* PR_AND_RESEED;
	static ::java::security::DrbgParameters$Capability* RESEED_ONLY;
	static ::java::security::DrbgParameters$Capability* NONE;
	static $Array<::java::security::DrbgParameters$Capability>* $VALUES;
};

	} // security
} // java

#pragma pop_macro("NONE")
#pragma pop_macro("PR_AND_RESEED")
#pragma pop_macro("RESEED_ONLY")

#endif // _java_security_DrbgParameters$Capability_h_