#include <sun/security/provider/DSA$SHA512withDSA.h>
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

void DSA$SHA512withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-512"_s)));
}

$String* DSA$SHA512withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA512withDSA::DSA$SHA512withDSA() {
}

$Class* DSA$SHA512withDSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA512withDSA, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA512withDSA, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$SHA512withDSA", "sun.security.provider.DSA", "SHA512withDSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$SHA512withDSA",
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
	$loadClass(DSA$SHA512withDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$SHA512withDSA);
	});
	return class$;
}

$Class* DSA$SHA512withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun