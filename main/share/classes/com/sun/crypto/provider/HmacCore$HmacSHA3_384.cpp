#include <com/sun/crypto/provider/HmacCore$HmacSHA3_384.h>
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

void HmacCore$HmacSHA3_384::init$() {
	$HmacCore::init$("SHA3-384"_s, 104);
}

$Object* HmacCore$HmacSHA3_384::clone() {
	return $HmacCore::clone();
}

HmacCore$HmacSHA3_384::HmacCore$HmacSHA3_384() {
}

$Class* HmacCore$HmacSHA3_384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA3_384, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA3_384, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacCore$HmacSHA3_384", "com.sun.crypto.provider.HmacCore", "HmacSHA3_384", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacCore$HmacSHA3_384",
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
	$loadClass(HmacCore$HmacSHA3_384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacCore$HmacSHA3_384));
	});
	return class$;
}

$Class* HmacCore$HmacSHA3_384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com