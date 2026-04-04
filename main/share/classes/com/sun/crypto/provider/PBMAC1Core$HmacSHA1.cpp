#include <com/sun/crypto/provider/PBMAC1Core$HmacSHA1.h>
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

void PBMAC1Core$HmacSHA1::init$() {
	$PBMAC1Core::init$("HmacSHA1"_s, "SHA1"_s, 64);
}

$Object* PBMAC1Core$HmacSHA1::clone() {
	return $PBMAC1Core::clone();
}

PBMAC1Core$HmacSHA1::PBMAC1Core$HmacSHA1() {
}

$Class* PBMAC1Core$HmacSHA1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBMAC1Core$HmacSHA1, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PBMAC1Core$HmacSHA1, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBMAC1Core$HmacSHA1", "com.sun.crypto.provider.PBMAC1Core", "HmacSHA1", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBMAC1Core$HmacSHA1",
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
	$loadClass(PBMAC1Core$HmacSHA1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBMAC1Core$HmacSHA1));
	});
	return class$;
}

$Class* PBMAC1Core$HmacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com