#include <com/sun/crypto/provider/PBMAC1Core$HmacSHA384.h>
#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/PBMAC1Core.h>
#include <jcpp.h>

using $PBMAC1Core = ::com::sun::crypto::provider::PBMAC1Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBMAC1Core$HmacSHA384::init$() {
	$PBMAC1Core::init$("HmacSHA384"_s, "SHA-384"_s, 128);
}

$Object* PBMAC1Core$HmacSHA384::clone() {
	return $PBMAC1Core::clone();
}

PBMAC1Core$HmacSHA384::PBMAC1Core$HmacSHA384() {
}

$Class* PBMAC1Core$HmacSHA384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBMAC1Core$HmacSHA384, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PBMAC1Core$HmacSHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBMAC1Core$HmacSHA384", "com.sun.crypto.provider.PBMAC1Core", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBMAC1Core$HmacSHA384",
		"com.sun.crypto.provider.PBMAC1Core",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBMAC1Core"
	};
	$loadClass(PBMAC1Core$HmacSHA384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBMAC1Core$HmacSHA384));
	});
	return class$;
}

$Class* PBMAC1Core$HmacSHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com