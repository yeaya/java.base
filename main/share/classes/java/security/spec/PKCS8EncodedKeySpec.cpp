#include <java/security/spec/PKCS8EncodedKeySpec.h>

#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

$MethodInfo _PKCS8EncodedKeySpec_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(PKCS8EncodedKeySpec, init$, void, $bytes*)},
	{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(PKCS8EncodedKeySpec, init$, void, $bytes*, $String*)},
	{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(PKCS8EncodedKeySpec, getEncoded, $bytes*)},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PKCS8EncodedKeySpec, getFormat, $String*)},
	{}
};

$ClassInfo _PKCS8EncodedKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.PKCS8EncodedKeySpec",
	"java.security.spec.EncodedKeySpec",
	nullptr,
	nullptr,
	_PKCS8EncodedKeySpec_MethodInfo_
};

$Object* allocate$PKCS8EncodedKeySpec($Class* clazz) {
	return $of($alloc(PKCS8EncodedKeySpec));
}

void PKCS8EncodedKeySpec::init$($bytes* encodedKey) {
	$EncodedKeySpec::init$(encodedKey);
}

void PKCS8EncodedKeySpec::init$($bytes* encodedKey, $String* algorithm) {
	$EncodedKeySpec::init$(encodedKey, algorithm);
}

$bytes* PKCS8EncodedKeySpec::getEncoded() {
	return $EncodedKeySpec::getEncoded();
}

$String* PKCS8EncodedKeySpec::getFormat() {
	return "PKCS#8"_s;
}

PKCS8EncodedKeySpec::PKCS8EncodedKeySpec() {
}

$Class* PKCS8EncodedKeySpec::load$($String* name, bool initialize) {
	$loadClass(PKCS8EncodedKeySpec, name, initialize, &_PKCS8EncodedKeySpec_ClassInfo_, allocate$PKCS8EncodedKeySpec);
	return class$;
}

$Class* PKCS8EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java