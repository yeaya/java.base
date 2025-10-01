#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA224.h>

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

$MethodInfo _KeyGeneratorCore$HmacKG$SHA224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA224::*)()>(&KeyGeneratorCore$HmacKG$SHA224::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA224", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA224",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA224_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA224($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA224));
}

void KeyGeneratorCore$HmacKG$SHA224::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA224"_s, 224);
}

KeyGeneratorCore$HmacKG$SHA224::KeyGeneratorCore$HmacKG$SHA224() {
}

$Class* KeyGeneratorCore$HmacKG$SHA224::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA224, name, initialize, &_KeyGeneratorCore$HmacKG$SHA224_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA224);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com