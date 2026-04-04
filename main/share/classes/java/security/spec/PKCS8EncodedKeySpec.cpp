#include <java/security/spec/PKCS8EncodedKeySpec.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(PKCS8EncodedKeySpec, init$, void, $bytes*)},
		{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(PKCS8EncodedKeySpec, init$, void, $bytes*, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(PKCS8EncodedKeySpec, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PKCS8EncodedKeySpec, getFormat, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.PKCS8EncodedKeySpec",
		"java.security.spec.EncodedKeySpec",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PKCS8EncodedKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS8EncodedKeySpec);
	});
	return class$;
}

$Class* PKCS8EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java