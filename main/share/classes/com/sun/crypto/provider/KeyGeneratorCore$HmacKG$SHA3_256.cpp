#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA3_256.h>

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

$MethodInfo _KeyGeneratorCore$HmacKG$SHA3_256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA3_256::*)()>(&KeyGeneratorCore$HmacKG$SHA3_256::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA3_256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_256", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA3_256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA3_256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA3_256",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_256_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA3_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA3_256($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA3_256));
}

void KeyGeneratorCore$HmacKG$SHA3_256::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA3-256"_s, 256);
}

KeyGeneratorCore$HmacKG$SHA3_256::KeyGeneratorCore$HmacKG$SHA3_256() {
}

$Class* KeyGeneratorCore$HmacKG$SHA3_256::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA3_256, name, initialize, &_KeyGeneratorCore$HmacKG$SHA3_256_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA3_256);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA3_256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com