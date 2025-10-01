#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA256.h>

#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $KeyGeneratorCore$HmacKG = ::com::sun::crypto::provider::KeyGeneratorCore$HmacKG;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _KeyGeneratorCore$HmacKG$SHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA256::*)()>(&KeyGeneratorCore$HmacKG$SHA256::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA256", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA256",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA256_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA256($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA256));
}

void KeyGeneratorCore$HmacKG$SHA256::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA256"_s, 256);
}

KeyGeneratorCore$HmacKG$SHA256::KeyGeneratorCore$HmacKG$SHA256() {
}

$Class* KeyGeneratorCore$HmacKG$SHA256::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA256, name, initialize, &_KeyGeneratorCore$HmacKG$SHA256_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA256);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com