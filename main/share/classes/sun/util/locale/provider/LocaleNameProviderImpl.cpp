#include <sun/util/locale/provider/LocaleNameProviderImpl.h>

#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _LocaleNameProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(LocaleNameProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LocaleNameProviderImpl, langtags)},
	{}
};

$MethodInfo _LocaleNameProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(LocaleNameProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getAvailableLanguageTags, $Set*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getAvailableLocales, $LocaleArray*)},
	{"getDisplayCountry", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayCountry, $String*, $String*, $Locale*)},
	{"getDisplayLanguage", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayLanguage, $String*, $String*, $Locale*)},
	{"getDisplayScript", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayScript, $String*, $String*, $Locale*)},
	{"getDisplayString", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(LocaleNameProviderImpl, getDisplayString, $String*, $String*, $Locale*)},
	{"getDisplayUnicodeExtensionKey", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayUnicodeExtensionKey, $String*, $String*, $Locale*)},
	{"getDisplayUnicodeExtensionType", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayUnicodeExtensionType, $String*, $String*, $String*, $Locale*)},
	{"getDisplayVariant", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, getDisplayVariant, $String*, $String*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(LocaleNameProviderImpl, isSupportedLocale, bool, $Locale*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocaleNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.LocaleNameProviderImpl",
	"java.util.spi.LocaleNameProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_LocaleNameProviderImpl_FieldInfo_,
	_LocaleNameProviderImpl_MethodInfo_
};

$Object* allocate$LocaleNameProviderImpl($Class* clazz) {
	return $of($alloc(LocaleNameProviderImpl));
}

int32_t LocaleNameProviderImpl::hashCode() {
	 return this->$LocaleNameProvider::hashCode();
}

bool LocaleNameProviderImpl::equals(Object$* obj) {
	 return this->$LocaleNameProvider::equals(obj);
}

$Object* LocaleNameProviderImpl::clone() {
	 return this->$LocaleNameProvider::clone();
}

$String* LocaleNameProviderImpl::toString() {
	 return this->$LocaleNameProvider::toString();
}

void LocaleNameProviderImpl::finalize() {
	this->$LocaleNameProvider::finalize();
}

void LocaleNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$LocaleNameProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* LocaleNameProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool LocaleNameProviderImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$String* LocaleNameProviderImpl::getDisplayLanguage($String* lang, $Locale* locale) {
	return getDisplayString(lang, locale);
}

$String* LocaleNameProviderImpl::getDisplayScript($String* scriptCode, $Locale* locale) {
	return getDisplayString(scriptCode, locale);
}

$String* LocaleNameProviderImpl::getDisplayCountry($String* ctry, $Locale* locale) {
	return getDisplayString(ctry, locale);
}

$String* LocaleNameProviderImpl::getDisplayVariant($String* vrnt, $Locale* locale) {
	return getDisplayString($$str({"%%"_s, vrnt}), locale);
}

$String* LocaleNameProviderImpl::getDisplayUnicodeExtensionKey($String* key, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$LocaleNameProvider::getDisplayUnicodeExtensionKey(key, locale);
	$var($String, rbKey, $str({"key."_s, key}));
	$var($String, name, getDisplayString(rbKey, locale));
	return $nc(rbKey)->equals(name) ? key : name;
}

$String* LocaleNameProviderImpl::getDisplayUnicodeExtensionType($String* extType, $String* key, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$LocaleNameProvider::getDisplayUnicodeExtensionType(extType, key, locale);
	$var($String, rbKey, $str({"type."_s, key, "."_s, extType}));
	$var($String, name, getDisplayString(rbKey, locale));
	return $nc(rbKey)->equals(name) ? extType : name;
}

$String* LocaleNameProviderImpl::getDisplayString($String* key, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || locale == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getLocaleName(key);
}

$Set* LocaleNameProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

LocaleNameProviderImpl::LocaleNameProviderImpl() {
}

$Class* LocaleNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(LocaleNameProviderImpl, name, initialize, &_LocaleNameProviderImpl_ClassInfo_, allocate$LocaleNameProviderImpl);
	return class$;
}

$Class* LocaleNameProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun