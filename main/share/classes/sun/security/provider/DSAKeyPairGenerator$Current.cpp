#include <sun/security/provider/DSAKeyPairGenerator$Current.h>

#include <java/security/KeyPair.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/provider/DSAKeyPairGenerator.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_DSA_KEY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyPair = ::java::security::KeyPair;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DSAKeyPairGenerator = ::sun::security::provider::DSAKeyPairGenerator;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSAKeyPairGenerator$Current_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyPairGenerator$Current::*)()>(&DSAKeyPairGenerator$Current::init$))},
	{"generateKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"initialize", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSAKeyPairGenerator$Current_InnerClassesInfo_[] = {
	{"sun.security.provider.DSAKeyPairGenerator$Current", "sun.security.provider.DSAKeyPairGenerator", "Current", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSAKeyPairGenerator$Current_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSAKeyPairGenerator$Current",
	"sun.security.provider.DSAKeyPairGenerator",
	nullptr,
	nullptr,
	_DSAKeyPairGenerator$Current_MethodInfo_,
	nullptr,
	nullptr,
	_DSAKeyPairGenerator$Current_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSAKeyPairGenerator"
};

$Object* allocate$DSAKeyPairGenerator$Current($Class* clazz) {
	return $of($alloc(DSAKeyPairGenerator$Current));
}

void DSAKeyPairGenerator$Current::init$() {
	$init($SecurityProviderConstants);
	$DSAKeyPairGenerator::init$($SecurityProviderConstants::DEF_DSA_KEY_SIZE);
}

$KeyPair* DSAKeyPairGenerator$Current::generateKeyPair() {
	return $DSAKeyPairGenerator::generateKeyPair();
}

void DSAKeyPairGenerator$Current::initialize($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$DSAKeyPairGenerator::initialize(params, random);
}

void DSAKeyPairGenerator$Current::initialize(int32_t modlen, $SecureRandom* random) {
	$DSAKeyPairGenerator::initialize(modlen, random);
}

DSAKeyPairGenerator$Current::DSAKeyPairGenerator$Current() {
}

$Class* DSAKeyPairGenerator$Current::load$($String* name, bool initialize) {
	$loadClass(DSAKeyPairGenerator$Current, name, initialize, &_DSAKeyPairGenerator$Current_ClassInfo_, allocate$DSAKeyPairGenerator$Current);
	return class$;
}

$Class* DSAKeyPairGenerator$Current::class$ = nullptr;

		} // provider
	} // security
} // sun