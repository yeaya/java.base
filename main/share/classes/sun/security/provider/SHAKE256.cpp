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

$MethodInfo _SHAKE256_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SHAKE256::*)(int32_t)>(&SHAKE256::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"digest", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(SHAKE256::*)()>(&SHAKE256::digest))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHAKE256::*)()>(&SHAKE256::reset))},
	{"update", "(B)V", nullptr, $PUBLIC, $method(static_cast<void(SHAKE256::*)(int8_t)>(&SHAKE256::update))},
	{"update", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(SHAKE256::*)($bytes*,int32_t,int32_t)>(&SHAKE256::update))},
	{}
};

$ClassInfo _SHAKE256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHAKE256",
	"sun.security.provider.SHA3",
	nullptr,
	nullptr,
	_SHAKE256_MethodInfo_
};

$Object* allocate$SHAKE256($Class* clazz) {
	return $of($alloc(SHAKE256));
}

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
	return $of($SHA3::clone());
}

SHAKE256::SHAKE256() {
}

$Class* SHAKE256::load$($String* name, bool initialize) {
	$loadClass(SHAKE256, name, initialize, &_SHAKE256_ClassInfo_, allocate$SHAKE256);
	return class$;
}

$Class* SHAKE256::class$ = nullptr;

		} // provider
	} // security
} // sun