#include <javax/crypto/SecretKeyFactorySpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/KeySpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeySpec = ::java::security::spec::KeySpec;
using $SecretKey = ::javax::crypto::SecretKey;

namespace javax {
	namespace crypto {

$MethodInfo _SecretKeyFactorySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecretKeyFactorySpi::*)()>(&SecretKeyFactorySpi::init$))},
	{"engineGenerateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PROTECTED | $ABSTRACT, nullptr, "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _SecretKeyFactorySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.SecretKeyFactorySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SecretKeyFactorySpi_MethodInfo_
};

$Object* allocate$SecretKeyFactorySpi($Class* clazz) {
	return $of($alloc(SecretKeyFactorySpi));
}

void SecretKeyFactorySpi::init$() {
}

SecretKeyFactorySpi::SecretKeyFactorySpi() {
}

$Class* SecretKeyFactorySpi::load$($String* name, bool initialize) {
	$loadClass(SecretKeyFactorySpi, name, initialize, &_SecretKeyFactorySpi_ClassInfo_, allocate$SecretKeyFactorySpi);
	return class$;
}

$Class* SecretKeyFactorySpi::class$ = nullptr;

	} // crypto
} // javax