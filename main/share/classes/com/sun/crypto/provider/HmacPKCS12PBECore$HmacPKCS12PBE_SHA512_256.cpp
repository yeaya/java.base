#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/HmacPKCS12PBECore.h>
#include <jcpp.h>

using $HmacPKCS12PBECore = ::com::sun::crypto::provider::HmacPKCS12PBECore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256",
	"com.sun.crypto.provider.HmacPKCS12PBECore",
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_MethodInfo_,
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacPKCS12PBECore"
};

$Object* allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256($Class* clazz) {
	return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256));
}

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::init$() {
	$HmacPKCS12PBECore::init$("SHA-512/256"_s, 128);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::clone() {
	return $of($HmacPKCS12PBECore::clone());
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::load$($String* name, bool initialize) {
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256, name, initialize, &_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256_ClassInfo_, allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256);
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com