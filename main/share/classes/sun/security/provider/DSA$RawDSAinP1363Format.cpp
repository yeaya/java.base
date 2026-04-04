#include <sun/security/provider/DSA$RawDSAinP1363Format.h>
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

void DSA$RawDSAinP1363Format::init$() {
	$DSA$Raw::init$(true);
}

$String* DSA$RawDSAinP1363Format::toString() {
	return $DSA$Raw::toString();
}

DSA$RawDSAinP1363Format::DSA$RawDSAinP1363Format() {
}

$Class* DSA$RawDSAinP1363Format::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$RawDSAinP1363Format, init$, void), "java.security.NoSuchAlgorithmException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$RawDSAinP1363Format, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DSA$RawDSAinP1363Format", "sun.security.provider.DSA", "RawDSAinP1363Format", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.DSA$RawDSAinP1363Format",
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
	$loadClass(DSA$RawDSAinP1363Format, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSA$RawDSAinP1363Format);
	});
	return class$;
}

$Class* DSA$RawDSAinP1363Format::class$ = nullptr;

		} // provider
	} // security
} // sun