#include <com/sun/crypto/provider/HmacCore$HmacSHA3_384.h>

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

$MethodInfo _HmacCore$HmacSHA3_384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA3_384, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA3_384, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA3_384_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA3_384", "com.sun.crypto.provider.HmacCore", "HmacSHA3_384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA3_384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA3_384",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_384_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA3_384($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA3_384));
}

void HmacCore$HmacSHA3_384::init$() {
	$HmacCore::init$("SHA3-384"_s, 104);
}

$Object* HmacCore$HmacSHA3_384::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA3_384::HmacCore$HmacSHA3_384() {
}

$Class* HmacCore$HmacSHA3_384::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA3_384, name, initialize, &_HmacCore$HmacSHA3_384_ClassInfo_, allocate$HmacCore$HmacSHA3_384);
	return class$;
}

$Class* HmacCore$HmacSHA3_384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com