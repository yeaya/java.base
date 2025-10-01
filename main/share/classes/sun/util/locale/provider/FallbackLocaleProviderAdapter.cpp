#include <sun/util/locale/provider/FallbackLocaleProviderAdapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <jcpp.h>

#undef ROOT
#undef FALLBACK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $JRELocaleProviderAdapter = ::sun::util::locale::provider::JRELocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _FallbackLocaleProviderAdapter_FieldInfo_[] = {
	{"rootTagSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FallbackLocaleProviderAdapter, rootTagSet)},
	{"rootLocaleResources", "Lsun/util/locale/provider/LocaleResources;", nullptr, $PRIVATE | $FINAL, $field(FallbackLocaleProviderAdapter, rootLocaleResources)},
	{}
};

$MethodInfo _FallbackLocaleProviderAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FallbackLocaleProviderAdapter::*)()>(&FallbackLocaleProviderAdapter::init$))},
	{"createLanguageTagSet", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED},
	{"getAdapterType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC},
	{"getLocaleResources", "(Ljava/util/Locale;)Lsun/util/locale/provider/LocaleResources;", nullptr, $PUBLIC},
	{"isSupportedProviderLocale", "(Ljava/util/Locale;Ljava/util/Set;)Z", "(Ljava/util/Locale;Ljava/util/Set<Ljava/lang/String;>;)Z", $PUBLIC},
	{}
};

$ClassInfo _FallbackLocaleProviderAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.FallbackLocaleProviderAdapter",
	"sun.util.locale.provider.JRELocaleProviderAdapter",
	nullptr,
	_FallbackLocaleProviderAdapter_FieldInfo_,
	_FallbackLocaleProviderAdapter_MethodInfo_
};

$Object* allocate$FallbackLocaleProviderAdapter($Class* clazz) {
	return $of($alloc(FallbackLocaleProviderAdapter));
}


$Set* FallbackLocaleProviderAdapter::rootTagSet = nullptr;

void FallbackLocaleProviderAdapter::init$() {
	$JRELocaleProviderAdapter::init$();
	$init($Locale);
	$set(this, rootLocaleResources, $new($LocaleResources, this, $Locale::ROOT));
}

$LocaleProviderAdapter$Type* FallbackLocaleProviderAdapter::getAdapterType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::FALLBACK;
}

$LocaleResources* FallbackLocaleProviderAdapter::getLocaleResources($Locale* locale) {
	return this->rootLocaleResources;
}

$Set* FallbackLocaleProviderAdapter::createLanguageTagSet($String* category) {
	return FallbackLocaleProviderAdapter::rootTagSet;
}

bool FallbackLocaleProviderAdapter::isSupportedProviderLocale($Locale* locale, $Set* langtags) {
	$init($Locale);
	return $nc($Locale::ROOT)->equals(locale);
}

void clinit$FallbackLocaleProviderAdapter($Class* class$) {
	$init($Locale);
	$assignStatic(FallbackLocaleProviderAdapter::rootTagSet, $Collections::singleton($($nc($Locale::ROOT)->toLanguageTag())));
}

FallbackLocaleProviderAdapter::FallbackLocaleProviderAdapter() {
}

$Class* FallbackLocaleProviderAdapter::load$($String* name, bool initialize) {
	$loadClass(FallbackLocaleProviderAdapter, name, initialize, &_FallbackLocaleProviderAdapter_ClassInfo_, clinit$FallbackLocaleProviderAdapter, allocate$FallbackLocaleProviderAdapter);
	return class$;
}

$Class* FallbackLocaleProviderAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun