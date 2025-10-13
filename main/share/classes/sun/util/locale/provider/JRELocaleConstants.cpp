#include <sun/util/locale/provider/JRELocaleConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _JRELocaleConstants_FieldInfo_[] = {
	{"JA_JP_JP", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, JA_JP_JP)},
	{"NO_NO_NY", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, NO_NO_NY)},
	{"TH_TH", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, TH_TH)},
	{"TH_TH_TH", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRELocaleConstants, TH_TH_TH)},
	{}
};

$MethodInfo _JRELocaleConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JRELocaleConstants::*)()>(&JRELocaleConstants::init$))},
	{}
};

$ClassInfo _JRELocaleConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.JRELocaleConstants",
	"java.lang.Object",
	nullptr,
	_JRELocaleConstants_FieldInfo_,
	_JRELocaleConstants_MethodInfo_
};

$Object* allocate$JRELocaleConstants($Class* clazz) {
	return $of($alloc(JRELocaleConstants));
}

$Locale* JRELocaleConstants::JA_JP_JP = nullptr;
$Locale* JRELocaleConstants::NO_NO_NY = nullptr;
$Locale* JRELocaleConstants::TH_TH = nullptr;
$Locale* JRELocaleConstants::TH_TH_TH = nullptr;

void JRELocaleConstants::init$() {
}

void clinit$JRELocaleConstants($Class* class$) {
	$assignStatic(JRELocaleConstants::JA_JP_JP, $new($Locale, "ja"_s, "JP"_s, "JP"_s));
	$assignStatic(JRELocaleConstants::NO_NO_NY, $new($Locale, "no"_s, "NO"_s, "NY"_s));
	$assignStatic(JRELocaleConstants::TH_TH, $new($Locale, "th"_s, "TH"_s));
	$assignStatic(JRELocaleConstants::TH_TH_TH, $new($Locale, "th"_s, "TH"_s, "TH"_s));
}

JRELocaleConstants::JRELocaleConstants() {
}

$Class* JRELocaleConstants::load$($String* name, bool initialize) {
	$loadClass(JRELocaleConstants, name, initialize, &_JRELocaleConstants_ClassInfo_, clinit$JRELocaleConstants, allocate$JRELocaleConstants);
	return class$;
}

$Class* JRELocaleConstants::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun