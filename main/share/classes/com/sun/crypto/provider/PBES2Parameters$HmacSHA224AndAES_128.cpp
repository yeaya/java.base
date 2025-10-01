#include <com/sun/crypto/provider/PBES2Parameters$HmacSHA224AndAES_128.h>

#include <com/sun/crypto/provider/PBES2Parameters.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PBES2Parameters = ::com::sun::crypto::provider::PBES2Parameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBES2Parameters$HmacSHA224AndAES_128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBES2Parameters$HmacSHA224AndAES_128::*)()>(&PBES2Parameters$HmacSHA224AndAES_128::init$)), "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _PBES2Parameters$HmacSHA224AndAES_128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_128", "com.sun.crypto.provider.PBES2Parameters", "HmacSHA224AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Parameters$HmacSHA224AndAES_128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBES2Parameters$HmacSHA224AndAES_128",
	"com.sun.crypto.provider.PBES2Parameters",
	nullptr,
	nullptr,
	_PBES2Parameters$HmacSHA224AndAES_128_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Parameters$HmacSHA224AndAES_128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Parameters"
};

$Object* allocate$PBES2Parameters$HmacSHA224AndAES_128($Class* clazz) {
	return $of($alloc(PBES2Parameters$HmacSHA224AndAES_128));
}

void PBES2Parameters$HmacSHA224AndAES_128::init$() {
	$PBES2Parameters::init$("PBEWithHmacSHA224AndAES_128"_s);
}

PBES2Parameters$HmacSHA224AndAES_128::PBES2Parameters$HmacSHA224AndAES_128() {
}

$Class* PBES2Parameters$HmacSHA224AndAES_128::load$($String* name, bool initialize) {
	$loadClass(PBES2Parameters$HmacSHA224AndAES_128, name, initialize, &_PBES2Parameters$HmacSHA224AndAES_128_ClassInfo_, allocate$PBES2Parameters$HmacSHA224AndAES_128);
	return class$;
}

$Class* PBES2Parameters$HmacSHA224AndAES_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com