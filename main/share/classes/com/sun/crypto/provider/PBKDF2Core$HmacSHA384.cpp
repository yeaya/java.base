#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA384.h>

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

$MethodInfo _PBKDF2Core$HmacSHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBKDF2Core$HmacSHA384::*)()>(&PBKDF2Core$HmacSHA384::init$))},
	{}
};

$InnerClassInfo _PBKDF2Core$HmacSHA384_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA384", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core$HmacSHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA384",
	"com.sun.crypto.provider.PBKDF2Core",
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA384_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core"
};

$Object* allocate$PBKDF2Core$HmacSHA384($Class* clazz) {
	return $of($alloc(PBKDF2Core$HmacSHA384));
}

void PBKDF2Core$HmacSHA384::init$() {
	$PBKDF2Core::init$("HmacSHA384"_s);
}

PBKDF2Core$HmacSHA384::PBKDF2Core$HmacSHA384() {
}

$Class* PBKDF2Core$HmacSHA384::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core$HmacSHA384, name, initialize, &_PBKDF2Core$HmacSHA384_ClassInfo_, allocate$PBKDF2Core$HmacSHA384);
	return class$;
}

$Class* PBKDF2Core$HmacSHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com