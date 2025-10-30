#include <java/security/spec/X509EncodedKeySpec.h>

#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace java {
	namespace security {
		namespace spec {

$MethodInfo _X509EncodedKeySpec_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(X509EncodedKeySpec::*)($bytes*)>(&X509EncodedKeySpec::init$))},
	{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(X509EncodedKeySpec::*)($bytes*,$String*)>(&X509EncodedKeySpec::init$))},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _X509EncodedKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.X509EncodedKeySpec",
	"java.security.spec.EncodedKeySpec",
	nullptr,
	nullptr,
	_X509EncodedKeySpec_MethodInfo_
};

$Object* allocate$X509EncodedKeySpec($Class* clazz) {
	return $of($alloc(X509EncodedKeySpec));
}

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
	$loadClass(X509EncodedKeySpec, name, initialize, &_X509EncodedKeySpec_ClassInfo_, allocate$X509EncodedKeySpec);
	return class$;
}

$Class* X509EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java