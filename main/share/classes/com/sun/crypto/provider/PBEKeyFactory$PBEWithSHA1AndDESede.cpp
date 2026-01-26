#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndDESede.h>

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

$MethodInfo _PBEKeyFactory$PBEWithSHA1AndDESede_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithSHA1AndDESede, init$, void)},
	{}
};

$InnerClassInfo _PBEKeyFactory$PBEWithSHA1AndDESede_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndDESede", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBEKeyFactory$PBEWithSHA1AndDESede_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede",
	"com.sun.crypto.provider.PBEKeyFactory",
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndDESede_MethodInfo_,
	nullptr,
	nullptr,
	_PBEKeyFactory$PBEWithSHA1AndDESede_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBEKeyFactory"
};

$Object* allocate$PBEKeyFactory$PBEWithSHA1AndDESede($Class* clazz) {
	return $of($alloc(PBEKeyFactory$PBEWithSHA1AndDESede));
}

void PBEKeyFactory$PBEWithSHA1AndDESede::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndDESede"_s);
}

PBEKeyFactory$PBEWithSHA1AndDESede::PBEKeyFactory$PBEWithSHA1AndDESede() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndDESede::load$($String* name, bool initialize) {
	$loadClass(PBEKeyFactory$PBEWithSHA1AndDESede, name, initialize, &_PBEKeyFactory$PBEWithSHA1AndDESede_ClassInfo_, allocate$PBEKeyFactory$PBEWithSHA1AndDESede);
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndDESede::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com