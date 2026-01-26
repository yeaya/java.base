#include <sun/util/locale/provider/DecimalFormatSymbolsProviderImpl.h>

#include <java/text/DecimalFormatSymbols.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
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
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _DecimalFormatSymbolsProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(DecimalFormatSymbolsProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DecimalFormatSymbolsProviderImpl, langtags)},
	{}
};

$MethodInfo _DecimalFormatSymbolsProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(DecimalFormatSymbolsProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DecimalFormatSymbolsProviderImpl, getAvailableLanguageTags, $Set*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(DecimalFormatSymbolsProviderImpl, getAvailableLocales, $LocaleArray*)},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC, $virtualMethod(DecimalFormatSymbolsProviderImpl, getInstance, $DecimalFormatSymbols*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(DecimalFormatSymbolsProviderImpl, isSupportedLocale, bool, $Locale*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DecimalFormatSymbolsProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.DecimalFormatSymbolsProviderImpl",
	"java.text.spi.DecimalFormatSymbolsProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_DecimalFormatSymbolsProviderImpl_FieldInfo_,
	_DecimalFormatSymbolsProviderImpl_MethodInfo_
};

$Object* allocate$DecimalFormatSymbolsProviderImpl($Class* clazz) {
	return $of($alloc(DecimalFormatSymbolsProviderImpl));
}

int32_t DecimalFormatSymbolsProviderImpl::hashCode() {
	 return this->$DecimalFormatSymbolsProvider::hashCode();
}

bool DecimalFormatSymbolsProviderImpl::equals(Object$* obj) {
	 return this->$DecimalFormatSymbolsProvider::equals(obj);
}

$Object* DecimalFormatSymbolsProviderImpl::clone() {
	 return this->$DecimalFormatSymbolsProvider::clone();
}

$String* DecimalFormatSymbolsProviderImpl::toString() {
	 return this->$DecimalFormatSymbolsProvider::toString();
}

void DecimalFormatSymbolsProviderImpl::finalize() {
	this->$DecimalFormatSymbolsProvider::finalize();
}

void DecimalFormatSymbolsProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$DecimalFormatSymbolsProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* DecimalFormatSymbolsProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool DecimalFormatSymbolsProviderImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$DecimalFormatSymbols* DecimalFormatSymbolsProviderImpl::getInstance($Locale* locale) {
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($DecimalFormatSymbols, locale);
}

$Set* DecimalFormatSymbolsProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

DecimalFormatSymbolsProviderImpl::DecimalFormatSymbolsProviderImpl() {
}

$Class* DecimalFormatSymbolsProviderImpl::load$($String* name, bool initialize) {
	$loadClass(DecimalFormatSymbolsProviderImpl, name, initialize, &_DecimalFormatSymbolsProviderImpl_ClassInfo_, allocate$DecimalFormatSymbolsProviderImpl);
	return class$;
}

$Class* DecimalFormatSymbolsProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun