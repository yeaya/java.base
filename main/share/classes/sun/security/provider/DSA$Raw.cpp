#include <sun/security/provider/DSA$Raw.h>
#include <sun/security/provider/DSA$Raw$NullDigest20.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DSA = ::sun::security::provider::DSA;
using $DSA$Raw$NullDigest20 = ::sun::security::provider::DSA$Raw$NullDigest20;

namespace sun {
	namespace security {
		namespace provider {

void DSA$Raw::init$(bool p1363Format) {
	$DSA::init$($$new($DSA$Raw$NullDigest20), p1363Format);
}

DSA$Raw::DSA$Raw() {
}

$Class* DSA$Raw::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PRIVATE, $method(DSA$Raw, init$, void, bool), "java.security.NoSuchAlgorithmException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
		{"sun.security.provider.DSA$Raw$NullDigest20", "sun.security.provider.DSA$Raw", "NullDigest20", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.DSA$Raw",
		"sun.security.provider.DSA",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.DSA"
	};
	$loadClass(DSA$Raw, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$Raw);
	});
	return class$;
}

$Class* DSA$Raw::class$ = nullptr;

		} // provider
	} // security
} // sun