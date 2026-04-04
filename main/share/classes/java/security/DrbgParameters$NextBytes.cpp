#include <java/security/DrbgParameters$NextBytes.h>
#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

int32_t DrbgParameters$NextBytes::getStrength() {
	return this->strength;
}

bool DrbgParameters$NextBytes::getPredictionResistance() {
	return this->predictionResistance;
}

$bytes* DrbgParameters$NextBytes::getAdditionalInput() {
	return this->additionalInput == nullptr ? ($bytes*)nullptr : $cast($bytes, this->additionalInput->clone());
}

void DrbgParameters$NextBytes::init$(int32_t strength, bool predictionResistance, $bytes* additionalInput) {
	$useLocalObjectStack();
	if (strength < -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal security strength: "_s, $$str(strength)}));
	}
	this->strength = strength;
	this->predictionResistance = predictionResistance;
	$set(this, additionalInput, (additionalInput == nullptr) ? ($bytes*)nullptr : $cast($bytes, additionalInput->clone()));
}

DrbgParameters$NextBytes::DrbgParameters$NextBytes() {
}

$Class* DrbgParameters$NextBytes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strength", "I", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, strength)},
		{"predictionResistance", "Z", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, predictionResistance)},
		{"additionalInput", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, additionalInput)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IZ[B)V", nullptr, $PRIVATE, $method(DrbgParameters$NextBytes, init$, void, int32_t, bool, $bytes*)},
		{"getAdditionalInput", "()[B", nullptr, $PUBLIC, $method(DrbgParameters$NextBytes, getAdditionalInput, $bytes*)},
		{"getPredictionResistance", "()Z", nullptr, $PUBLIC, $method(DrbgParameters$NextBytes, getPredictionResistance, bool)},
		{"getStrength", "()I", nullptr, $PUBLIC, $method(DrbgParameters$NextBytes, getStrength, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.DrbgParameters$NextBytes", "java.security.DrbgParameters", "NextBytes", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.DrbgParameters$NextBytes",
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
	$loadClass(DrbgParameters$NextBytes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrbgParameters$NextBytes);
	});
	return class$;
}

$Class* DrbgParameters$NextBytes::class$ = nullptr;

	} // security
} // java