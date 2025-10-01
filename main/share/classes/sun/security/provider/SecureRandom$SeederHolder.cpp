#include <sun/security/provider/SecureRandom$SeederHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/SecureRandom.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::sun::security::provider::SecureRandom;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SecureRandom$SeederHolder_FieldInfo_[] = {
	{"seeder", "Lsun/security/provider/SecureRandom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureRandom$SeederHolder, seeder)},
	{}
};

$MethodInfo _SecureRandom$SeederHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SecureRandom$SeederHolder::*)()>(&SecureRandom$SeederHolder::init$))},
	{}
};

$InnerClassInfo _SecureRandom$SeederHolder_InnerClassesInfo_[] = {
	{"sun.security.provider.SecureRandom$SeederHolder", "sun.security.provider.SecureRandom", "SeederHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SecureRandom$SeederHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SecureRandom$SeederHolder",
	"java.lang.Object",
	nullptr,
	_SecureRandom$SeederHolder_FieldInfo_,
	_SecureRandom$SeederHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SecureRandom$SeederHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SecureRandom"
};

$Object* allocate$SecureRandom$SeederHolder($Class* clazz) {
	return $of($alloc(SecureRandom$SeederHolder));
}

$SecureRandom* SecureRandom$SeederHolder::seeder = nullptr;

void SecureRandom$SeederHolder::init$() {
}

void clinit$SecureRandom$SeederHolder($Class* class$) {
	{
		$assignStatic(SecureRandom$SeederHolder::seeder, $new($SecureRandom, $($SeedGenerator::getSystemEntropy())));
		$var($bytes, b, $new($bytes, 20));
		$SeedGenerator::generateSeed(b);
		$nc(SecureRandom$SeederHolder::seeder)->engineSetSeed(b);
	}
}

SecureRandom$SeederHolder::SecureRandom$SeederHolder() {
}

$Class* SecureRandom$SeederHolder::load$($String* name, bool initialize) {
	$loadClass(SecureRandom$SeederHolder, name, initialize, &_SecureRandom$SeederHolder_ClassInfo_, clinit$SecureRandom$SeederHolder, allocate$SecureRandom$SeederHolder);
	return class$;
}

$Class* SecureRandom$SeederHolder::class$ = nullptr;

		} // provider
	} // security
} // sun