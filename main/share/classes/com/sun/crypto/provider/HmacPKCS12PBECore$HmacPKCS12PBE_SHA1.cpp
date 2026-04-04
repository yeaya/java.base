#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA1.h>
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

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA1::init$() {
	$HmacPKCS12PBECore::init$("SHA1"_s, 64);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA1::clone() {
	return $HmacPKCS12PBECore::clone();
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA1::HmacPKCS12PBECore$HmacPKCS12PBE_SHA1() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA1, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA1, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA1", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA1", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA1",
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
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA1));
	});
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com