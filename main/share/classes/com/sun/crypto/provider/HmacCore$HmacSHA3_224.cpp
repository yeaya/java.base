#include <com/sun/crypto/provider/HmacCore$HmacSHA3_224.h>
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

void HmacCore$HmacSHA3_224::init$() {
	$HmacCore::init$("SHA3-224"_s, 144);
}

$Object* HmacCore$HmacSHA3_224::clone() {
	return $HmacCore::clone();
}

HmacCore$HmacSHA3_224::HmacCore$HmacSHA3_224() {
}

$Class* HmacCore$HmacSHA3_224::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA3_224, init$, void), "java.security.NoSuchAlgorithmException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA3_224, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.HmacCore$HmacSHA3_224", "com.sun.crypto.provider.HmacCore", "HmacSHA3_224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.HmacCore$HmacSHA3_224",
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
	$loadClass(HmacCore$HmacSHA3_224, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HmacCore$HmacSHA3_224));
	});
	return class$;
}

$Class* HmacCore$HmacSHA3_224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com