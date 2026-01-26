#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndRC2_40.h>

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

$MethodInfo _PBEKeyFactory$PBEWithSHA1AndRC2_40_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithSHA1AndRC2_40, init$, void)},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithSHA1AndRC2_40_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_40", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC2_40", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithSHA1AndRC2_40_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC2_40",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC2_40_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndRC2_40_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithSHA1AndRC2_40($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithSHA1AndRC2_40));
}

void PBEKeyFactory$PBEWithSHA1AndRC2_40::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndRC2_40"_s);
}

PBEKeyFactory$PBEWithSHA1AndRC2_40::PBEKeyFactory$PBEWithSHA1AndRC2_40() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC2_40::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithSHA1AndRC2_40, name, initialize, &_PBEKeyFactory$PBEWithSHA1AndRC2_40_ClassInfo_, allocate$PBEKeyFactory$PBEWithSHA1AndRC2_40);
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC2_40::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com