#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndTripleDES.h>
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

void PBEKeyFactory$PBEWithMD5AndTripleDES::init$() {
	$PBEKeyFactory::init$("PBEWithMD5AndTripleDES"_s);
}

PBEKeyFactory$PBEWithMD5AndTripleDES::PBEKeyFactory$PBEWithMD5AndTripleDES() {
}

$Class* PBEKeyFactory$PBEWithMD5AndTripleDES::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithMD5AndTripleDES, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndTripleDES", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES",
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
	$loadClass(PBEKeyFactory$PBEWithMD5AndTripleDES, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKeyFactory$PBEWithMD5AndTripleDES);
	});
	return class$;
}

$Class* PBEKeyFactory$PBEWithMD5AndTripleDES::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com