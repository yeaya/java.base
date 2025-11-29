#include <java/security/DrbgParameters$Reseed.h>

#include <java/security/DrbgParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$FieldInfo _DrbgParameters$Reseed_FieldInfo_[] = {
	{"additionalInput", "[B", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Reseed, additionalInput)},
	{"predictionResistance", "Z", nullptr, $PRIVATE | $FINAL, $field(DrbgParameters$Reseed, predictionResistance)},
	{}
};

$MethodInfo _DrbgParameters$Reseed_MethodInfo_[] = {
	{"<init>", "(Z[B)V", nullptr, $PRIVATE, $method(static_cast<void(DrbgParameters$Reseed::*)(bool,$bytes*)>(&DrbgParameters$Reseed::init$))},
	{"getAdditionalInput", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(DrbgParameters$Reseed::*)()>(&DrbgParameters$Reseed::getAdditionalInput))},
	{"getPredictionResistance", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(DrbgParameters$Reseed::*)()>(&DrbgParameters$Reseed::getPredictionResistance))},
	{}
};

$InnerClassInfo _DrbgParameters$Reseed_InnerClassesInfo_[] = {
	{"java.security.DrbgParameters$Reseed", "java.security.DrbgParameters", "Reseed", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DrbgParameters$Reseed_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.DrbgParameters$Reseed",
	"java.lang.Object",
	"java.security.SecureRandomParameters",
	_DrbgParameters$Reseed_FieldInfo_,
	_DrbgParameters$Reseed_MethodInfo_,
	nullptr,
	nullptr,
	_DrbgParameters$Reseed_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.DrbgParameters"
};

$Object* allocate$DrbgParameters$Reseed($Class* clazz) {
	return $of($alloc(DrbgParameters$Reseed));
}

bool DrbgParameters$Reseed::getPredictionResistance() {
	return this->predictionResistance;
}

$bytes* DrbgParameters$Reseed::getAdditionalInput() {
	return this->additionalInput == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->additionalInput)->clone());
}

void DrbgParameters$Reseed::init$(bool predictionResistance, $bytes* additionalInput) {
	this->predictionResistance = predictionResistance;
	$set(this, additionalInput, (additionalInput == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(additionalInput)->clone()));
}

DrbgParameters$Reseed::DrbgParameters$Reseed() {
}

$Class* DrbgParameters$Reseed::load$($String* name, bool initialize) {
	$loadClass(DrbgParameters$Reseed, name, initialize, &_DrbgParameters$Reseed_ClassInfo_, allocate$DrbgParameters$Reseed);
	return class$;
}

$Class* DrbgParameters$Reseed::class$ = nullptr;

	} // security
} // java