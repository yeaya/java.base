#include <com/sun/crypto/provider/SunJCE$SecureRandomHolder.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/security/SecureRandom.h>
#include <jcpp.h>

#undef RANDOM

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _SunJCE$SecureRandomHolder_FieldInfo_[] = {
	{"RANDOM", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(SunJCE$SecureRandomHolder, RANDOM)},
	{}
};

$MethodInfo _SunJCE$SecureRandomHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunJCE$SecureRandomHolder::*)()>(&SunJCE$SecureRandomHolder::init$))},
	{}
};

$InnerClassInfo _SunJCE$SecureRandomHolder_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.SunJCE$SecureRandomHolder", "com.sun.crypto.provider.SunJCE", "SecureRandomHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunJCE$SecureRandomHolder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.SunJCE$SecureRandomHolder",
	"java.lang.Object",
	nullptr,
	_SunJCE$SecureRandomHolder_FieldInfo_,
	_SunJCE$SecureRandomHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SunJCE$SecureRandomHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.SunJCE"
};

$Object* allocate$SunJCE$SecureRandomHolder($Class* clazz) {
	return $of($alloc(SunJCE$SecureRandomHolder));
}

$SecureRandom* SunJCE$SecureRandomHolder::RANDOM = nullptr;

void SunJCE$SecureRandomHolder::init$() {
}

void clinit$SunJCE$SecureRandomHolder($Class* class$) {
	$assignStatic(SunJCE$SecureRandomHolder::RANDOM, $new($SecureRandom));
}

SunJCE$SecureRandomHolder::SunJCE$SecureRandomHolder() {
}

$Class* SunJCE$SecureRandomHolder::load$($String* name, bool initialize) {
	$loadClass(SunJCE$SecureRandomHolder, name, initialize, &_SunJCE$SecureRandomHolder_ClassInfo_, clinit$SunJCE$SecureRandomHolder, allocate$SunJCE$SecureRandomHolder);
	return class$;
}

$Class* SunJCE$SecureRandomHolder::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com