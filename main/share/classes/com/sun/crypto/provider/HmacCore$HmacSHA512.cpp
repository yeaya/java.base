#include <com/sun/crypto/provider/HmacCore$HmacSHA512.h>

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

$MethodInfo _HmacCore$HmacSHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HmacCore$HmacSHA512::*)()>(&HmacCore$HmacSHA512::init$)), "java.security.NoSuchAlgorithmException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.CloneNotSupportedException"},
	{}
};

$InnerClassInfo _HmacCore$HmacSHA512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.HmacCore$HmacSHA512", "com.sun.crypto.provider.HmacCore", "HmacSHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HmacCore$HmacSHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacCore$HmacSHA512",
	"com.sun.crypto.provider.HmacCore",
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_MethodInfo_,
	nullptr,
	nullptr,
	_HmacCore$HmacSHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.HmacCore"
};

$Object* allocate$HmacCore$HmacSHA512($Class* clazz) {
	return $of($alloc(HmacCore$HmacSHA512));
}

void HmacCore$HmacSHA512::init$() {
	$HmacCore::init$("SHA-512"_s, 128);
}

$Object* HmacCore$HmacSHA512::clone() {
	return $of($HmacCore::clone());
}

HmacCore$HmacSHA512::HmacCore$HmacSHA512() {
}

$Class* HmacCore$HmacSHA512::load$($String* name, bool initialize) {
	$loadClass(HmacCore$HmacSHA512, name, initialize, &_HmacCore$HmacSHA512_ClassInfo_, allocate$HmacCore$HmacSHA512);
	return class$;
}

$Class* HmacCore$HmacSHA512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com