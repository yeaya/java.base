#include <sun/security/provider/DSA$SHA256withDSA.h>
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

void DSA$SHA256withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-256"_s)));
}

$String* DSA$SHA256withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA256withDSA::DSA$SHA256withDSA() {
}

$Class* DSA$SHA256withDSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA256withDSA, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA256withDSA, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$SHA256withDSA", "sun.security.provider.DSA", "SHA256withDSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$SHA256withDSA",
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
	$loadClass(DSA$SHA256withDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$SHA256withDSA);
	});
	return class$;
}

$Class* DSA$SHA256withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun