#include <com/sun/crypto/provider/HmacCore$HmacSHA512_224.h>

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

$MethodInfo _HmacCore$HmacSHA512_224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA512_224, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA512_224, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA512_224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA512_224", "com.sun.crypto.provider.HmacCore", "HmacSHA512_224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA512_224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA512_224",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_224_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA512_224($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA512_224));
}

void HmacCore$HmacSHA512_224::init$() {
	$HmacCore::init$("SHA-512/224"_s, 128);
}

$Object* HmacCore$HmacSHA512_224::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA512_224::HmacCore$HmacSHA512_224() {
}

$Class* HmacCore$HmacSHA512_224::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA512_224, name, initialize, &_HmacCore$HmacSHA512_224_ClassInfo_, allocate$HmacCore$HmacSHA512_224);
	return class$;
}

$Class* HmacCore$HmacSHA512_224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com