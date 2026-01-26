#include <com/sun/crypto/provider/HmacCore$HmacSHA224.h>

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

$MethodInfo _HmacCore$HmacSHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacCore$HmacSHA224, init$, void), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(HmacCore$HmacSHA224, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA224", "com.sun.crypto.provider.HmacCore", "HmacSHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA224",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA224_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA224($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA224));
}

void HmacCore$HmacSHA224::init$() {
	$HmacCore::init$("SHA-224"_s, 64);
}

$Object* HmacCore$HmacSHA224::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA224::HmacCore$HmacSHA224() {
}

$Class* HmacCore$HmacSHA224::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA224, name, initialize, &_HmacCore$HmacSHA224_ClassInfo_, allocate$HmacCore$HmacSHA224);
	return class$;
}

$Class* HmacCore$HmacSHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com