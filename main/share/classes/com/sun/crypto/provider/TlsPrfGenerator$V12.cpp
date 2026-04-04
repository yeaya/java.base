#include <com/sun/crypto/provider/TlsPrfGenerator$V12.h>
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

void TlsPrfGenerator$V12::init$() {
	$TlsPrfGenerator::init$();
}

$SecretKey* TlsPrfGenerator$V12::engineGenerateKey() {
	return engineGenerateKey0(true);
}

TlsPrfGenerator$V12::TlsPrfGenerator$V12() {
}

$Class* TlsPrfGenerator$V12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TlsPrfGenerator$V12, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(TlsPrfGenerator$V12, engineGenerateKey, $SecretKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.TlsPrfGenerator$V12", "com.sun.crypto.provider.TlsPrfGenerator", "V12", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.crypto.provider.TlsPrfGenerator$V12",
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
	$loadClass(TlsPrfGenerator$V12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TlsPrfGenerator$V12);
	});
	return class$;
}

$Class* TlsPrfGenerator$V12::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com