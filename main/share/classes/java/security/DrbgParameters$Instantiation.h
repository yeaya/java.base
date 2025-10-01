#ifndef _java_security_DrbgParameters$Instantiation_h_
#define _java_security_DrbgParameters$Instantiation_h_
//$ class java.security.DrbgParameters$Instantiation
//$ extends java.security.SecureRandomParameters

#include <java/lang/Array.h>
#include <java/security/SecureRandomParameters.h>

namespace java {
	namespace security {
		class DrbgParameters$Capability;
	}
}

namespace java {
	namespace security {

class $export DrbgParameters$Instantiation : public ::java::security::SecureRandomParameters {
	$class(DrbgParameters$Instantiation, $NO_CLASS_INIT, ::java::security::SecureRandomParameters)
public:
	DrbgParameters$Instantiation();
	void init$(int32_t strength, ::java::security::DrbgParameters$Capability* capability, $bytes* personalizationString);
	::java::security::DrbgParameters$Capability* getCapability();
	$bytes* getPersonalizationString();
	int32_t getStrength();
	virtual $String* toString() override;
	int32_t strength = 0;
	::java::security::DrbgParameters$Capability* capability = nullptr;
	$bytes* personalizationString = nullptr;
};

	} // security
} // java

#endif // _java_security_DrbgParameters$Instantiation_h_