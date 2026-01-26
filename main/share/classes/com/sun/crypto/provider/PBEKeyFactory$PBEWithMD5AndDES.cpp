#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithMD5AndDES.h>

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

$MethodInfo _PBEKeyFactory$PBEWithMD5AndDES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithMD5AndDES, init$, void)},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithMD5AndDES_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithMD5AndDES", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithMD5AndDES_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithMD5AndDES",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithMD5AndDES_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithMD5AndDES_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithMD5AndDES($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithMD5AndDES));
}

void PBEKeyFactory$PBEWithMD5AndDES::init$() {
	$PBEKeyFactory::init$("PBEWithMD5AndDES"_s);
}

PBEKeyFactory$PBEWithMD5AndDES::PBEKeyFactory$PBEWithMD5AndDES() {
}

$Class* PBEKeyFactory$PBEWithMD5AndDES::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithMD5AndDES, name, initialize, &_PBEKeyFactory$PBEWithMD5AndDES_ClassInfo_, allocate$PBEKeyFactory$PBEWithMD5AndDES);
	return class$;
}

$Class* PBEKeyFactory$PBEWithMD5AndDES::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com