#include <java/security/spec/X509EncodedKeySpec.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

void X509EncodedKeySpec::init$($bytes* encodedKey) {
	$EncodedKeySpec::init$(encodedKey);
}

void X509EncodedKeySpec::init$($bytes* encodedKey, $String* algorithm) {
	$EncodedKeySpec::init$(encodedKey, algorithm);
}

$bytes* X509EncodedKeySpec::getEncoded() {
	return $EncodedKeySpec::getEncoded();
}

$String* X509EncodedKeySpec::getFormat() {
	return "X.509"_s;
}

X509EncodedKeySpec::X509EncodedKeySpec() {
}

$Class* X509EncodedKeySpec::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(X509EncodedKeySpec, init$, void, $bytes*)},
		{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(X509EncodedKeySpec, init$, void, $bytes*, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(X509EncodedKeySpec, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(X509EncodedKeySpec, getFormat, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.X509EncodedKeySpec",
		"java.security.spec.EncodedKeySpec",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(X509EncodedKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509EncodedKeySpec);
	});
	return class$;
}

$Class* X509EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java