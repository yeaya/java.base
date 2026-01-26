#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA384.h>

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

$MethodInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacPKCS12PBECore$HmacPKCS12PBE_SHA384, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacPKCS12PBECore$HmacPKCS12PBE_SHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA384", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA384",
	"com.sun.crypto.provider.HmacPKCS12PBECore",
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_MethodInfo_,
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacPKCS12PBECore"
};

$Object* allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA384($Class* clazz) {
	return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA384));
}

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA384::init$() {
	$HmacPKCS12PBECore::init$("SHA-384"_s, 128);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA384::clone() {
	return $of($HmacPKCS12PBECore::clone());
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA384::HmacPKCS12PBECore$HmacPKCS12PBE_SHA384() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA384::load$($String* name, bool initialize) {
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA384, name, initialize, &_HmacPKCS12PBECore$HmacPKCS12PBE_SHA384_ClassInfo_, allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA384);
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com