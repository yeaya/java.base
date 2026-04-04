#include <com/sun/crypto/provider/HmacMD5.h>
#include <com/sun/crypto/provider/HmacCore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void HmacMD5::init$() {
	$HmacCore::init$("MD5"_s, 64);
}

$Object* HmacMD5::clone() {
	return $HmacCore::clone();
}

HmacMD5::HmacMD5() {
}

$Class* HmacMD5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacMD5, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacMD5, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacMD5",
		"com.sun.crypto.provider.HmacCore",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HmacMD5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacMD5));
	});
	return class$;
}

$Class* HmacMD5::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com