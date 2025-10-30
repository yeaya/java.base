#include <com/sun/crypto/provider/KeyGeneratorCore$HmacKG$SHA384.h>

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

$MethodInfo _KeyGeneratorCore$HmacKG$SHA384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyGeneratorCore$HmacKG$SHA384::*)()>(&KeyGeneratorCore$HmacKG$SHA384::init$))},
	{}
};

$InnerClassInfo _KeyGeneratorCore$HmacKG$SHA384_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "com.sun.crypto.provider.KeyGeneratorCore", "HmacKG", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA384", "com.sun.crypto.provider.KeyGeneratorCore$HmacKG", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyGeneratorCore$HmacKG$SHA384_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG$SHA384",
	"com.sun.crypto.provider.KeyGeneratorCore$HmacKG",
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA384_MethodInfo_,
	nullptr,
	nullptr,
	_KeyGeneratorCore$HmacKG$SHA384_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyGeneratorCore"
};

$Object* allocate$KeyGeneratorCore$HmacKG$SHA384($Class* clazz) {
	return $of($alloc(KeyGeneratorCore$HmacKG$SHA384));
}

void KeyGeneratorCore$HmacKG$SHA384::init$() {
	$KeyGeneratorCore$HmacKG::init$("HmacSHA384"_s, 384);
}

KeyGeneratorCore$HmacKG$SHA384::KeyGeneratorCore$HmacKG$SHA384() {
}

$Class* KeyGeneratorCore$HmacKG$SHA384::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorCore$HmacKG$SHA384, name, initialize, &_KeyGeneratorCore$HmacKG$SHA384_ClassInfo_, allocate$KeyGeneratorCore$HmacKG$SHA384);
	return class$;
}

$Class* KeyGeneratorCore$HmacKG$SHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com