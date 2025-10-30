#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithHmacSHA256AndAES_128.h>

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

$MethodInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeyFactory$PBEWithHmacSHA256AndAES_128::*)()>(&PBEKeyFactory$PBEWithHmacSHA256AndAES_128::init$))},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithHmacSHA256AndAES_128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithHmacSHA256AndAES_128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithHmacSHA256AndAES_128",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA256AndAES_128_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithHmacSHA256AndAES_128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithHmacSHA256AndAES_128($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithHmacSHA256AndAES_128));
}

void PBEKeyFactory$PBEWithHmacSHA256AndAES_128::init$() {
	$PBEKeyFactory::init$("PBEWithHmacSHA256AndAES_128"_s);
}

PBEKeyFactory$PBEWithHmacSHA256AndAES_128::PBEKeyFactory$PBEWithHmacSHA256AndAES_128() {
}

$Class* PBEKeyFactory$PBEWithHmacSHA256AndAES_128::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithHmacSHA256AndAES_128, name, initialize, &_PBEKeyFactory$PBEWithHmacSHA256AndAES_128_ClassInfo_, allocate$PBEKeyFactory$PBEWithHmacSHA256AndAES_128);
	return class$;
}

$Class* PBEKeyFactory$PBEWithHmacSHA256AndAES_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com