#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndTripleDES.h>

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

$MethodInfo _PBEKeyFactory$PBEWithMD5AndTripleDES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeyFactory$PBEWithMD5AndTripleDES::*)()>(&PBEKeyFactory$PBEWithMD5AndTripleDES::init$))},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithMD5AndTripleDES_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndTripleDES", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithMD5AndTripleDES_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndTripleDES",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithMD5AndTripleDES_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithMD5AndTripleDES_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithMD5AndTripleDES($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithMD5AndTripleDES));
}

void PBEKeyFactory$PBEWithMD5AndTripleDES::init$() {
	$PBEKeyFactory::init$("PBEWithMD5AndTripleDES"_s);
}

PBEKeyFactory$PBEWithMD5AndTripleDES::PBEKeyFactory$PBEWithMD5AndTripleDES() {
}

$Class* PBEKeyFactory$PBEWithMD5AndTripleDES::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithMD5AndTripleDES, name, initialize, &_PBEKeyFactory$PBEWithMD5AndTripleDES_ClassInfo_, allocate$PBEKeyFactory$PBEWithMD5AndTripleDES);
	return class$;
}

$Class* PBEKeyFactory$PBEWithMD5AndTripleDES::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com