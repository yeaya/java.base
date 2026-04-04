#include <java/util/Locale$IsoCountryCode$1.h>
#include <java/util/Locale$IsoCountryCode.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Locale$IsoCountryCode = ::java::util::Locale$IsoCountryCode;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

void Locale$IsoCountryCode$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Locale$IsoCountryCode::init$($enum$name, $enum$ordinal);
}

$Set* Locale$IsoCountryCode$1::createCountryCodeSet() {
	return $Set::of($($Locale::getISOCountries()));
}

Locale$IsoCountryCode$1::Locale$IsoCountryCode$1() {
}

$Class* Locale$IsoCountryCode$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Locale$IsoCountryCode$1, init$, void, $String*, int32_t)},
		{"createCountryCodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $virtualMethod(Locale$IsoCountryCode$1, createCountryCodeSet, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Locale$IsoCountryCode",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$IsoCountryCode", "java.util.Locale", "IsoCountryCode", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"java.util.Locale$IsoCountryCode$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.util.Locale$IsoCountryCode$1",
		"java.util.Locale$IsoCountryCode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Locale"
	};
	$loadClass(Locale$IsoCountryCode$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Locale$IsoCountryCode$1));
	});
	return class$;
}

$Class* Locale$IsoCountryCode$1::class$ = nullptr;

	} // util
} // java