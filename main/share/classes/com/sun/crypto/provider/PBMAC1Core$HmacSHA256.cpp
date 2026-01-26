#include <com/sun/crypto/provider/PBMAC1Core$HmacSHA256.h>

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

$MethodInfo _PBMAC1Core$HmacSHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBMAC1Core$HmacSHA256, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PBMAC1Core$HmacSHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _PBMAC1Core$HmacSHA256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBMAC1Core$HmacSHA256", "com.sun.crypto.provider.PBMAC1Core", "HmacSHA256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBMAC1Core$HmacSHA256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBMAC1Core$HmacSHA256",
	"com.sun.crypto.provider.PBMAC1Core",
	nullptr,
	nullptr,
	_PBMAC1Core$HmacSHA256_MethodInfo_,
	nullptr,
	nullptr,
	_PBMAC1Core$HmacSHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBMAC1Core"
};

$Object* allocate$PBMAC1Core$HmacSHA256($Class* clazz) {
	return $of($alloc(PBMAC1Core$HmacSHA256));
}

void PBMAC1Core$HmacSHA256::init$() {
	$PBMAC1Core::init$("HmacSHA256"_s, "SHA-256"_s, 64);
}

$Object* PBMAC1Core$HmacSHA256::clone() {
	return $of($PBMAC1Core::clone());
}

PBMAC1Core$HmacSHA256::PBMAC1Core$HmacSHA256() {
}

$Class* PBMAC1Core$HmacSHA256::load$($String* name, bool initialize) {
	$loadClass(PBMAC1Core$HmacSHA256, name, initialize, &_PBMAC1Core$HmacSHA256_ClassInfo_, allocate$PBMAC1Core$HmacSHA256);
	return class$;
}

$Class* PBMAC1Core$HmacSHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com