#include <com/sun/crypto/provider/PBES2Parameters$HmacSHA512AndAES_128.h>
#include <com/sun/crypto/provider/PBES2Parameters.h>
#include <jcpp.h>

using $PBES2Parameters = ::com::sun::crypto::provider::PBES2Parameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBES2Parameters$HmacSHA512AndAES_128::init$() {
	$PBES2Parameters::init$("PBEWithHmacSHA512AndAES_128"_s);
}

PBES2Parameters$HmacSHA512AndAES_128::PBES2Parameters$HmacSHA512AndAES_128() {
}

$Class* PBES2Parameters$HmacSHA512AndAES_128::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBES2Parameters$HmacSHA512AndAES_128, init$, void), "java.security.NoSuchAlgorithmException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA512AndAES_128", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBES2Parameters$HmacSHA512AndAES_128",
		"com.sun.crypto.provider.PBES2Parameters",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBES2Parameters"
	};
	$loadClass(PBES2Parameters$HmacSHA512AndAES_128, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBES2Parameters$HmacSHA512AndAES_128);
	});
	return class$;
}

$Class* PBES2Parameters$HmacSHA512AndAES_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com