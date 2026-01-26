#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA512.h>

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

$MethodInfo _KeyGeneratorCore$HmacKG$SHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorCore$HmacKG$SHA512, init$, void)},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA512_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA512_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA512",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA512_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA512($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA512));
}

void KeyGeneratorCore$HmacKG$SHA512::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA512"_s, 512);
}

KeyGeneratorCore$HmacKG$SHA512::KeyGeneratorCore$HmacKG$SHA512() {
}

$Class* KeyGeneratorCore$HmacKG$SHA512::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA512, name, initialize, &_KeyGeneratorCore$HmacKG$SHA512_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA512);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA512::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com