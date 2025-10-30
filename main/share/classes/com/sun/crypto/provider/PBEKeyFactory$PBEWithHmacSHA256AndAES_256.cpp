#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithHmacSHA256AndAES_256.h>

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

$MethodInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeyFactory$PBEWithHmacSHA256AndAES_256::*)()>(&PBEKeyFactory$PBEWithHmacSHA256AndAES_256::init$))},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_256", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA256AndAES_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_256",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA256AndAES_256_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA256AndAES_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithHmacSHA256AndAES_256($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithHmacSHA256AndAES_256));
}

void PBEKeyFactory$PBEWithHmacSHA256AndAES_256::init$() {
	$PBEKeyFactory::init$("PBEWithHmacSHA256AndAES_256"_s);
}

PBEKeyFactory$PBEWithHmacSHA256AndAES_256::PBEKeyFactory$PBEWithHmacSHA256AndAES_256() {
}

$Class* PBEKeyFactory$PBEWithHmacSHA256AndAES_256::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithHmacSHA256AndAES_256, name, initialize, &_PBEKeyFactory$PBEWithHmacSHA256AndAES_256_ClassInfo_, allocate$PBEKeyFactory$PBEWithHmacSHA256AndAES_256);
	return class$;
}

$Class* PBEKeyFactory$PBEWithHmacSHA256AndAES_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com