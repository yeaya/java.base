#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA256.h>

#include <com/sun/crypto/provider/PBKDF2Core.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PBKDF2Core = ::com::sun::crypto::provider::PBKDF2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBKDF2Core$HmacSHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBKDF2Core$HmacSHA256::*)()>(&PBKDF2Core$HmacSHA256::init$))},
	{}
};

$InnerClassInfo _PBKDF2Core$HmacSHA256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA256", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core$HmacSHA256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA256",
	"com.sun.crypto.provider.PBKDF2Core",
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA256_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core"
};

$Object* allocate$PBKDF2Core$HmacSHA256($Class* clazz) {
	return $of($alloc(PBKDF2Core$HmacSHA256));
}

void PBKDF2Core$HmacSHA256::init$() {
	$PBKDF2Core::init$("HmacSHA256"_s);
}

PBKDF2Core$HmacSHA256::PBKDF2Core$HmacSHA256() {
}

$Class* PBKDF2Core$HmacSHA256::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core$HmacSHA256, name, initialize, &_PBKDF2Core$HmacSHA256_ClassInfo_, allocate$PBKDF2Core$HmacSHA256);
	return class$;
}

$Class* PBKDF2Core$HmacSHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com