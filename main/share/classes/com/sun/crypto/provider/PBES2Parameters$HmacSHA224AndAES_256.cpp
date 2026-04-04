#include <com/sun/crypto/provider/PBES2Parameters$HmacSHA224AndAES_256.h>
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

void PBES2Parameters$HmacSHA224AndAES_256::init$() {
	$PBES2Parameters::init$("PBEWithHmacSHA224AndAES_256"_s);
}

PBES2Parameters$HmacSHA224AndAES_256::PBES2Parameters$HmacSHA224AndAES_256() {
}

$Class* PBES2Parameters$HmacSHA224AndAES_256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBES2Parameters$HmacSHA224AndAES_256, init$, void), "java.security.NoSuchAlgorithmException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA224AndAES_256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_256",
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
	$loadClass(PBES2Parameters$HmacSHA224AndAES_256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBES2Parameters$HmacSHA224AndAES_256);
	});
	return class$;
}

$Class* PBES2Parameters$HmacSHA224AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com