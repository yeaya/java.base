#include <com/sun/crypto/provider/HmacSHA1.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _HmacSHA1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacSHA1, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacSHA1, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$ClassInfo _HmacSHA1_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacSHA1",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacSHA1_MethodInfo_
};

$Object* allocate$HmacSHA1($Class* clazz) {
	return $of($alloc(HmacSHA1));
}

void HmacSHA1::init$() {
	$HmacCore::init$("SHA1"_s, 64);
}

$Object* HmacSHA1::clone() {
	return $of($HmacCore::clone());
}

HmacSHA1::HmacSHA1() {
}

$Class* HmacSHA1::load$($String* name, bool initialize) {
	$loadClass(HmacSHA1, name, initialize, &_HmacSHA1_ClassInfo_, allocate$HmacSHA1);
	return class$;
}

$Class* HmacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com