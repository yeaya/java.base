#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA256.h>
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

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA256::init$() {
	$HmacPKCS12PBECore::init$("SHA-256"_s, 64);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA256::clone() {
	return $HmacPKCS12PBECore::clone();
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA256::HmacPKCS12PBECore$HmacPKCS12PBE_SHA256() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA256, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA256", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA256",
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
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA256));
	});
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com