#include <com/sun/crypto/provider/HmacCore$HmacSHA3_256.h>

#include <com/sun/crypto/provider/HmacCore.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HmacCore = ::com::sun::crypto::provider::HmacCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _HmacCore$HmacSHA3_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HmacCore$HmacSHA3_256::*)()>(&HmacCore$HmacSHA3_256::init$)), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA3_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA3_256", "com.sun.crypto.provider.HmacCore", "HmacSHA3_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA3_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA3_256",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_256_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA3_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA3_256($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA3_256));
}

void HmacCore$HmacSHA3_256::init$() {
	$HmacCore::init$("SHA3-256"_s, 136);
}

$Object* HmacCore$HmacSHA3_256::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA3_256::HmacCore$HmacSHA3_256() {
}

$Class* HmacCore$HmacSHA3_256::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA3_256, name, initialize, &_HmacCore$HmacSHA3_256_ClassInfo_, allocate$HmacCore$HmacSHA3_256);
	return class$;
}

$Class* HmacCore$HmacSHA3_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com