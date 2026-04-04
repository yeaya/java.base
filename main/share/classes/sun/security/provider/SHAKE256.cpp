#include <sun/security/provider/SHAKE256.h>
#include <sun/security/provider/DigestBase.h>
#include <sun/security/provider/SHA3.h>
#include <jcpp.h>

#undef SHAKE256

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA3 = ::sun::security::provider::SHA3;

namespace sun {
	namespace security {
		namespace provider {

void SHAKE256::init$(int32_t d) {
	$SHA3::init$("SHAKE256"_s, d, (int8_t)31, 64);
}

void SHAKE256::update(int8_t in) {
	engineUpdate(in);
}

void SHAKE256::update($bytes* in, int32_t off, int32_t len) {
	engineUpdate(in, off, len);
}

$bytes* SHAKE256::digest() {
	return engineDigest();
}

void SHAKE256::reset() {
	engineReset();
}

$Object* SHAKE256::clone() {
	return $SHA3::clone();
}

SHAKE256::SHAKE256() {
}

$Class* SHAKE256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(SHAKE256, init$, void, int32_t)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHAKE256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"digest", "()[B", nullptr, $PUBLIC, $method(SHAKE256, digest, $bytes*)},
		{"reset", "()V", nullptr, $PUBLIC, $method(SHAKE256, reset, void)},
		{"update", "(B)V", nullptr, $PUBLIC, $method(SHAKE256, update, void, int8_t)},
		{"update", "([BII)V", nullptr, $PUBLIC, $method(SHAKE256, update, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHAKE256",
		"sun.security.provider.SHA3",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SHAKE256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHAKE256));
	});
	return class$;
}

$Class* SHAKE256::class$ = nullptr;

		} // provider
	} // security
} // sun