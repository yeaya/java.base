#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA3_512.h>

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

$MethodInfo _KeyGeneratorCore$HmacKG$SHA3_512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA3_512::*)()>(&KeyGeneratorCore$HmacKG$SHA3_512::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA3_512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA3_512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_512",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_512_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA3_512($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA3_512));
}

void KeyGeneratorCore$HmacKG$SHA3_512::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA3-512"_s, 512);
}

KeyGeneratorCore$HmacKG$SHA3_512::KeyGeneratorCore$HmacKG$SHA3_512() {
}

$Class* KeyGeneratorCore$HmacKG$SHA3_512::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA3_512, name, initialize, &_KeyGeneratorCore$HmacKG$SHA3_512_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA3_512);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA3_512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com