#include <sun/util/resources/LocaleData$LocaleDataStrategy.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData$CommonResourceBundleProvider.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

#undef CANDIDATES_MAP
#undef CLDR
#undef ENGLISH
#undef INSTANCE
#undef JAVA_BASE_LOCALES
#undef JRE
#undef ROOT
#undef US

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $Set = ::java::util::Set;
using $JRELocaleProviderAdapter = ::sun::util::locale::provider::JRELocaleProviderAdapter;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $LocaleData = ::sun::util::resources::LocaleData;
using $LocaleData$CommonResourceBundleProvider = ::sun::util::resources::LocaleData$CommonResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _LocaleData$LocaleDataStrategy_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocaleData$LocaleDataStrategy, $assertionsDisabled)},
	{"INSTANCE", "Lsun/util/resources/LocaleData$LocaleDataStrategy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData$LocaleDataStrategy, INSTANCE)},
	{"JAVA_BASE_LOCALES", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Locale;>;", $PRIVATE | $STATIC, $staticField(LocaleData$LocaleDataStrategy, JAVA_BASE_LOCALES)},
	{}
};

$MethodInfo _LocaleData$LocaleDataStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(LocaleData$LocaleDataStrategy, init$, void)},
	{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC, $virtualMethod(LocaleData$LocaleDataStrategy, getCandidateLocales, $List*, $String*, $Locale*)},
	{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class<+Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC, $virtualMethod(LocaleData$LocaleDataStrategy, getResourceBundleProviderType, $Class*, $String*, $Locale*)},
	{"inJavaBaseModule", "(Ljava/lang/String;Ljava/util/Locale;)Z", nullptr, 0, $virtualMethod(LocaleData$LocaleDataStrategy, inJavaBaseModule, bool, $String*, $Locale*)},
	{"toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleData$LocaleDataStrategy, toBundleName, $String*, $String*, $Locale*)},
	{}
};

$InnerClassInfo _LocaleData$LocaleDataStrategy_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$LocaleDataStrategy", "sun.util.resources.LocaleData", "LocaleDataStrategy", $PRIVATE | $STATIC},
	{"sun.util.resources.Bundles$Strategy", "sun.util.resources.Bundles", "Strategy", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LocaleData$LocaleDataStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.LocaleData$LocaleDataStrategy",
	"java.lang.Object",
	"sun.util.resources.Bundles$Strategy",
	_LocaleData$LocaleDataStrategy_FieldInfo_,
	_LocaleData$LocaleDataStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData$LocaleDataStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$LocaleDataStrategy($Class* clazz) {
	return $of($alloc(LocaleData$LocaleDataStrategy));
}

bool LocaleData$LocaleDataStrategy::$assertionsDisabled = false;
LocaleData$LocaleDataStrategy* LocaleData$LocaleDataStrategy::INSTANCE = nullptr;
$Set* LocaleData$LocaleDataStrategy::JAVA_BASE_LOCALES = nullptr;

void LocaleData$LocaleDataStrategy::init$() {
}

$List* LocaleData$LocaleDataStrategy::getCandidateLocales($String* baseName, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, $str({baseName, $$str(u'-'), $($nc(locale)->toLanguageTag())}));
	$init($LocaleData);
	$var($List, candidates, $cast($List, $nc($LocaleData::CANDIDATES_MAP)->get(key)));
	if (candidates == nullptr) {
		$init($LocaleProviderAdapter$Type);
		$LocaleProviderAdapter$Type* type = $nc(baseName)->contains(".cldr"_s) ? $LocaleProviderAdapter$Type::CLDR : $LocaleProviderAdapter$Type::JRE;
		$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::forType(type));
		$assign(candidates, $instanceOf($ResourceBundleBasedAdapter, adapter) ? $nc(($cast($ResourceBundleBasedAdapter, adapter)))->getCandidateLocales(baseName, locale) : $nc($LocaleData::defaultControl)->getCandidateLocales(baseName, locale));
		int32_t lastDot = $nc(baseName)->lastIndexOf((int32_t)u'.');
		$var($String, category, (lastDot >= 0) ? baseName->substring(lastDot + 1) : baseName);
		$var($Set, langtags, $nc(($cast($JRELocaleProviderAdapter, adapter)))->getLanguageTagSet(category));
		if (!$nc(langtags)->isEmpty()) {
			{
				$var($Iterator, itr, $nc(candidates)->iterator());
				for (; $nc(itr)->hasNext();) {
					if (!$nc(adapter)->isSupportedProviderLocale($cast($Locale, $(itr->next())), langtags)) {
						itr->remove();
					}
				}
			}
		}
		$nc($LocaleData::CANDIDATES_MAP)->putIfAbsent(key, candidates);
	}
	return candidates;
}

