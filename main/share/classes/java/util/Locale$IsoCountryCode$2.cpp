#include <java/util/Locale$IsoCountryCode$2.h>
#include <java/util/Locale$IsoCountryCode.h>
#include <java/util/LocaleISOData.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale$IsoCountryCode = ::java::util::Locale$IsoCountryCode;
using $LocaleISOData = ::java::util::LocaleISOData;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

void Locale$IsoCountryCode$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Locale$IsoCountryCode::init$($enum$name, $enum$ordinal);
}

$Set* Locale$IsoCountryCode$2::createCountryCodeSet() {
	return $LocaleISOData::computeISO3166_1Alpha3Countries();
}

Locale$IsoCountryCode$2::Locale$IsoCountryCode$2() {
}

$Class* Locale$IsoCountryCode$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Locale$IsoCountryCode$2, init$, void, $String*, int32_t)},
		{"createCountryCodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", 0, $virtualMethod(Locale$IsoCountryCode$2, createCountryCodeSet, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Locale$IsoCountryCode",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$IsoCountryCode", "java.util.Locale", "IsoCountryCode", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"java.util.Locale$IsoCountryCode$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.util.Locale$IsoCountryCode$2",
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
	$loadClass(Locale$IsoCountryCode$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Locale$IsoCountryCode$2));
	});
	return class$;
}

$Class* Locale$IsoCountryCode$2::class$ = nullptr;

	} // util
} // java