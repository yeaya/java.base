#include <sun/security/provider/SecureRandom$SeederHolder.h>
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

$SecureRandom* SecureRandom$SeederHolder::seeder = nullptr;

void SecureRandom$SeederHolder::init$() {
}

void SecureRandom$SeederHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$assignStatic(SecureRandom$SeederHolder::seeder, $new($SecureRandom, $($SeedGenerator::getSystemEntropy())));
		$var($bytes, b, $new($bytes, 20));
		$SeedGenerator::generateSeed(b);
		SecureRandom$SeederHolder::seeder->engineSetSeed(b);
	}
}

SecureRandom$SeederHolder::SecureRandom$SeederHolder() {
}

$Class* SecureRandom$SeederHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"seeder", "Lsun/security/provider/SecureRandom;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureRandom$SeederHolder, seeder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SecureRandom$SeederHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SecureRandom$SeederHolder", "sun.security.provider.SecureRandom", "SeederHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SecureRandom$SeederHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SecureRandom"
	};
	$loadClass(SecureRandom$SeederHolder, name, initialize, &classInfo$$, SecureRandom$SeederHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecureRandom$SeederHolder);
	});
	return class$;
}

$Class* SecureRandom$SeederHolder::class$ = nullptr;

		} // provider
	} // security
} // sun