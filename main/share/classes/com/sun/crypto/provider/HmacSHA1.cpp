#include <com/sun/crypto/provider/HmacSHA1.h>
#include <com/sun/crypto/provider/HmacCore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void HmacSHA1::init$() {
	$HmacCore::init$("SHA1"_s, 64);
}

$Object* HmacSHA1::clone() {
	return $HmacCore::clone();
}

HmacSHA1::HmacSHA1() {
}

$Class* HmacSHA1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacSHA1, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacSHA1, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacSHA1",
		"com.sun.crypto.provider.HmacCore",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HmacSHA1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacSHA1));
	});
	return class$;
}

$Class* HmacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com