#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256.h>
#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/HmacPKCS12PBECore.h>
#include <jcpp.h>

using $HmacPKCS12PBECore = ::com::sun::crypto::provider::HmacPKCS12PBECore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::init$() {
	$HmacPKCS12PBECore::init$("SHA-512/256"_s, 128);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::clone() {
	return $HmacPKCS12PBECore::clone();
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512_256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256",
		"com.sun.crypto.provider.HmacPKCS12PBECore",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.HmacPKCS12PBECore"
	};
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256));
	});
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com