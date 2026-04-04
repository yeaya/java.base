#include <com/sun/crypto/provider/HmacCore$HmacSHA256.h>
#include <com/sun/crypto/provider/HmacCore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void HmacCore$HmacSHA256::init$() {
	$HmacCore::init$("SHA-256"_s, 64);
}

$Object* HmacCore$HmacSHA256::clone() {
	return $HmacCore::clone();
}

HmacCore$HmacSHA256::HmacCore$HmacSHA256() {
}

$Class* HmacCore$HmacSHA256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA256, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacCore$HmacSHA256", "com.sun.crypto.provider.HmacCore", "HmacSHA256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacCore$HmacSHA256",
		"com.sun.crypto.provider.HmacCore",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.HmacCore"
	};
	$loadClass(HmacCore$HmacSHA256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacCore$HmacSHA256));
	});
	return class$;
}

$Class* HmacCore$HmacSHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com