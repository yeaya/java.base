#include <java/security/DrbgParameters$NextBytes.h>

#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DrbgParameters = ::java::security::DrbgParameters;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;

namespace java {
	namespace security {

$FieldInfo _DrbgParameters$NextBytes_FieldInfo_[] = {
	{"strength", "I", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, strength)},
	{"predictionResistance", "Z", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, predictionResistance)},
	{"additionalInput", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$NextBytes, additionalInput)},
	{}
};

$MethodInfo _DrbgParameters$NextBytes_MethodInfo_[] = {
	{"<init>", "(IZ[B)V", nullptr, $PRIVATE, $method(static_cast<void(DrbgParameters$NextBytes::*)(int32_t,bool,$bytes*)>(&DrbgParameters$NextBytes::init$))},
	{"getAdditionalInput", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DrbgParameters$NextBytes::*)()>(&DrbgParameters$NextBytes::getAdditionalInput))},
	{"getPredictionResistance", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(DrbgParameters$NextBytes::*)()>(&DrbgParameters$NextBytes::getPredictionResistance))},
	{"getStrength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DrbgParameters$NextBytes::*)()>(&DrbgParameters$NextBytes::getStrength))},
	{}
};

$InnerClassInfo _DrbgParameters$NextBytes_InnerClassesInfo_[] = {
	{"java.security.DrbgParameters$NextBytes", "java.security.DrbgParameters", "NextBytes", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DrbgParameters$NextBytes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.DrbgParameters$NextBytes",
	"java.lang.Object",
	"java.security.SecureRandomParameters",
	_DrbgParameters$NextBytes_FieldInfo_,
	_DrbgParameters$NextBytes_MethodInfo_,
	nullptr,
	nullptr,
	_DrbgParameters$NextBytes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.DrbgParameters"
};

$Object* allocate$DrbgParameters$NextBytes($Class* clazz) {
	return $of($alloc(DrbgParameters$NextBytes));
}

int32_t DrbgParameters$NextBytes::getStrength() {
	return this->strength;
}

bool DrbgParameters$NextBytes::getPredictionResistance() {
	return this->predictionResistance;
}

$bytes* DrbgParameters$NextBytes::getAdditionalInput() {
	return this->additionalInput == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->additionalInput)->clone());
}

void DrbgParameters$NextBytes::init$(int32_t strength, bool predictionResistance, $bytes* additionalInput) {
	$useLocalCurrentObjectStackCache();
	if (strength < -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal security strength: "_s, $$str(strength)}));
	}
	this->strength = strength;
	this->predictionResistance = predictionResistance;
	$set(this, additionalInput, (additionalInput == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(additionalInput)->clone()));
}

DrbgParameters$NextBytes::DrbgParameters$NextBytes() {
}

$Class* DrbgParameters$NextBytes::load$($String* name, bool initialize) {
	$loadClass(DrbgParameters$NextBytes, name, initialize, &_DrbgParameters$NextBytes_ClassInfo_, allocate$DrbgParameters$NextBytes);
	return class$;
}

$Class* DrbgParameters$NextBytes::class$ = nullptr;

	} // security
} // java