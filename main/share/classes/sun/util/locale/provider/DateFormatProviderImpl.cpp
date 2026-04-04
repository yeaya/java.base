#include <sun/util/locale/provider/DateFormatProviderImpl.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/DateFormat.h>
#include <java/text/SimpleDateFormat.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/TimeZoneNameUtility.h>
#include <jcpp.h>

#undef ID

using $LocaleArray = $Array<::java::util::Locale>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $Calendar = ::java::util::Calendar;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $TimeZoneNameUtility = ::sun::util::locale::provider::TimeZoneNameUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class DateFormatProviderImpl$$Lambda$getTimeZone : public $Function {
	$class(DateFormatProviderImpl$$Lambda$getTimeZone, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* ID) override {
		 return $of($TimeZone::getTimeZone($cast($String, ID)));
	}
};
$Class* DateFormatProviderImpl$$Lambda$getTimeZone::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DateFormatProviderImpl$$Lambda$getTimeZone, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl$$Lambda$getTimeZone, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(DateFormatProviderImpl$$Lambda$getTimeZone, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateFormatProviderImpl$$Lambda$getTimeZone);
	});
	return class$;
}
$Class* DateFormatProviderImpl$$Lambda$getTimeZone::class$ = nullptr;

class DateFormatProviderImpl$$Lambda$getTimeZone$1 : public $Supplier {
	$class(DateFormatProviderImpl$$Lambda$getTimeZone$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($DateFormat* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->getTimeZone());
	}
	$DateFormat* inst$ = nullptr;
};
$Class* DateFormatProviderImpl$$Lambda$getTimeZone$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DateFormatProviderImpl$$Lambda$getTimeZone$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/DateFormat;)V", nullptr, $PUBLIC, $method(DateFormatProviderImpl$$Lambda$getTimeZone$1, init$, void, $DateFormat*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl$$Lambda$getTimeZone$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateFormatProviderImpl$$Lambda$getTimeZone$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateFormatProviderImpl$$Lambda$getTimeZone$1);
	});
	return class$;
}
$Class* DateFormatProviderImpl$$Lambda$getTimeZone$1::class$ = nullptr;

int32_t DateFormatProviderImpl::hashCode() {
	 return this->$DateFormatProvider::hashCode();
}

bool DateFormatProviderImpl::equals(Object$* obj) {
	 return this->$DateFormatProvider::equals(obj);
}

$Object* DateFormatProviderImpl::clone() {
	 return this->$DateFormatProvider::clone();
}

$String* DateFormatProviderImpl::toString() {
	 return this->$DateFormatProvider::toString();
}

void DateFormatProviderImpl::finalize() {
	this->$DateFormatProvider::finalize();
}

void DateFormatProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$DateFormatProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* DateFormatProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool DateFormatProviderImpl::isSupportedLocale($Locale* locale) {
	return $$nc($LocaleProviderAdapter::forType(this->type))->isSupportedProviderLocale(locale, this->langtags);
}

$DateFormat* DateFormatProviderImpl::getTimeInstance(int32_t style, $Locale* locale) {
	return getInstance(-1, style, locale);
}

$DateFormat* DateFormatProviderImpl::getDateInstance(int32_t style, $Locale* locale) {
	return getInstance(style, -1, locale);
}

$DateFormat* DateFormatProviderImpl::getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	return getInstance(dateStyle, timeStyle, locale);
}

$DateFormat* DateFormatProviderImpl::getInstance(int32_t dateStyle, int32_t timeStyle, $Locale* locale) {
	$useLocalObjectStack();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Locale, rg, $CalendarDataUtility::findRegionOverride(locale));
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, ""_s, rg));
	$var($Calendar, cal, sdf->getCalendar());
	try {
		$var($String, pattern, $$nc($$nc($LocaleProviderAdapter::forType(this->type))->getLocaleResources(rg))->getDateTimePattern(timeStyle, dateStyle, cal));
		sdf->applyPattern(pattern);
	} catch ($MissingResourceException& mre) {
		sdf->applyPattern("M/d/yy h:mm a"_s);
	}
	$var($String, tz, $nc(locale)->getUnicodeLocaleType("tz"_s));
	if (tz != nullptr) {
		sdf->setTimeZone($$cast($TimeZone, $$nc($$nc($TimeZoneNameUtility::convertLDMLShortID(tz))->map($$new(DateFormatProviderImpl$$Lambda$getTimeZone)))->orElseGet($$new(DateFormatProviderImpl$$Lambda$getTimeZone$1, sdf))));
	}
	return sdf;
}

$Set* DateFormatProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

DateFormatProviderImpl::DateFormatProviderImpl() {
}

$Class* DateFormatProviderImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone")) {
			return DateFormatProviderImpl$$Lambda$getTimeZone::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone$1")) {
			return DateFormatProviderImpl$$Lambda$getTimeZone$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(DateFormatProviderImpl, type)},
		{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DateFormatProviderImpl, langtags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(DateFormatProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
		{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DateFormatProviderImpl, getAvailableLanguageTags, $Set*)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl, getAvailableLocales, $LocaleArray*)},
		{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl, getDateInstance, $DateFormat*, int32_t, $Locale*)},
		{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl, getDateTimeInstance, $DateFormat*, int32_t, int32_t, $Locale*)},
		{"getInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PRIVATE, $method(DateFormatProviderImpl, getInstance, $DateFormat*, int32_t, int32_t, $Locale*)},
		{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl, getTimeInstance, $DateFormat*, int32_t, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(DateFormatProviderImpl, isSupportedLocale, bool, $Locale*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.provider.DateFormatProviderImpl",
		"java.text.spi.DateFormatProvider",
		"sun.util.locale.provider.AvailableLanguageTags",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateFormatProviderImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DateFormatProviderImpl));
	});
	return class$;
}

$Class* DateFormatProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun