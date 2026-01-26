#include <sun/util/locale/provider/DateFormatSymbolsProviderImpl.h>

#include <java/text/DateFormatSymbols.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _DateFormatSymbolsProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(DateFormatSymbolsProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DateFormatSymbolsProviderImpl, langtags)},
	{}
};

$MethodInfo _DateFormatSymbolsProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(DateFormatSymbolsProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DateFormatSymbolsProviderImpl, getAvailableLanguageTags, $Set*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(DateFormatSymbolsProviderImpl, getAvailableLocales, $LocaleArray*)},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;", nullptr, $PUBLIC, $virtualMethod(DateFormatSymbolsProviderImpl, getInstance, $DateFormatSymbols*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(DateFormatSymbolsProviderImpl, isSupportedLocale, bool, $Locale*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateFormatSymbolsProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.DateFormatSymbolsProviderImpl",
	"java.text.spi.DateFormatSymbolsProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_DateFormatSymbolsProviderImpl_FieldInfo_,
	_DateFormatSymbolsProviderImpl_MethodInfo_
};

$Object* allocate$DateFormatSymbolsProviderImpl($Class* clazz) {
	return $of($alloc(DateFormatSymbolsProviderImpl));
}

int32_t DateFormatSymbolsProviderImpl::hashCode() {
	 return this->$DateFormatSymbolsProvider::hashCode();
}

bool DateFormatSymbolsProviderImpl::equals(Object$* obj) {
	 return this->$DateFormatSymbolsProvider::equals(obj);
}

$Object* DateFormatSymbolsProviderImpl::clone() {
	 return this->$DateFormatSymbolsProvider::clone();
}

$String* DateFormatSymbolsProviderImpl::toString() {
	 return this->$DateFormatSymbolsProvider::toString();
}

void DateFormatSymbolsProviderImpl::finalize() {
	this->$DateFormatSymbolsProvider::finalize();
}

void DateFormatSymbolsProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$DateFormatSymbolsProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* DateFormatSymbolsProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool DateFormatSymbolsProviderImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$DateFormatSymbols* DateFormatSymbolsProviderImpl::getInstance($Locale* locale) {
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($DateFormatSymbols, locale);
}

$Set* DateFormatSymbolsProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

DateFormatSymbolsProviderImpl::DateFormatSymbolsProviderImpl() {
}

$Class* DateFormatSymbolsProviderImpl::load$($String* name, bool initialize) {
	$loadClass(DateFormatSymbolsProviderImpl, name, initialize, &_DateFormatSymbolsProviderImpl_ClassInfo_, allocate$DateFormatSymbolsProviderImpl);
	return class$;
}

$Class* DateFormatSymbolsProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun