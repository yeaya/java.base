#include <com/sun/crypto/provider/PBES2Parameters$HmacSHA384AndAES_256.h>

#include <com/sun/crypto/provider/PBES2Parameters.h>
#include <jcpp.h>

using $PBES2Parameters = ::com::sun::crypto::provider::PBES2Parameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBES2Parameters$HmacSHA384AndAES_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBES2Parameters$HmacSHA384AndAES_256, init$, void), "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _PBES2Parameters$HmacSHA384AndAES_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_256", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA384AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Parameters$HmacSHA384AndAES_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBES2Parameters$HmacSHA384AndAES_256",
	"com.sun.crypto.provider.PBES2Parameters",
	nullptr,
	nullptr,
	_PBES2Parameters$HmacSHA384AndAES_256_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Parameters$HmacSHA384AndAES_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Parameters"
};

$Object* allocate$PBES2Parameters$HmacSHA384AndAES_256($Class* clazz) {
	return $of($alloc(PBES2Parameters$HmacSHA384AndAES_256));
}

void PBES2Parameters$HmacSHA384AndAES_256::init$() {
	$PBES2Parameters::init$("PBEWithHmacSHA384AndAES_256"_s);
}

PBES2Parameters$HmacSHA384AndAES_256::PBES2Parameters$HmacSHA384AndAES_256() {
}

$Class* PBES2Parameters$HmacSHA384AndAES_256::load$($String* name, bool initialize) {
	$loadClass(PBES2Parameters$HmacSHA384AndAES_256, name, initialize, &_PBES2Parameters$HmacSHA384AndAES_256_ClassInfo_, allocate$PBES2Parameters$HmacSHA384AndAES_256);
	return class$;
}

$Class* PBES2Parameters$HmacSHA384AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com