bool LocaleData$LocaleDataStrategy::inJavaBaseModule($String* baseName, $Locale* locale) {
	return $nc(LocaleData$LocaleDataStrategy::JAVA_BASE_LOCALES)->contains(locale);
}

$String* LocaleData$LocaleDataStrategy::toBundleName($String* baseName, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, newBaseName, baseName);
	if (!inJavaBaseModule(baseName, locale)) {
		$init($LocaleProviderAdapter$Type);
		bool var$0 = $nc(baseName)->startsWith($($LocaleProviderAdapter$Type::JRE->getUtilResourcesPackage()));
		if (var$0 || $nc(baseName)->startsWith($($LocaleProviderAdapter$Type::JRE->getTextResourcesPackage()))) {
			bool var$1 = !LocaleData$LocaleDataStrategy::$assertionsDisabled;
			if (var$1) {
				int32_t var$2 = $nc($($LocaleProviderAdapter$Type::JRE->getUtilResourcesPackage()))->length();
				var$1 = !(var$2 == $nc($($LocaleProviderAdapter$Type::JRE->getTextResourcesPackage()))->length());
			}
			if (var$1) {
				$throwNew($AssertionError);
			}
			int32_t index = $nc($($LocaleProviderAdapter$Type::JRE->getUtilResourcesPackage()))->length();
			if (baseName->indexOf(".cldr"_s, index) > 0) {
				index += ".cldr"_s->length();
			}
			$var($String, var$3, $$str({$(baseName->substring(0, index + 1)), "ext"_s}));
			$assign(newBaseName, $concat(var$3, $(baseName->substring(index))));
		}
	}
	$init($LocaleData);
	return $nc($LocaleData::defaultControl)->toBundleName(newBaseName, locale);
}

$Class* LocaleData$LocaleDataStrategy::getResourceBundleProviderType($String* baseName, $Locale* locale) {
	$load($LocaleData$CommonResourceBundleProvider);
	return inJavaBaseModule(baseName, locale) ? ($Class*)nullptr : $LocaleData$CommonResourceBundleProvider::class$;
}

void clinit$LocaleData$LocaleDataStrategy($Class* class$) {
	$load($LocaleData);
	LocaleData$LocaleDataStrategy::$assertionsDisabled = !$LocaleData::class$->desiredAssertionStatus();
	$assignStatic(LocaleData$LocaleDataStrategy::INSTANCE, $new(LocaleData$LocaleDataStrategy));
	$init($Locale);
	$assignStatic(LocaleData$LocaleDataStrategy::JAVA_BASE_LOCALES, $Set::of($Locale::ROOT, $Locale::ENGLISH, $Locale::US, $$new($Locale, "en"_s, "US"_s, "POSIX"_s)));
}

LocaleData$LocaleDataStrategy::LocaleData$LocaleDataStrategy() {
}

$Class* LocaleData$LocaleDataStrategy::load$($String* name, bool initialize) {
	$loadClass(LocaleData$LocaleDataStrategy, name, initialize, &_LocaleData$LocaleDataStrategy_ClassInfo_, clinit$LocaleData$LocaleDataStrategy, allocate$LocaleData$LocaleDataStrategy);
	return class$;
}

$Class* LocaleData$LocaleDataStrategy::class$ = nullptr;

		} // resources
	} // util
} // sun