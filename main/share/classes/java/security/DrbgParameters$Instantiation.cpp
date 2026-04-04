#include <java/security/DrbgParameters$Instantiation.h>
#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;

namespace java {
	namespace security {

int32_t DrbgParameters$Instantiation::getStrength() {
	return this->strength;
}

$DrbgParameters$Capability* DrbgParameters$Instantiation::getCapability() {
	return this->capability;
}

$bytes* DrbgParameters$Instantiation::getPersonalizationString() {
	return (this->personalizationString == nullptr) ? ($bytes*)nullptr : $cast($bytes, this->personalizationString->clone());
}

void DrbgParameters$Instantiation::init$(int32_t strength, $DrbgParameters$Capability* capability, $bytes* personalizationString) {
	$useLocalObjectStack();
	if (strength < -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal security strength: "_s, $$str(strength)}));
	}
	this->strength = strength;
	$set(this, capability, capability);
	$set(this, personalizationString, (personalizationString == nullptr) ? ($bytes*)nullptr : $cast($bytes, personalizationString->clone()));
}

$String* DrbgParameters$Instantiation::toString() {
	return $str({$$str(this->strength), ","_s, this->capability, ","_s, this->personalizationString});
}

DrbgParameters$Instantiation::DrbgParameters$Instantiation() {
}

$Class* DrbgParameters$Instantiation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strength", "I", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, strength)},
		{"capability", "Ljava/security/DrbgParameters$Capability;", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, capability)},
		{"personalizationString", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, personalizationString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/security/DrbgParameters$Capability;[B)V", nullptr, $PRIVATE, $method(DrbgParameters$Instantiation, init$, void, int32_t, $DrbgParameters$Capability*, $bytes*)},
		{"getCapability", "()Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC, $method(DrbgParameters$Instantiation, getCapability, $DrbgParameters$Capability*)},
		{"getPersonalizationString", "()[B", nullptr, $PUBLIC, $method(DrbgParameters$Instantiation, getPersonalizationString, $bytes*)},
		{"getStrength", "()I", nullptr, $PUBLIC, $method(DrbgParameters$Instantiation, getStrength, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DrbgParameters$Instantiation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.DrbgParameters$Instantiation", "java.security.DrbgParameters", "Instantiation", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.DrbgParameters$Instantiation",
		"java.lang.Object",
		"java.security.SecureRandomParameters",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.DrbgParameters"
	};
	$loadClass(DrbgParameters$Instantiation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrbgParameters$Instantiation);
	});
	return class$;
}

$Class* DrbgParameters$Instantiation::class$ = nullptr;

	} // security
} // java