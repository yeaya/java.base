#include <sun/security/provider/DSA$SHA3_224withDSA.h>
#include <java/security/MessageDigest.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $DSA = ::sun::security::provider::DSA;

namespace sun {
	namespace security {
		namespace provider {

void DSA$SHA3_224withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA3-224"_s)));
}

$String* DSA$SHA3_224withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA3_224withDSA::DSA$SHA3_224withDSA() {
}

$Class* DSA$SHA3_224withDSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA3_224withDSA, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA3_224withDSA, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$SHA3_224withDSA", "sun.security.provider.DSA", "SHA3_224withDSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$SHA3_224withDSA",
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
	$loadClass(DSA$SHA3_224withDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$SHA3_224withDSA);
	});
	return class$;
}

$Class* DSA$SHA3_224withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun