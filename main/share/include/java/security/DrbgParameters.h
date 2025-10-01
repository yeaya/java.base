#ifndef _java_security_DrbgParameters_h_
#define _java_security_DrbgParameters_h_
//$ class java.security.DrbgParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class DrbgParameters$Capability;
		class DrbgParameters$Instantiation;
		class DrbgParameters$NextBytes;
		class DrbgParameters$Reseed;
	}
}

namespace java {
	namespace security {

class $import DrbgParameters : public ::java::lang::Object {
	$class(DrbgParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DrbgParameters();
	void init$();
	static ::java::security::DrbgParameters$Instantiation* instantiation(int32_t strength, ::java::security::DrbgParameters$Capability* capability, $bytes* personalizationString);
	static ::java::security::DrbgParameters$NextBytes* nextBytes(int32_t strength, bool predictionResistance, $bytes* additionalInput);
	static ::java::security::DrbgParameters$Reseed* reseed(bool predictionResistance, $bytes* additionalInput);
};

	} // security
} // java

#endif // _java_security_DrbgParameters_h_