#include <com/sun/crypto/provider/TlsPrfGenerator$V10.h>
#include <com/sun/crypto/provider/TlsPrfGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $TlsPrfGenerator = ::com::sun::crypto::provider::TlsPrfGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void TlsPrfGenerator$V10::init$() {
	$TlsPrfGenerator::init$();
}

$SecretKey* TlsPrfGenerator$V10::engineGenerateKey() {
	return engineGenerateKey0(false);
}

TlsPrfGenerator$V10::TlsPrfGenerator$V10() {
}

$Class* TlsPrfGenerator$V10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TlsPrfGenerator$V10, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(TlsPrfGenerator$V10, engineGenerateKey, $SecretKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.TlsPrfGenerator$V10", "com.sun.crypto.provider.TlsPrfGenerator", "V10", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.crypto.provider.TlsPrfGenerator$V10",
		"com.sun.crypto.provider.TlsPrfGenerator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.TlsPrfGenerator"
	};
	$loadClass(TlsPrfGenerator$V10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TlsPrfGenerator$V10);
	});
	return class$;
}

$Class* TlsPrfGenerator$V10::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com