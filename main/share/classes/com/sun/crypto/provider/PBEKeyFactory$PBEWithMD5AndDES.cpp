#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndDES.h>
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

void PBEKeyFactory$PBEWithMD5AndDES::init$() {
	$PBEKeyFactory::init$("PBEWithMD5AndDES"_s);
}

PBEKeyFactory$PBEWithMD5AndDES::PBEKeyFactory$PBEWithMD5AndDES() {
}

$Class* PBEKeyFactory$PBEWithMD5AndDES::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithMD5AndDES, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndDES", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES",
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
	$loadClass(PBEKeyFactory$PBEWithMD5AndDES, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKeyFactory$PBEWithMD5AndDES);
	});
	return class$;
}

$Class* PBEKeyFactory$PBEWithMD5AndDES::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com