#include <sun/util/resources/LocaleData$SupplementaryStrategy.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/util/resources/LocaleData$LocaleDataStrategy.h>
#include <sun/util/resources/LocaleData$SupplementaryResourceBundleProvider.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

#undef ENGLISH
#undef INSTANCE
#undef JAVA_BASE_LOCALES
#undef ROOT
#undef US

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $LocaleData$LocaleDataStrategy = ::sun::util::resources::LocaleData$LocaleDataStrategy;
using $LocaleData$SupplementaryResourceBundleProvider = ::sun::util::resources::LocaleData$SupplementaryResourceBundleProvider;

namespace sun {
	namespace util {
		namespace resources {

LocaleData$SupplementaryStrategy* LocaleData$SupplementaryStrategy::INSTANCE = nullptr;
$Set* LocaleData$SupplementaryStrategy::JAVA_BASE_LOCALES = nullptr;

void LocaleData$SupplementaryStrategy::init$() {
	$LocaleData$LocaleDataStrategy::init$();
}

$List* LocaleData$SupplementaryStrategy::getCandidateLocales($String* baseName, $Locale* locale) {
	return $Arrays::asList($$new($LocaleArray, {locale}));
}

$Class* LocaleData$SupplementaryStrategy::getResourceBundleProviderType($String* baseName, $Locale* locale) {
	$load($LocaleData$SupplementaryResourceBundleProvider);
	return inJavaBaseModule(baseName, locale) ? ($Class*)nullptr : $LocaleData$SupplementaryResourceBundleProvider::class$;
}

bool LocaleData$SupplementaryStrategy::inJavaBaseModule($String* baseName, $Locale* locale) {
	return $nc(LocaleData$SupplementaryStrategy::JAVA_BASE_LOCALES)->contains(locale);
}

void LocaleData$SupplementaryStrategy::clinit$($Class* clazz) {
	$assignStatic(LocaleData$SupplementaryStrategy::INSTANCE, $new(LocaleData$SupplementaryStrategy));
	$init($Locale);
	$assignStatic(LocaleData$SupplementaryStrategy::JAVA_BASE_LOCALES, $Set::of($Locale::ROOT, $Locale::ENGLISH, $Locale::US));
}

LocaleData$SupplementaryStrategy::LocaleData$SupplementaryStrategy() {
}

$Class* LocaleData$SupplementaryStrategy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/util/resources/LocaleData$SupplementaryStrategy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData$SupplementaryStrategy, INSTANCE)},
		{"JAVA_BASE_LOCALES", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Locale;>;", $PRIVATE | $STATIC, $staticField(LocaleData$SupplementaryStrategy, JAVA_BASE_LOCALES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LocaleData$SupplementaryStrategy, init$, void)},
		{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC, $virtualMethod(LocaleData$SupplementaryStrategy, getCandidateLocales, $List*, $String*, $Locale*)},
		{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class<+Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC, $virtualMethod(LocaleData$SupplementaryStrategy, getResourceBundleProviderType, $Class*, $String*, $Locale*)},
		{"inJavaBaseModule", "(Ljava/lang/String;Ljava/util/Locale;)Z", nullptr, 0, $virtualMethod(LocaleData$SupplementaryStrategy, inJavaBaseModule, bool, $String*, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.resources.LocaleData$SupplementaryStrategy", "sun.util.resources.LocaleData", "SupplementaryStrategy", $PRIVATE | $STATIC},
		{"sun.util.resources.LocaleData$LocaleDataStrategy", "sun.util.resources.LocaleData", "LocaleDataStrategy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.resources.LocaleData$SupplementaryStrategy",
		"sun.util.resources.LocaleData$LocaleDataStrategy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.resources.LocaleData"
	};
	$loadClass(LocaleData$SupplementaryStrategy, name, initialize, &classInfo$$, LocaleData$SupplementaryStrategy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleData$SupplementaryStrategy);
	});
	return class$;
}

$Class* LocaleData$SupplementaryStrategy::class$ = nullptr;

		} // resources
	} // util
} // sun