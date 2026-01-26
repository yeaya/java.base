#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA512.h>

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

$MethodInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512",
	"com.sun.crypto.provider.HmacPKCS12PBECore",
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_MethodInfo_,
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacPKCS12PBECore"
};

$Object* allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA512($Class* clazz) {
	return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512));
}

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA512::init$() {
	$HmacPKCS12PBECore::init$("SHA-512"_s, 128);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512::clone() {
	return $of($HmacPKCS12PBECore::clone());
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA512::HmacPKCS12PBECore$HmacPKCS12PBE_SHA512() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512::load$($String* name, bool initialize) {
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512, name, initialize, &_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_ClassInfo_, allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA512);
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com