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

$FieldInfo _LocaleData$SupplementaryStrategy_FieldInfo_[] = {
	{"INSTANCE", "Lsun/util/resources/LocaleData$SupplementaryStrategy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData$SupplementaryStrategy, INSTANCE)},
	{"JAVA_BASE_LOCALES", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Locale;>;", $PRIVATE | $STATIC, $staticField(LocaleData$SupplementaryStrategy, JAVA_BASE_LOCALES)},
	{}
};

$MethodInfo _LocaleData$SupplementaryStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LocaleData$SupplementaryStrategy::*)()>(&LocaleData$SupplementaryStrategy::init$))},
	{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC},
	{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class<+Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC},
	{"inJavaBaseModule", "(Ljava/lang/String;Ljava/util/Locale;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _LocaleData$SupplementaryStrategy_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$SupplementaryStrategy", "sun.util.resources.LocaleData", "SupplementaryStrategy", $PRIVATE | $STATIC},
	{"sun.util.resources.LocaleData$LocaleDataStrategy", "sun.util.resources.LocaleData", "LocaleDataStrategy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LocaleData$SupplementaryStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.LocaleData$SupplementaryStrategy",
	"sun.util.resources.LocaleData$LocaleDataStrategy",
	nullptr,
	_LocaleData$SupplementaryStrategy_FieldInfo_,
	_LocaleData$SupplementaryStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData$SupplementaryStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData"
};

$Object* allocate$LocaleData$SupplementaryStrategy($Class* clazz) {
	return $of($alloc(LocaleData$SupplementaryStrategy));
}

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

void clinit$LocaleData$SupplementaryStrategy($Class* class$) {
	$assignStatic(LocaleData$SupplementaryStrategy::INSTANCE, $new(LocaleData$SupplementaryStrategy));
	$init($Locale);
	$assignStatic(LocaleData$SupplementaryStrategy::JAVA_BASE_LOCALES, $Set::of($Locale::ROOT, $Locale::ENGLISH, $Locale::US));
}

LocaleData$SupplementaryStrategy::LocaleData$SupplementaryStrategy() {
}

$Class* LocaleData$SupplementaryStrategy::load$($String* name, bool initialize) {
	$loadClass(LocaleData$SupplementaryStrategy, name, initialize, &_LocaleData$SupplementaryStrategy_ClassInfo_, clinit$LocaleData$SupplementaryStrategy, allocate$LocaleData$SupplementaryStrategy);
	return class$;
}

$Class* LocaleData$SupplementaryStrategy::class$ = nullptr;

		} // resources
	} // util
} // sun