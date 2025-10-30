#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA512.h>

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

$MethodInfo _PBKDF2Core$HmacSHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBKDF2Core$HmacSHA512::*)()>(&PBKDF2Core$HmacSHA512::init$))},
	{}
};

$InnerClassInfo _PBKDF2Core$HmacSHA512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA512", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core$HmacSHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA512",
	"com.sun.crypto.provider.PBKDF2Core",
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA512_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core"
};

$Object* allocate$PBKDF2Core$HmacSHA512($Class* clazz) {
	return $of($alloc(PBKDF2Core$HmacSHA512));
}

void PBKDF2Core$HmacSHA512::init$() {
	$PBKDF2Core::init$("HmacSHA512"_s);
}

PBKDF2Core$HmacSHA512::PBKDF2Core$HmacSHA512() {
}

$Class* PBKDF2Core$HmacSHA512::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core$HmacSHA512, name, initialize, &_PBKDF2Core$HmacSHA512_ClassInfo_, allocate$PBKDF2Core$HmacSHA512);
	return class$;
}

$Class* PBKDF2Core$HmacSHA512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com