#include <com/sun/crypto/provider/HmacCore$HmacSHA384.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _HmacCore$HmacSHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA384, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA384_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA384", "com.sun.crypto.provider.HmacCore", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA384",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA384_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA384($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA384));
}

void HmacCore$HmacSHA384::init$() {
	$HmacCore::init$("SHA-384"_s, 128);
}

$Object* HmacCore$HmacSHA384::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA384::HmacCore$HmacSHA384() {
}

$Class* HmacCore$HmacSHA384::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA384, name, initialize, &_HmacCore$HmacSHA384_ClassInfo_, allocate$HmacCore$HmacSHA384);
	return class$;
}

$Class* HmacCore$HmacSHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com