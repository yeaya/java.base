#include <java/security/DrbgParameters.h>

#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters$Instantiation.h>
#include <java/security/DrbgParameters$NextBytes.h>
#include <java/security/DrbgParameters$Reseed.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;
using $DrbgParameters$Instantiation = ::java::security::DrbgParameters$Instantiation;
using $DrbgParameters$NextBytes = ::java::security::DrbgParameters$NextBytes;
using $DrbgParameters$Reseed = ::java::security::DrbgParameters$Reseed;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {

$MethodInfo _DrbgParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DrbgParameters::*)()>(&DrbgParameters::init$))},
	{"instantiation", "(ILjava/security/DrbgParameters$Capability;[B)Ljava/security/DrbgParameters$Instantiation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DrbgParameters$Instantiation*(*)(int32_t,$DrbgParameters$Capability*,$bytes*)>(&DrbgParameters::instantiation))},
	{"nextBytes", "(IZ[B)Ljava/security/DrbgParameters$NextBytes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DrbgParameters$NextBytes*(*)(int32_t,bool,$bytes*)>(&DrbgParameters::nextBytes))},
	{"reseed", "(Z[B)Ljava/security/DrbgParameters$Reseed;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DrbgParameters$Reseed*(*)(bool,$bytes*)>(&DrbgParameters::reseed))},
	{}
};

$InnerClassInfo _DrbgParameters_InnerClassesInfo_[] = {
	{"java.security.DrbgParameters$Reseed", "java.security.DrbgParameters", "Reseed", $PUBLIC | $STATIC | $FINAL},
	{"java.security.DrbgParameters$NextBytes", "java.security.DrbgParameters", "NextBytes", $PUBLIC | $STATIC | $FINAL},
	{"java.security.DrbgParameters$Instantiation", "java.security.DrbgParameters", "Instantiation", $PUBLIC | $STATIC | $FINAL},
	{"java.security.DrbgParameters$Capability", "java.security.DrbgParameters", "Capability", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DrbgParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.DrbgParameters",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DrbgParameters_MethodInfo_,
	nullptr,
	nullptr,
	_DrbgParameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.DrbgParameters$Reseed,java.security.DrbgParameters$NextBytes,java.security.DrbgParameters$Instantiation,java.security.DrbgParameters$Capability"
};

$Object* allocate$DrbgParameters($Class* clazz) {
	return $of($alloc(DrbgParameters));
}

void DrbgParameters::init$() {
}

$DrbgParameters$Instantiation* DrbgParameters::instantiation(int32_t strength, $DrbgParameters$Capability* capability, $bytes* personalizationString) {
	return $new($DrbgParameters$Instantiation, strength, $cast($DrbgParameters$Capability, $Objects::requireNonNull(capability)), personalizationString);
}

$DrbgParameters$NextBytes* DrbgParameters::nextBytes(int32_t strength, bool predictionResistance, $bytes* additionalInput) {
	return $new($DrbgParameters$NextBytes, strength, predictionResistance, additionalInput);
}

$DrbgParameters$Reseed* DrbgParameters::reseed(bool predictionResistance, $bytes* additionalInput) {
	return $new($DrbgParameters$Reseed, predictionResistance, additionalInput);
}

DrbgParameters::DrbgParameters() {
}

$Class* DrbgParameters::load$($String* name, bool initialize) {
	$loadClass(DrbgParameters, name, initialize, &_DrbgParameters_ClassInfo_, allocate$DrbgParameters);
	return class$;
}

$Class* DrbgParameters::class$ = nullptr;

	} // security
} // java