#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA3_512.h>
#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG.h>
#include <jcpp.h>

using $KeyGeneratorCore$HmacKG = ::com::sun::crypto::provider::KeyGeneratorCore$HmacKG;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void KeyGeneratorCore$HmacKG$SHA3_512::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA3-512"_s, 512);
}

KeyGeneratorCore$HmacKG$SHA3_512::KeyGeneratorCore$HmacKG$SHA3_512() {
}

$Class* KeyGeneratorCore$HmacKG$SHA3_512::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorCore$HmacKG$SHA3_512, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
		{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_512", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512",
		"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.KeyGeneratorCore"
	};
	$loadClass(KeyGeneratorCore$HmacKG$SHA3_512, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyGeneratorCore$HmacKG$SHA3_512);
	});
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA3_512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com