#include <com/sun/crypto/provider/PBES2Core$HmacSHA256AndAES_128.h>

#include <com/sun/crypto/provider/PBES2Core.h>
#include <jcpp.h>

using $PBES2Core = ::com::sun::crypto::provider::PBES2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBES2Core$HmacSHA256AndAES_128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBES2Core$HmacSHA256AndAES_128::*)()>(&PBES2Core$HmacSHA256AndAES_128::init$)), "java.security.NoSuchAlgorithmException,javax.crypto.NoSuchPaddingException"},
	{}
};

$InnerClassInfo _PBES2Core$HmacSHA256AndAES_128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Core$HmacSHA256AndAES_128", "com.sun.crypto.provider.PBES2Core", "HmacSHA256AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Core$HmacSHA256AndAES_128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBES2Core$HmacSHA256AndAES_128",
	"com.sun.crypto.provider.PBES2Core",
	nullptr,
	nullptr,
	_PBES2Core$HmacSHA256AndAES_128_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Core$HmacSHA256AndAES_128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Core"
};

$Object* allocate$PBES2Core$HmacSHA256AndAES_128($Class* clazz) {
	return $of($alloc(PBES2Core$HmacSHA256AndAES_128));
}

void PBES2Core$HmacSHA256AndAES_128::init$() {
	$PBES2Core::init$("HmacSHA256"_s, "AES"_s, 16);
}

PBES2Core$HmacSHA256AndAES_128::PBES2Core$HmacSHA256AndAES_128() {
}

$Class* PBES2Core$HmacSHA256AndAES_128::load$($String* name, bool initialize) {
	$loadClass(PBES2Core$HmacSHA256AndAES_128, name, initialize, &_PBES2Core$HmacSHA256AndAES_128_ClassInfo_, allocate$PBES2Core$HmacSHA256AndAES_128);
	return class$;
}

$Class* PBES2Core$HmacSHA256AndAES_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com