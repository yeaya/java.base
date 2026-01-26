#include <com/sun/crypto/provider/HmacCore$HmacSHA256.h>

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

$MethodInfo _HmacCore$HmacSHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA256, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA256", "com.sun.crypto.provider.HmacCore", "HmacSHA256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA256",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA256_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA256($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA256));
}

void HmacCore$HmacSHA256::init$() {
	$HmacCore::init$("SHA-256"_s, 64);
}

$Object* HmacCore$HmacSHA256::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA256::HmacCore$HmacSHA256() {
}

$Class* HmacCore$HmacSHA256::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA256, name, initialize, &_HmacCore$HmacSHA256_ClassInfo_, allocate$HmacCore$HmacSHA256);
	return class$;
}

$Class* HmacCore$HmacSHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com