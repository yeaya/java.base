#include <com/sun/crypto/provider/PBMAC1Core$HmacSHA512.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/PBMAC1Core.h>
#include <jcpp.h>

using $PBMAC1Core = ::com::sun::crypto::provider::PBMAC1Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBMAC1Core$HmacSHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBMAC1Core$HmacSHA512::*)()>(&PBMAC1Core$HmacSHA512::init$)), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _PBMAC1Core$HmacSHA512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBMAC1Core$HmacSHA512", "com.sun.crypto.provider.PBMAC1Core", "HmacSHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBMAC1Core$HmacSHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBMAC1Core$HmacSHA512",
	"com.sun.crypto.provider.PBMAC1Core",
	nullptr,
	nullptr,
	_PBMAC1Core$HmacSHA512_MethodInfo_,
	nullptr,
	nullptr,
	_PBMAC1Core$HmacSHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBMAC1Core"
};

$Object* allocate$PBMAC1Core$HmacSHA512($Class* clazz) {
	return $of($alloc(PBMAC1Core$HmacSHA512));
}

void PBMAC1Core$HmacSHA512::init$() {
	$PBMAC1Core::init$("HmacSHA512"_s, "SHA-512"_s, 128);
}

$Object* PBMAC1Core$HmacSHA512::clone() {
	return $of($PBMAC1Core::clone());
}

PBMAC1Core$HmacSHA512::PBMAC1Core$HmacSHA512() {
}

$Class* PBMAC1Core$HmacSHA512::load$($String* name, bool initialize) {
	$loadClass(PBMAC1Core$HmacSHA512, name, initialize, &_PBMAC1Core$HmacSHA512_ClassInfo_, allocate$PBMAC1Core$HmacSHA512);
	return class$;
}

$Class* PBMAC1Core$HmacSHA512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com