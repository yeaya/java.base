#include <com/sun/crypto/provider/PBES2Core$HmacSHA1AndAES_256.h>

#include <com/sun/crypto/provider/PBES2Core.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PBES2Core = ::com::sun::crypto::provider::PBES2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBES2Core$HmacSHA1AndAES_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBES2Core$HmacSHA1AndAES_256::*)()>(&PBES2Core$HmacSHA1AndAES_256::init$)), "java.security.NoSuchAlgorithmException,javax.crypto.NoSuchPaddingException"},
	{}
};

$InnerClassInfo _PBES2Core$HmacSHA1AndAES_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Core$HmacSHA1AndAES_256", "com.sun.crypto.provider.PBES2Core", "HmacSHA1AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Core$HmacSHA1AndAES_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBES2Core$HmacSHA1AndAES_256",
	"com.sun.crypto.provider.PBES2Core",
	nullptr,
	nullptr,
	_PBES2Core$HmacSHA1AndAES_256_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Core$HmacSHA1AndAES_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Core"
};

$Object* allocate$PBES2Core$HmacSHA1AndAES_256($Class* clazz) {
	return $of($alloc(PBES2Core$HmacSHA1AndAES_256));
}

void PBES2Core$HmacSHA1AndAES_256::init$() {
	$PBES2Core::init$("HmacSHA1"_s, "AES"_s, 32);
}

PBES2Core$HmacSHA1AndAES_256::PBES2Core$HmacSHA1AndAES_256() {
}

$Class* PBES2Core$HmacSHA1AndAES_256::load$($String* name, bool initialize) {
	$loadClass(PBES2Core$HmacSHA1AndAES_256, name, initialize, &_PBES2Core$HmacSHA1AndAES_256_ClassInfo_, allocate$PBES2Core$HmacSHA1AndAES_256);
	return class$;
}

$Class* PBES2Core$HmacSHA1AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com