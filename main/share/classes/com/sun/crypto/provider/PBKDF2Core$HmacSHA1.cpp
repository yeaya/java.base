#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA1.h>

#include <com/sun/crypto/provider/PBKDF2Core.h>
#include <jcpp.h>

using $PBKDF2Core = ::com::sun::crypto::provider::PBKDF2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBKDF2Core$HmacSHA1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBKDF2Core$HmacSHA1::*)()>(&PBKDF2Core$HmacSHA1::init$))},
	{}
};

$InnerClassInfo _PBKDF2Core$HmacSHA1_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA1", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA1", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core$HmacSHA1_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA1",
	"com.sun.crypto.provider.PBKDF2Core",
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA1_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core"
};

$Object* allocate$PBKDF2Core$HmacSHA1($Class* clazz) {
	return $of($alloc(PBKDF2Core$HmacSHA1));
}

void PBKDF2Core$HmacSHA1::init$() {
	$PBKDF2Core::init$("HmacSHA1"_s);
}

PBKDF2Core$HmacSHA1::PBKDF2Core$HmacSHA1() {
}

$Class* PBKDF2Core$HmacSHA1::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core$HmacSHA1, name, initialize, &_PBKDF2Core$HmacSHA1_ClassInfo_, allocate$PBKDF2Core$HmacSHA1);
	return class$;
}

$Class* PBKDF2Core$HmacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com