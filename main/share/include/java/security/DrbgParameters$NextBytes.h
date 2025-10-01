#ifndef _java_security_DrbgParameters$NextBytes_h_
#define _java_security_DrbgParameters$NextBytes_h_
//$ class java.security.DrbgParameters$NextBytes
//$ extends java.security.SecureRandomParameters

#include <java/lang/Array.h>
#include <java/security/SecureRandomParameters.h>

namespace java {
	namespace security {

class $import DrbgParameters$NextBytes : public ::java::security::SecureRandomParameters {
	$class(DrbgParameters$NextBytes, $NO_CLASS_INIT, ::java::security::SecureRandomParameters)
public:
	DrbgParameters$NextBytes();
	void init$(int32_t strength, bool predictionResistance, $bytes* additionalInput);
	$bytes* getAdditionalInput();
	bool getPredictionResistance();
	int32_t getStrength();
	int32_t strength = 0;
	bool predictionResistance = false;
	$bytes* additionalInput = nullptr;
};

	} // security
} // java

#endif // _java_security_DrbgParameters$NextBytes_h_