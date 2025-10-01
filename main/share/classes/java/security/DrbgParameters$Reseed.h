#ifndef _java_security_DrbgParameters$Reseed_h_
#define _java_security_DrbgParameters$Reseed_h_
//$ class java.security.DrbgParameters$Reseed
//$ extends java.security.SecureRandomParameters

#include <java/lang/Array.h>
#include <java/security/SecureRandomParameters.h>

namespace java {
	namespace security {

class $export DrbgParameters$Reseed : public ::java::security::SecureRandomParameters {
	$class(DrbgParameters$Reseed, $NO_CLASS_INIT, ::java::security::SecureRandomParameters)
public:
	DrbgParameters$Reseed();
	void init$(bool predictionResistance, $bytes* additionalInput);
	$bytes* getAdditionalInput();
	bool getPredictionResistance();
	$bytes* additionalInput = nullptr;
	bool predictionResistance = false;
};

	} // security
} // java

#endif // _java_security_DrbgParameters$Reseed_h_