#include <com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA224.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <com/sun/crypto/provider/HmacPKCS12PBECore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $HmacPKCS12PBECore = ::com::sun::crypto::provider::HmacPKCS12PBECore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::*)()>(&HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::init$)), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA224", "com.sun.crypto.provider.HmacPKCS12PBECore", "HmacPKCS12PBE_SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA224",
	"com.sun.crypto.provider.HmacPKCS12PBECore",
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_MethodInfo_,
	nullptr,
	nullptr,
	_HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacPKCS12PBECore"
};

$Object* allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA224($Class* clazz) {
	return $of($alloc(HmacPKCS12PBECore$HmacPKCS12PBE_SHA224));
}

void HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::init$() {
	$HmacPKCS12PBECore::init$("SHA-224"_s, 64);
}

$Object* HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::clone() {
	return $of($HmacPKCS12PBECore::clone());
}

HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::HmacPKCS12PBECore$HmacPKCS12PBE_SHA224() {
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::load$($String* name, bool initialize) {
	$loadClass(HmacPKCS12PBECore$HmacPKCS12PBE_SHA224, name, initialize, &_HmacPKCS12PBECore$HmacPKCS12PBE_SHA224_ClassInfo_, allocate$HmacPKCS12PBECore$HmacPKCS12PBE_SHA224);
	return class$;
}

$Class* HmacPKCS12PBECore$HmacPKCS12PBE_SHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com