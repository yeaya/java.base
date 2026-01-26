#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA224.h>

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

$MethodInfo _PBKDF2Core$HmacSHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBKDF2Core$HmacSHA224, init$, void)},
	{}
};

$InnerClassInfo _PBKDF2Core$HmacSHA224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBKDF2Core$HmacSHA224", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBKDF2Core$HmacSHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBKDF2Core$HmacSHA224",
	"com.sun.crypto.provider.PBKDF2Core",
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA224_MethodInfo_,
	nullptr,
	nullptr,
	_PBKDF2Core$HmacSHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBKDF2Core"
};

$Object* allocate$PBKDF2Core$HmacSHA224($Class* clazz) {
	return $of($alloc(PBKDF2Core$HmacSHA224));
}

void PBKDF2Core$HmacSHA224::init$() {
	$PBKDF2Core::init$("HmacSHA224"_s);
}

PBKDF2Core$HmacSHA224::PBKDF2Core$HmacSHA224() {
}

$Class* PBKDF2Core$HmacSHA224::load$($String* name, bool initialize) {
	$loadClass(PBKDF2Core$HmacSHA224, name, initialize, &_PBKDF2Core$HmacSHA224_ClassInfo_, allocate$PBKDF2Core$HmacSHA224);
	return class$;
}

$Class* PBKDF2Core$HmacSHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com