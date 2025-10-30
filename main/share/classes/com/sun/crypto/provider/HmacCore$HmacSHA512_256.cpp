#include <com/sun/crypto/provider/HmacCore$HmacSHA512_256.h>

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

$MethodInfo _HmacCore$HmacSHA512_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HmacCore$HmacSHA512_256::*)()>(&HmacCore$HmacSHA512_256::init$)), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA512_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA512_256", "com.sun.crypto.provider.HmacCore", "HmacSHA512_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA512_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA512_256",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_256_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA512_256($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA512_256));
}

void HmacCore$HmacSHA512_256::init$() {
	$HmacCore::init$("SHA-512/256"_s, 128);
}

$Object* HmacCore$HmacSHA512_256::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA512_256::HmacCore$HmacSHA512_256() {
}

$Class* HmacCore$HmacSHA512_256::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA512_256, name, initialize, &_HmacCore$HmacSHA512_256_ClassInfo_, allocate$HmacCore$HmacSHA512_256);
	return class$;
}

$Class* HmacCore$HmacSHA512_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com