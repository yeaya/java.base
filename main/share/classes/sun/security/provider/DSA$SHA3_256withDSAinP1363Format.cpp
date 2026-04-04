#include <sun/security/provider/DSA$SHA3_256withDSAinP1363Format.h>
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

void DSA$SHA3_256withDSAinP1363Format::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA3-256"_s)), true);
}

$String* DSA$SHA3_256withDSAinP1363Format::toString() {
	return $DSA::toString();
}

DSA$SHA3_256withDSAinP1363Format::DSA$SHA3_256withDSAinP1363Format() {
}

$Class* DSA$SHA3_256withDSAinP1363Format::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA3_256withDSAinP1363Format, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA3_256withDSAinP1363Format, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$SHA3_256withDSAinP1363Format", "sun.security.provider.DSA", "SHA3_256withDSAinP1363Format", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$SHA3_256withDSAinP1363Format",
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
	$loadClass(DSA$SHA3_256withDSAinP1363Format, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$SHA3_256withDSAinP1363Format);
	});
	return class$;
}

$Class* DSA$SHA3_256withDSAinP1363Format::class$ = nullptr;

		} // provider
	} // security
} // sun