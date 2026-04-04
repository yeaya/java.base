#include <com/sun/crypto/provider/HmacCore$HmacSHA384.h>
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

void HmacCore$HmacSHA384::init$() {
	$HmacCore::init$("SHA-384"_s, 128);
}

$Object* HmacCore$HmacSHA384::clone() {
	return $HmacCore::clone();
}

HmacCore$HmacSHA384::HmacCore$HmacSHA384() {
}

$Class* HmacCore$HmacSHA384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA384, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacCore$HmacSHA384", "com.sun.crypto.provider.HmacCore", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacCore$HmacSHA384",
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
	$loadClass(HmacCore$HmacSHA384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacCore$HmacSHA384));
	});
	return class$;
}

$Class* HmacCore$HmacSHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com