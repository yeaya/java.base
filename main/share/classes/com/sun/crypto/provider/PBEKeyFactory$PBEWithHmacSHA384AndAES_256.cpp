#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithHmacSHA384AndAES_256.h>

#include <com/sun/crypto/provider/PBEKeyFactory.h>
#include <jcpp.h>

using $PBEKeyFactory = ::com::sun::crypto::provider::PBEKeyFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBEKeyFactory$PBEWithHmacSHA384AndAES_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithHmacSHA384AndAES_256, init$, void)},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithHmacSHA384AndAES_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA384AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithHmacSHA384AndAES_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA384AndAES_256",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA384AndAES_256_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA384AndAES_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithHmacSHA384AndAES_256($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithHmacSHA384AndAES_256));
}

void PBEKeyFactory$PBEWithHmacSHA384AndAES_256::init$() {
	$PBEKeyFactory::init$("PBEWithHmacSHA384AndAES_256"_s);
}

PBEKeyFactory$PBEWithHmacSHA384AndAES_256::PBEKeyFactory$PBEWithHmacSHA384AndAES_256() {
}

$Class* PBEKeyFactory$PBEWithHmacSHA384AndAES_256::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithHmacSHA384AndAES_256, name, initialize, &_PBEKeyFactory$PBEWithHmacSHA384AndAES_256_ClassInfo_, allocate$PBEKeyFactory$PBEWithHmacSHA384AndAES_256);
	return class$;
}

$Class* PBEKeyFactory$PBEWithHmacSHA384AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com