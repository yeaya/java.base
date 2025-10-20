#include <sun/util/locale/provider/CurrencyNameProviderImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef ROOT

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $AvailableLanguageTags = ::sun::util::locale::provider::AvailableLanguageTags;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CurrencyNameProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(CurrencyNameProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CurrencyNameProviderImpl, langtags)},
	{}
};

$MethodInfo _CurrencyNameProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(CurrencyNameProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&CurrencyNameProviderImpl::init$))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getString", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CurrencyNameProviderImpl::*)($String*,$Locale*)>(&CurrencyNameProviderImpl::getString))},
	{"getSymbol", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CurrencyNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.CurrencyNameProviderImpl",
	"java.util.spi.CurrencyNameProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_CurrencyNameProviderImpl_FieldInfo_,
	_CurrencyNameProviderImpl_MethodInfo_
};

$Object* allocate$CurrencyNameProviderImpl($Class* clazz) {
	return $of($alloc(CurrencyNameProviderImpl));
}

int32_t CurrencyNameProviderImpl::hashCode() {
	 return this->$CurrencyNameProvider::hashCode();
}

bool CurrencyNameProviderImpl::equals(Object$* obj) {
	 return this->$CurrencyNameProvider::equals(obj);
}

$Object* CurrencyNameProviderImpl::clone() {
	 return this->$CurrencyNameProvider::clone();
}

$String* CurrencyNameProviderImpl::toString() {
	 return this->$CurrencyNameProvider::toString();
}

void CurrencyNameProviderImpl::finalize() {
	this->$CurrencyNameProvider::finalize();
}

void CurrencyNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CurrencyNameProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$Set* CurrencyNameProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

$LocaleArray* CurrencyNameProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

$String* CurrencyNameProviderImpl::getSymbol($String* currencyCode, $Locale* locale) {
	$init($Locale);
	return getString($($nc(currencyCode)->toUpperCase($Locale::ROOT)), locale);
}

$String* CurrencyNameProviderImpl::getDisplayName($String* currencyCode, $Locale* locale) {
	$init($Locale);
	return getString($($nc(currencyCode)->toLowerCase($Locale::ROOT)), locale);
}

$String* CurrencyNameProviderImpl::getString($String* key, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getCurrencyName(key);
}

CurrencyNameProviderImpl::CurrencyNameProviderImpl() {
}

$Class* CurrencyNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNameProviderImpl, name, initialize, &_CurrencyNameProviderImpl_ClassInfo_, allocate$CurrencyNameProviderImpl);
	return class$;
}

$Class* CurrencyNameProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun