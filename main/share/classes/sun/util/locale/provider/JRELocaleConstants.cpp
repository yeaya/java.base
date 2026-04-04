#include <sun/util/locale/provider/JRELocaleConstants.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JA_JP_JP
#undef NO_NO_NY
#undef TH_TH
#undef TH_TH_TH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Locale* JRELocaleConstants::JA_JP_JP = nullptr;
$Locale* JRELocaleConstants::NO_NO_NY = nullptr;
$Locale* JRELocaleConstants::TH_TH = nullptr;
$Locale* JRELocaleConstants::TH_TH_TH = nullptr;

void JRELocaleConstants::init$() {
}

void JRELocaleConstants::clinit$($Class* clazz) {
	$assignStatic(JRELocaleConstants::JA_JP_JP, $new($Locale, "ja"_s, "JP"_s, "JP"_s));
	$assignStatic(JRELocaleConstants::NO_NO_NY, $new($Locale, "no"_s, "NO"_s, "NY"_s));
	$assignStatic(JRELocaleConstants::TH_TH, $new($Locale, "th"_s, "TH"_s));
	$assignStatic(JRELocaleConstants::TH_TH_TH, $new($Locale, "th"_s, "TH"_s, "TH"_s));
}

JRELocaleConstants::JRELocaleConstants() {
}

$Class* JRELocaleConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JA_JP_JP", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, JA_JP_JP)},
		{"NO_NO_NY", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, NO_NO_NY)},
		{"TH_TH", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, TH_TH)},
		{"TH_TH_TH", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, TH_TH_TH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JRELocaleConstants, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.provider.JRELocaleConstants",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleConstants, name, initialize, &classInfo$$, JRELocaleConstants::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleConstants);
	});
	return class$;
}

$Class* JRELocaleConstants::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun