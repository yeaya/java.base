#include <sun/security/provider/DSA$SHA1withDSA.h>
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

void DSA$SHA1withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-1"_s)));
}

$String* DSA$SHA1withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA1withDSA::DSA$SHA1withDSA() {
}

$Class* DSA$SHA1withDSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA1withDSA, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA1withDSA, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$SHA1withDSA", "sun.security.provider.DSA", "SHA1withDSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$SHA1withDSA",
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
	$loadClass(DSA$SHA1withDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$SHA1withDSA);
	});
	return class$;
}

$Class* DSA$SHA1withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun