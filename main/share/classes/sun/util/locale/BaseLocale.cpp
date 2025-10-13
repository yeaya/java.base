#include <sun/util/locale/BaseLocale.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <java/util/StringJoiner.h>
#include <jdk/internal/misc/CDS.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/locale/BaseLocale$Cache.h>
#include <sun/util/locale/BaseLocale$Key.h>
#include <sun/util/locale/LocaleUtils.h>
#include <jcpp.h>

#undef CACHE
#undef CANADA
#undef CANADA_FRENCH
#undef CHINESE
#undef ENGLISH
#undef FRANCE
#undef FRENCH
#undef GERMAN
#undef GERMANY
#undef ITALIAN
#undef ITALY
#undef JAPAN
#undef JAPANESE
#undef KOREA
#undef KOREAN
#undef NUM_CONSTANTS
#undef OLD_ISO_CODES
#undef ROOT
#undef SEP
#undef SIMPLIFIED_CHINESE
#undef TRADITIONAL_CHINESE
#undef UK
#undef US

using $BaseLocaleArray = $Array<::sun::util::locale::BaseLocale>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $StringJoiner = ::java::util::StringJoiner;
using $CDS = ::jdk::internal::misc::CDS;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $BaseLocale$Cache = ::sun::util::locale::BaseLocale$Cache;
using $BaseLocale$Key = ::sun::util::locale::BaseLocale$Key;
using $LocaleObjectCache = ::sun::util::locale::LocaleObjectCache;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;

namespace sun {
	namespace util {
		namespace locale {

$CompoundAttribute _BaseLocale_FieldAnnotations_constantBaseLocales[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _BaseLocale_FieldInfo_[] = {
	{"constantBaseLocales", "[Lsun/util/locale/BaseLocale;", nullptr, $PUBLIC | $STATIC, $staticField(BaseLocale, constantBaseLocales), _BaseLocale_FieldAnnotations_constantBaseLocales},
	{"ENGLISH", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, ENGLISH)},
	{"FRENCH", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, FRENCH)},
	{"GERMAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, GERMAN)},
	{"ITALIAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, ITALIAN)},
	{"JAPANESE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, JAPANESE)},
	{"KOREAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, KOREAN)},
	{"CHINESE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, CHINESE)},
	{"SIMPLIFIED_CHINESE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, SIMPLIFIED_CHINESE)},
	{"TRADITIONAL_CHINESE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, TRADITIONAL_CHINESE)},
	{"FRANCE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, FRANCE)},
	{"GERMANY", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, GERMANY)},
	{"ITALY", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, ITALY)},
	{"JAPAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, JAPAN)},
	{"KOREA", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, KOREA)},
	{"UK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, UK)},
	{"US", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, US)},
	{"CANADA", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, CANADA)},
	{"CANADA_FRENCH", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, CANADA_FRENCH)},
	{"ROOT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, ROOT)},
	{"NUM_CONSTANTS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseLocale, NUM_CONSTANTS)},
	{"SEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BaseLocale, SEP)},
	{"language", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BaseLocale, language)},
	{"script", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BaseLocale, script)},
	{"region", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BaseLocale, region)},
	{"variant", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BaseLocale, variant)},
	{"hash", "I", nullptr, $PRIVATE | $VOLATILE, $field(BaseLocale, hash)},
	{"OLD_ISO_CODES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseLocale, OLD_ISO_CODES)},
	{}
};

$MethodInfo _BaseLocale_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BaseLocale::*)($String*,$String*,$String*,$String*,bool)>(&BaseLocale::init$))},
	{"convertOldISOCodes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&BaseLocale::convertOldISOCodes))},
	{"createInstance", "(Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/BaseLocale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BaseLocale*(*)($String*,$String*)>(&BaseLocale::createInstance))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/BaseLocale;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BaseLocale*(*)($String*,$String*,$String*,$String*)>(&BaseLocale::getInstance))},
	{"getLanguage", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BaseLocale::*)()>(&BaseLocale::getLanguage))},
	{"getRegion", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BaseLocale::*)()>(&BaseLocale::getRegion))},
	{"getScript", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BaseLocale::*)()>(&BaseLocale::getScript))},
	{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BaseLocale::*)()>(&BaseLocale::getVariant))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BaseLocale_InnerClassesInfo_[] = {
	{"sun.util.locale.BaseLocale$Cache", "sun.util.locale.BaseLocale", "Cache", $PRIVATE | $STATIC},
	{"sun.util.locale.BaseLocale$Key", "sun.util.locale.BaseLocale", "Key", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BaseLocale_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.locale.BaseLocale",
	"java.lang.Object",
	nullptr,
	_BaseLocale_FieldInfo_,
	_BaseLocale_MethodInfo_,
	nullptr,
	nullptr,
	_BaseLocale_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.locale.BaseLocale$Cache,sun.util.locale.BaseLocale$Key"
};

$Object* allocate$BaseLocale($Class* clazz) {
	return $of($alloc(BaseLocale));
}

$BaseLocaleArray* BaseLocale::constantBaseLocales = nullptr;
$String* BaseLocale::SEP = nullptr;

bool BaseLocale::OLD_ISO_CODES = false;

void BaseLocale::init$($String* language, $String* script, $String* region, $String* variant, bool normalize) {
	if (normalize) {
		$set(this, language, $nc($($LocaleUtils::toLowerString(language)))->intern());
		$set(this, script, $nc($($LocaleUtils::toTitleString(script)))->intern());
		$set(this, region, $nc($($LocaleUtils::toUpperString(region)))->intern());
		$set(this, variant, $nc(variant)->intern());
	} else {
		$set(this, language, language);
		$set(this, script, script);
		$set(this, region, region);
		$set(this, variant, variant);
	}
}

BaseLocale* BaseLocale::createInstance($String* language, $String* region) {
	$init(BaseLocale);
	return $new(BaseLocale, language, ""_s, region, ""_s, false);
}

BaseLocale* BaseLocale::getInstance($String* language$renamed, $String* script$renamed, $String* region$renamed, $String* variant$renamed) {
	$init(BaseLocale);
	$var($String, variant, variant$renamed);
	$var($String, language, language$renamed);
	$var($String, region, region$renamed);
	$var($String, script, script$renamed);
	if (script == nullptr) {
		$assign(script, ""_s);
	}
	if (region == nullptr) {
		$assign(region, ""_s);
	}
	if (language == nullptr) {
		$assign(language, nullptr);
	}
	if (variant == nullptr) {
		$assign(variant, ""_s);
	}
	$assign(language, $LocaleUtils::toLowerString(language));
	$assign(region, $LocaleUtils::toUpperString(region));
	bool var$0 = $nc(script)->isEmpty();
	if (var$0 && $nc(variant)->isEmpty()) {
		{
			$var($BaseLocaleArray, arr$, BaseLocale::constantBaseLocales);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(BaseLocale, baseLocale, arr$->get(i$));
				{
					bool var$1 = $nc($($nc(baseLocale)->getLanguage()))->equals(language);
					if (var$1 && $nc($(baseLocale->getRegion()))->equals(region)) {
						return baseLocale;
					}
				}
			}
		}
	}
	if (!$nc(language)->isEmpty()) {
		$assign(language, convertOldISOCodes(language));
	}
	$var($BaseLocale$Key, key, $new($BaseLocale$Key, language, script, region, variant, false));
	$init($BaseLocale$Cache);
	return $cast(BaseLocale, $nc($BaseLocale$Cache::CACHE)->get(key));
}

$String* BaseLocale::convertOldISOCodes($String* language) {
	$init(BaseLocale);
	$var($String, s6638$, language);
	int32_t tmp6638$ = -1;
	switch ($nc(s6638$)->hashCode()) {
	case 3325:
		{
			if (s6638$->equals("he"_s)) {
				tmp6638$ = 0;
			}
			break;
		}
	case 3374:
		{
			if (s6638$->equals("iw"_s)) {
				tmp6638$ = 1;
			}
			break;
		}
	case 3355:
		{
			if (s6638$->equals("id"_s)) {
				tmp6638$ = 2;
			}
			break;
		}
	case 3365:
		{
			if (s6638$->equals("in"_s)) {
				tmp6638$ = 3;
			}
			break;
		}
	case 3856:
		{
			if (s6638$->equals("yi"_s)) {
				tmp6638$ = 4;
			}
			break;
		}
	case 3391:
		{
			if (s6638$->equals("ji"_s)) {
				tmp6638$ = 5;
			}
			break;
		}
	}

	$var($String, var$0, nullptr)
	switch (tmp6638$) {
	case 0:
		{}
	case 1:
		{
			$assign(var$0, BaseLocale::OLD_ISO_CODES ? "iw"_s : "he"_s);
			break;
		}
	case 2:
		{}
	case 3:
		{
			$assign(var$0, BaseLocale::OLD_ISO_CODES ? "in"_s : "id"_s);
			break;
		}
	case 4:
		{}
	case 5:
		{
			$assign(var$0, BaseLocale::OLD_ISO_CODES ? "ji"_s : "yi"_s);
			break;
		}
	default:
		{
			$assign(var$0, language);
			break;
		}
	}
	return var$0;
}

$String* BaseLocale::getLanguage() {
	return this->language;
}

$String* BaseLocale::getScript() {
	return this->script;
}

$String* BaseLocale::getRegion() {
	return this->region;
}

$String* BaseLocale::getVariant() {
	return this->variant;
}

bool BaseLocale::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(BaseLocale, obj))) {
		return false;
	}
	$var(BaseLocale, other, $cast(BaseLocale, obj));
	return this->language == $nc(other)->language && this->script == other->script && this->region == other->region && this->variant == other->variant;
}

$String* BaseLocale::toString() {
	$var($StringJoiner, sj, $new($StringJoiner, ", "_s));
	if (!$nc(this->language)->isEmpty()) {
		sj->add($$str({"language="_s, this->language}));
	}
	if (!$nc(this->script)->isEmpty()) {
		sj->add($$str({"script="_s, this->script}));
	}
	if (!$nc(this->region)->isEmpty()) {
		sj->add($$str({"region="_s, this->region}));
	}
	if (!$nc(this->variant)->isEmpty()) {
		sj->add($$str({"variant="_s, this->variant}));
	}
	return sj->toString();
}

int32_t BaseLocale::hashCode() {
	int32_t h = this->hash;
	if (h == 0) {
		h = $nc(this->language)->hashCode();
		h = 31 * h + $nc(this->script)->hashCode();
		h = 31 * h + $nc(this->region)->hashCode();
		h = 31 * h + $nc(this->variant)->hashCode();
		if (h != 0) {
			this->hash = h;
		}
	}
	return h;
}

void clinit$BaseLocale($Class* class$) {
	$assignStatic(BaseLocale::SEP, "_"_s);
	{
		$CDS::initializeFromArchive(BaseLocale::class$);
		$var($BaseLocaleArray, baseLocales, BaseLocale::constantBaseLocales);
		if (baseLocales == nullptr) {
			$assign(baseLocales, $new($BaseLocaleArray, BaseLocale::NUM_CONSTANTS));
			baseLocales->set(BaseLocale::ENGLISH, $(BaseLocale::createInstance("en"_s, ""_s)));
			baseLocales->set(BaseLocale::FRENCH, $(BaseLocale::createInstance("fr"_s, ""_s)));
			baseLocales->set(BaseLocale::GERMAN, $(BaseLocale::createInstance("de"_s, ""_s)));
			baseLocales->set(BaseLocale::ITALIAN, $(BaseLocale::createInstance("it"_s, ""_s)));
			baseLocales->set(BaseLocale::JAPANESE, $(BaseLocale::createInstance("ja"_s, ""_s)));
			baseLocales->set(BaseLocale::KOREAN, $(BaseLocale::createInstance("ko"_s, ""_s)));
			baseLocales->set(BaseLocale::CHINESE, $(BaseLocale::createInstance("zh"_s, ""_s)));
			baseLocales->set(BaseLocale::SIMPLIFIED_CHINESE, $(BaseLocale::createInstance("zh"_s, "CN"_s)));
			baseLocales->set(BaseLocale::TRADITIONAL_CHINESE, $(BaseLocale::createInstance("zh"_s, "TW"_s)));
			baseLocales->set(BaseLocale::FRANCE, $(BaseLocale::createInstance("fr"_s, "FR"_s)));
			baseLocales->set(BaseLocale::GERMANY, $(BaseLocale::createInstance("de"_s, "DE"_s)));
			baseLocales->set(BaseLocale::ITALY, $(BaseLocale::createInstance("it"_s, "IT"_s)));
			baseLocales->set(BaseLocale::JAPAN, $(BaseLocale::createInstance("ja"_s, "JP"_s)));
			baseLocales->set(BaseLocale::KOREA, $(BaseLocale::createInstance("ko"_s, "KR"_s)));
			baseLocales->set(BaseLocale::UK, $(BaseLocale::createInstance("en"_s, "GB"_s)));
			baseLocales->set(BaseLocale::US, $(BaseLocale::createInstance("en"_s, "US"_s)));
			baseLocales->set(BaseLocale::CANADA, $(BaseLocale::createInstance("en"_s, "CA"_s)));
			baseLocales->set(BaseLocale::CANADA_FRENCH, $(BaseLocale::createInstance("fr"_s, "CA"_s)));
			baseLocales->set(BaseLocale::ROOT, $(BaseLocale::createInstance(""_s, ""_s)));
			$assignStatic(BaseLocale::constantBaseLocales, baseLocales);
		}
	}
	BaseLocale::OLD_ISO_CODES = $nc($($nc($($GetPropertyAction::privilegedGetProperties()))->getProperty("java.locale.useOldISOCodes"_s, "false"_s)))->equalsIgnoreCase("true"_s);
}

BaseLocale::BaseLocale() {
}

$Class* BaseLocale::load$($String* name, bool initialize) {
	$loadClass(BaseLocale, name, initialize, &_BaseLocale_ClassInfo_, clinit$BaseLocale, allocate$BaseLocale);
	return class$;
}

$Class* BaseLocale::class$ = nullptr;

		} // locale
	} // util
} // sun