#include <sun/util/locale/provider/NumberFormatProviderImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CompactNumberFormat.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/NumberFormat.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Currency.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef ACCOUNTINGSTYLE
#undef CURRENCYSTYLE
#undef INTEGERSTYLE
#undef NUMBERSTYLE
#undef PERCENTSTYLE

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CompactNumberFormat = ::java::text::CompactNumberFormat;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Currency = ::java::util::Currency;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $AvailableLanguageTags = ::sun::util::locale::provider::AvailableLanguageTags;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _NumberFormatProviderImpl_FieldInfo_[] = {
	{"NUMBERSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormatProviderImpl, NUMBERSTYLE)},
	{"CURRENCYSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormatProviderImpl, CURRENCYSTYLE)},
	{"PERCENTSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormatProviderImpl, PERCENTSTYLE)},
	{"ACCOUNTINGSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormatProviderImpl, ACCOUNTINGSTYLE)},
	{"INTEGERSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormatProviderImpl, INTEGERSTYLE)},
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(NumberFormatProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(NumberFormatProviderImpl, langtags)},
	{}
};

$MethodInfo _NumberFormatProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(NumberFormatProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&NumberFormatProviderImpl::init$))},
	{"adjustForCurrencyDefaultFractionDigits", "(Ljava/text/DecimalFormat;Ljava/text/DecimalFormatSymbols;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DecimalFormat*,$DecimalFormatSymbols*)>(&NumberFormatProviderImpl::adjustForCurrencyDefaultFractionDigits))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/Locale;I)Ljava/text/NumberFormat;", nullptr, $PRIVATE, $method(static_cast<$NumberFormat*(NumberFormatProviderImpl::*)($Locale*,int32_t)>(&NumberFormatProviderImpl::getInstance))},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberFormatProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.NumberFormatProviderImpl",
	"java.text.spi.NumberFormatProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_NumberFormatProviderImpl_FieldInfo_,
	_NumberFormatProviderImpl_MethodInfo_
};

$Object* allocate$NumberFormatProviderImpl($Class* clazz) {
	return $of($alloc(NumberFormatProviderImpl));
}

int32_t NumberFormatProviderImpl::hashCode() {
	 return this->$NumberFormatProvider::hashCode();
}

bool NumberFormatProviderImpl::equals(Object$* obj) {
	 return this->$NumberFormatProvider::equals(obj);
}

$Object* NumberFormatProviderImpl::clone() {
	 return this->$NumberFormatProvider::clone();
}

$String* NumberFormatProviderImpl::toString() {
	 return this->$NumberFormatProvider::toString();
}

void NumberFormatProviderImpl::finalize() {
	this->$NumberFormatProvider::finalize();
}

void NumberFormatProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$NumberFormatProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* NumberFormatProviderImpl::getAvailableLocales() {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->getAvailableLocales();
}

bool NumberFormatProviderImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$NumberFormat* NumberFormatProviderImpl::getCurrencyInstance($Locale* locale) {
	return getInstance(locale, NumberFormatProviderImpl::CURRENCYSTYLE);
}

$NumberFormat* NumberFormatProviderImpl::getIntegerInstance($Locale* locale) {
	return getInstance(locale, NumberFormatProviderImpl::INTEGERSTYLE);
}

$NumberFormat* NumberFormatProviderImpl::getNumberInstance($Locale* locale) {
	return getInstance(locale, NumberFormatProviderImpl::NUMBERSTYLE);
}

$NumberFormat* NumberFormatProviderImpl::getPercentInstance($Locale* locale) {
	return getInstance(locale, NumberFormatProviderImpl::PERCENTSTYLE);
}

$NumberFormat* NumberFormatProviderImpl::getInstance($Locale* locale, int32_t choice) {
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Locale, override$, $nc(locale)->getUnicodeLocaleType("nu"_s) == nullptr ? $CalendarDataUtility::findRegionOverride(locale) : locale);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::forType(this->type));
	$var($StringArray, numberPatterns, $nc($($nc(adapter)->getLocaleResources(override$)))->getNumberPatterns());
	$var($DecimalFormatSymbols, symbols, $DecimalFormatSymbols::getInstance(override$));
	int32_t entry = (choice == NumberFormatProviderImpl::INTEGERSTYLE) ? NumberFormatProviderImpl::NUMBERSTYLE : choice;
	bool var$0 = choice == NumberFormatProviderImpl::CURRENCYSTYLE && $nc(numberPatterns)->length > NumberFormatProviderImpl::ACCOUNTINGSTYLE && !$nc(numberPatterns->get(NumberFormatProviderImpl::ACCOUNTINGSTYLE))->isEmpty();
	if (var$0 && "account"_s->equalsIgnoreCase($($nc(override$)->getUnicodeLocaleType("cf"_s)))) {
		entry = NumberFormatProviderImpl::ACCOUNTINGSTYLE;
	}
	$var($DecimalFormat, format, $new($DecimalFormat, $nc(numberPatterns)->get(entry), symbols));
	if (choice == NumberFormatProviderImpl::INTEGERSTYLE) {
		format->setMaximumFractionDigits(0);
		format->setDecimalSeparatorAlwaysShown(false);
		format->setParseIntegerOnly(true);
	} else if (choice == NumberFormatProviderImpl::CURRENCYSTYLE) {
		adjustForCurrencyDefaultFractionDigits(format, symbols);
	}
	return format;
}

