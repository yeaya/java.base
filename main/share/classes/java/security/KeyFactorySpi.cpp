#include <java/security/KeyFactorySpi.h>

#include <java/security/Key.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/KeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $KeySpec = ::java::security::spec::KeySpec;

namespace java {
	namespace security {

$MethodInfo _KeyFactorySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(KeyFactorySpi, init$, void)},
	{"engineGeneratePrivate", "(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyFactorySpi, engineGeneratePrivate, $PrivateKey*, $KeySpec*), "java.security.spec.InvalidKeySpecException"},
	{"engineGeneratePublic", "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyFactorySpi, engineGeneratePublic, $PublicKey*, $KeySpec*), "java.security.spec.InvalidKeySpecException"},
	{"engineGetKeySpec", "(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "<T::Ljava/security/spec/KeySpec;>(Ljava/security/Key;Ljava/lang/Class<TT;>;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(KeyFactorySpi, engineGetKeySpec, $KeySpec*, $Key*, $Class*), "java.security.spec.InvalidKeySpecException"},
	{"engineTranslateKey", "(Ljava/security/Key;)Ljava/security/Key;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyFactorySpi, engineTranslateKey, $Key*, $Key*), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _KeyFactorySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.KeyFactorySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyFactorySpi_MethodInfo_
};

$Object* allocate$KeyFactorySpi($Class* clazz) {
	return $of($alloc(KeyFactorySpi));
}

void KeyFactorySpi::init$() {
}

KeyFactorySpi::KeyFactorySpi() {
}

$Class* KeyFactorySpi::load$($String* name, bool initialize) {
	$loadClass(KeyFactorySpi, name, initialize, &_KeyFactorySpi_ClassInfo_, allocate$KeyFactorySpi);
	return class$;
}

$Class* KeyFactorySpi::class$ = nullptr;

	} // security
} // java