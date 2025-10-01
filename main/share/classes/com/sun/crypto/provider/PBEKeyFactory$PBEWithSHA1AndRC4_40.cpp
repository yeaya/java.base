#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndRC4_40.h>

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

$MethodInfo _PBEKeyFactory$PBEWithSHA1AndRC4_40_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeyFactory$PBEWithSHA1AndRC4_40::*)()>(&PBEKeyFactory$PBEWithSHA1AndRC4_40::init$))},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithSHA1AndRC4_40_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC4_40", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithSHA1AndRC4_40_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC4_40_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC4_40_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithSHA1AndRC4_40($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithSHA1AndRC4_40));
}

void PBEKeyFactory$PBEWithSHA1AndRC4_40::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndRC4_40"_s);
}

PBEKeyFactory$PBEWithSHA1AndRC4_40::PBEKeyFactory$PBEWithSHA1AndRC4_40() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_40::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithSHA1AndRC4_40, name, initialize, &_PBEKeyFactory$PBEWithSHA1AndRC4_40_ClassInfo_, allocate$PBEKeyFactory$PBEWithSHA1AndRC4_40);
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_40::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com