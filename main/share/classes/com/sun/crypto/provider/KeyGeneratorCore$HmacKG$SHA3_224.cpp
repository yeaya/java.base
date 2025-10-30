#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA3_224.h>

#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG.h>
#include <jcpp.h>

using $KeyGeneratorCore$HmacKG = ::com::sun::crypto::provider::KeyGeneratorCore$HmacKG;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _KeyGeneratorCore$HmacKG$SHA3_224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA3_224::*)()>(&KeyGeneratorCore$HmacKG$SHA3_224::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA3_224_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_224", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA3_224_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_224",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_224_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA3_224($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA3_224));
}

void KeyGeneratorCore$HmacKG$SHA3_224::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA3-224"_s, 224);
}

KeyGeneratorCore$HmacKG$SHA3_224::KeyGeneratorCore$HmacKG$SHA3_224() {
}

$Class* KeyGeneratorCore$HmacKG$SHA3_224::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA3_224, name, initialize, &_KeyGeneratorCore$HmacKG$SHA3_224_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA3_224);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA3_224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com