void NumberFormatProviderImpl::adjustForCurrencyDefaultFractionDigits($DecimalFormat* format, $DecimalFormatSymbols* symbols) {
	$init(NumberFormatProviderImpl);
	$useLocalCurrentObjectStackCache();
	$var($Currency, currency, $nc(symbols)->getCurrency());
	if (currency == nullptr) {
		try {
			$assign(currency, $Currency::getInstance($(symbols->getInternationalCurrencySymbol())));
		} catch ($IllegalArgumentException&) {
			$catch();
		}
	}
	if (currency != nullptr) {
		int32_t digits = currency->getDefaultFractionDigits();
		if (digits != -1) {
			int32_t oldMinDigits = $nc(format)->getMinimumFractionDigits();
			if (oldMinDigits == format->getMaximumFractionDigits()) {
				format->setMinimumFractionDigits(digits);
				format->setMaximumFractionDigits(digits);
			} else {
				format->setMinimumFractionDigits($Math::min(digits, oldMinDigits));
				format->setMaximumFractionDigits(digits);
			}
		}
	}
}

$NumberFormat* NumberFormatProviderImpl::getCompactNumberInstance($Locale* locale, $NumberFormat$Style* formatStyle) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(locale);
	$Objects::requireNonNull(formatStyle);
	$var($Locale, override$, locale->getUnicodeLocaleType("nu"_s) == nullptr ? $CalendarDataUtility::findRegionOverride(locale) : locale);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::forType(this->type));
	$var($LocaleResources, resource, $nc(adapter)->getLocaleResources(override$));
	$var($StringArray, numberPatterns, $nc(resource)->getNumberPatterns());
	$var($DecimalFormatSymbols, symbols, $DecimalFormatSymbols::getInstance(override$));
	$var($StringArray, cnPatterns, resource->getCNPatterns(formatStyle));
	$var($StringArray, rules, resource->getRules());
	return $new($CompactNumberFormat, $nc(numberPatterns)->get(0), symbols, cnPatterns, $nc(rules)->get(0));
}

$Set* NumberFormatProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

NumberFormatProviderImpl::NumberFormatProviderImpl() {
}

$Class* NumberFormatProviderImpl::load$($String* name, bool initialize) {
	$loadClass(NumberFormatProviderImpl, name, initialize, &_NumberFormatProviderImpl_ClassInfo_, allocate$NumberFormatProviderImpl);
	return class$;
}

$Class* NumberFormatProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun