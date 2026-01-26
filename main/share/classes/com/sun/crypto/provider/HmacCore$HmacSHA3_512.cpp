#include <com/sun/crypto/provider/HmacCore$HmacSHA3_512.h>

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

$MethodInfo _HmacCore$HmacSHA3_512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA3_512, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA3_512, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA3_512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA3_512", "com.sun.crypto.provider.HmacCore", "HmacSHA3_512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA3_512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA3_512",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_512_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA3_512($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA3_512));
}

void HmacCore$HmacSHA3_512::init$() {
	$HmacCore::init$("SHA3-512"_s, 72);
}

$Object* HmacCore$HmacSHA3_512::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA3_512::HmacCore$HmacSHA3_512() {
}

$Class* HmacCore$HmacSHA3_512::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA3_512, name, initialize, &_HmacCore$HmacSHA3_512_ClassInfo_, allocate$HmacCore$HmacSHA3_512);
	return class$;
}

$Class* HmacCore$HmacSHA3_512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com