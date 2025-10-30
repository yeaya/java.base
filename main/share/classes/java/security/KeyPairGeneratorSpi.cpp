#include <java/security/KeyPairGeneratorSpi.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/KeyPair.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $KeyPair = ::java::security::KeyPair;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {

$MethodInfo _KeyPairGeneratorSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyPairGeneratorSpi::*)()>(&KeyPairGeneratorSpi::init$))},
	{"generateKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC | $ABSTRACT},
	{"initialize", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _KeyPairGeneratorSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.KeyPairGeneratorSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyPairGeneratorSpi_MethodInfo_
};

$Object* allocate$KeyPairGeneratorSpi($Class* clazz) {
	return $of($alloc(KeyPairGeneratorSpi));
}

void KeyPairGeneratorSpi::init$() {
}

void KeyPairGeneratorSpi::initialize($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($UnsupportedOperationException);
}

KeyPairGeneratorSpi::KeyPairGeneratorSpi() {
}

$Class* KeyPairGeneratorSpi::load$($String* name, bool initialize) {
	$loadClass(KeyPairGeneratorSpi, name, initialize, &_KeyPairGeneratorSpi_ClassInfo_, allocate$KeyPairGeneratorSpi);
	return class$;
}

$Class* KeyPairGeneratorSpi::class$ = nullptr;

	} // security
} // java