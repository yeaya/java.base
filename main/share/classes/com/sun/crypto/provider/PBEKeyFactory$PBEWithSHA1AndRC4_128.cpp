#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndRC4_128.h>

#include <com/sun/crypto/provider/PBEKeyFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PBEKeyFactory = ::com::sun::crypto::provider::PBEKeyFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBEKeyFactory$PBEWithSHA1AndRC4_128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeyFactory$PBEWithSHA1AndRC4_128::*)()>(&PBEKeyFactory$PBEWithSHA1AndRC4_128::init$))},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithSHA1AndRC4_128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_128", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC4_128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithSHA1AndRC4_128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_128",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC4_128_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC4_128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithSHA1AndRC4_128($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithSHA1AndRC4_128));
}

void PBEKeyFactory$PBEWithSHA1AndRC4_128::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndRC4_128"_s);
}

PBEKeyFactory$PBEWithSHA1AndRC4_128::PBEKeyFactory$PBEWithSHA1AndRC4_128() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_128::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithSHA1AndRC4_128, name, initialize, &_PBEKeyFactory$PBEWithSHA1AndRC4_128_ClassInfo_, allocate$PBEKeyFactory$PBEWithSHA1AndRC4_128);
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com