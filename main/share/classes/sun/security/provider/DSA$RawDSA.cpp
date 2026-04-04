#include <sun/security/provider/DSA$RawDSA.h>
#include <sun/security/provider/DSA$Raw.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DSA$Raw = ::sun::security::provider::DSA$Raw;

namespace sun {
	namespace security {
		namespace provider {

void DSA$RawDSA::init$() {
	$DSA$Raw::init$(false);
}

$String* DSA$RawDSA::toString() {
	return $DSA$Raw::toString();
}

DSA$RawDSA::DSA$RawDSA() {
}

$Class* DSA$RawDSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$RawDSA, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$RawDSA, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$RawDSA", "sun.security.provider.DSA", "RawDSA", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$RawDSA",
		"sun.security.provider.DSA$Raw",
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
	$loadClass(DSA$RawDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$RawDSA);
	});
	return class$;
}

$Class* DSA$RawDSA::class$ = nullptr;

		} // provider
	} // security
} // sun