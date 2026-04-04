#include <java/security/DrbgParameters$Reseed.h>
#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

bool DrbgParameters$Reseed::getPredictionResistance() {
	return this->predictionResistance;
}

$bytes* DrbgParameters$Reseed::getAdditionalInput() {
	return this->additionalInput == nullptr ? ($bytes*)nullptr : $cast($bytes, this->additionalInput->clone());
}

void DrbgParameters$Reseed::init$(bool predictionResistance, $bytes* additionalInput) {
	this->predictionResistance = predictionResistance;
	$set(this, additionalInput, (additionalInput == nullptr) ? ($bytes*)nullptr : $cast($bytes, additionalInput->clone()));
}

DrbgParameters$Reseed::DrbgParameters$Reseed() {
}

$Class* DrbgParameters$Reseed::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"additionalInput", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Reseed, additionalInput)},
		{"predictionResistance", "Z", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Reseed, predictionResistance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z[B)V", nullptr, $PRIVATE, $method(DrbgParameters$Reseed, init$, void, bool, $bytes*)},
		{"getAdditionalInput", "()[B", nullptr, $PUBLIC, $method(DrbgParameters$Reseed, getAdditionalInput, $bytes*)},
		{"getPredictionResistance", "()Z", nullptr, $PUBLIC, $method(DrbgParameters$Reseed, getPredictionResistance, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.DrbgParameters$Reseed", "java.security.DrbgParameters", "Reseed", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.DrbgParameters$Reseed",
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
	$loadClass(DrbgParameters$Reseed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrbgParameters$Reseed);
	});
	return class$;
}

$Class* DrbgParameters$Reseed::class$ = nullptr;

	} // security
} // java