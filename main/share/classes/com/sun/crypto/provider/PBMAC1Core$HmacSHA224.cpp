#include <com/sun/crypto/provider/PBMAC1Core$HmacSHA224.h>
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

void PBMAC1Core$HmacSHA224::init$() {
	$PBMAC1Core::init$("HmacSHA224"_s, "SHA-224"_s, 64);
}

$Object* PBMAC1Core$HmacSHA224::clone() {
	return $PBMAC1Core::clone();
}

PBMAC1Core$HmacSHA224::PBMAC1Core$HmacSHA224() {
}

$Class* PBMAC1Core$HmacSHA224::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBMAC1Core$HmacSHA224, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PBMAC1Core$HmacSHA224, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBMAC1Core$HmacSHA224", "com.sun.crypto.provider.PBMAC1Core", "HmacSHA224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBMAC1Core$HmacSHA224",
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
	$loadClass(PBMAC1Core$HmacSHA224, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBMAC1Core$HmacSHA224));
	});
	return class$;
}

$Class* PBMAC1Core$HmacSHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com