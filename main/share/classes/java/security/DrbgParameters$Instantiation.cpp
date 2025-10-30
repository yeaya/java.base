#include <java/security/DrbgParameters$Instantiation.h>

#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DrbgParameters = ::java::security::DrbgParameters;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;

namespace java {
	namespace security {

$FieldInfo _DrbgParameters$Instantiation_FieldInfo_[] = {
	{"strength", "I", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, strength)},
	{"capability", "Ljava/security/DrbgParameters$Capability;", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, capability)},
	{"personalizationString", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Instantiation, personalizationString)},
	{}
};

$MethodInfo _DrbgParameters$Instantiation_MethodInfo_[] = {
	{"<init>", "(ILjava/security/DrbgParameters$Capability;[B)V", nullptr, $PRIVATE, $method(static_cast<void(DrbgParameters$Instantiation::*)(int32_t,$DrbgParameters$Capability*,$bytes*)>(&DrbgParameters$Instantiation::init$))},
	{"getCapability", "()Ljava/security/DrbgParameters$Capability;", nullptr, $PUBLIC, $method(static_cast<$DrbgParameters$Capability*(DrbgParameters$Instantiation::*)()>(&DrbgParameters$Instantiation::getCapability))},
	{"getPersonalizationString", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DrbgParameters$Instantiation::*)()>(&DrbgParameters$Instantiation::getPersonalizationString))},
	{"getStrength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DrbgParameters$Instantiation::*)()>(&DrbgParameters$Instantiation::getStrength))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrbgParameters$Instantiation_InnerClassesInfo_[] = {
	{"java.security.DrbgParameters$Instantiation", "java.security.DrbgParameters", "Instantiation", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DrbgParameters$Instantiation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.DrbgParameters$Instantiation",
	"java.lang.Object",
	"java.security.SecureRandomParameters",
	_DrbgParameters$Instantiation_FieldInfo_,
	_DrbgParameters$Instantiation_MethodInfo_,
	nullptr,
	nullptr,
	_DrbgParameters$Instantiation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.DrbgParameters"
};

$Object* allocate$DrbgParameters$Instantiation($Class* clazz) {
	return $of($alloc(DrbgParameters$Instantiation));
}

int32_t DrbgParameters$Instantiation::getStrength() {
	return this->strength;
}

$DrbgParameters$Capability* DrbgParameters$Instantiation::getCapability() {
	return this->capability;
}

$bytes* DrbgParameters$Instantiation::getPersonalizationString() {
	return (this->personalizationString == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(this->personalizationString)->clone());
}

void DrbgParameters$Instantiation::init$(int32_t strength, $DrbgParameters$Capability* capability, $bytes* personalizationString) {
	$useLocalCurrentObjectStackCache();
	if (strength < -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal security strength: "_s, $$str(strength)}));
	}
	this->strength = strength;
	$set(this, capability, capability);
	$set(this, personalizationString, (personalizationString == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(personalizationString)->clone()));
}

$String* DrbgParameters$Instantiation::toString() {
	return $str({$$str(this->strength), ","_s, this->capability, ","_s, this->personalizationString});
}

DrbgParameters$Instantiation::DrbgParameters$Instantiation() {
}

$Class* DrbgParameters$Instantiation::load$($String* name, bool initialize) {
	$loadClass(DrbgParameters$Instantiation, name, initialize, &_DrbgParameters$Instantiation_ClassInfo_, allocate$DrbgParameters$Instantiation);
	return class$;
}

$Class* DrbgParameters$Instantiation::class$ = nullptr;

	} // security
} // java