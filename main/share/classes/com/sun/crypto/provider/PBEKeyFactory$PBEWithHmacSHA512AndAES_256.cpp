#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithHmacSHA512AndAES_256.h>
#include <com/sun/crypto/provider/PBEKeyFactory.h>
#include <jcpp.h>

using $PBEKeyFactory = ::com::sun::crypto::provider::PBEKeyFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBEKeyFactory$PBEWithHmacSHA512AndAES_256::init$() {
	$PBEKeyFactory::init$("PBEWithHmacSHA512AndAES_256"_s);
}

PBEKeyFactory$PBEWithHmacSHA512AndAES_256::PBEKeyFactory$PBEWithHmacSHA512AndAES_256() {
}

$Class* PBEKeyFactory$PBEWithHmacSHA512AndAES_256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithHmacSHA512AndAES_256, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA512AndAES_256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA512AndAES_256",
		"com.sun.crypto.provider.PBEKeyFactory",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBEKeyFactory"
	};
	$loadClass(PBEKeyFactory$PBEWithHmacSHA512AndAES_256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKeyFactory$PBEWithHmacSHA512AndAES_256);
	});
	return class$;
}

$Class* PBEKeyFactory$PBEWithHmacSHA512AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com