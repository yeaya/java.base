#include <sun/util/locale/provider/DateFormatProviderImpl.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $Calendar = ::java::util::Calendar;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $AvailableLanguageTags = ::sun::util::locale::provider::AvailableLanguageTags;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateFormatProviderImpl$$Lambda$getTimeZone>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DateFormatProviderImpl$$Lambda$getTimeZone::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DateFormatProviderImpl$$Lambda$getTimeZone::*)()>(&DateFormatProviderImpl$$Lambda$getTimeZone::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateFormatProviderImpl$$Lambda$getTimeZone::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DateFormatProviderImpl$$Lambda$getTimeZone::load$($String* name, bool initialize) {
	$loadClass(DateFormatProviderImpl$$Lambda$getTimeZone, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateFormatProviderImpl$$Lambda$getTimeZone$1>());
	}
	$DateFormat* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DateFormatProviderImpl$$Lambda$getTimeZone$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DateFormatProviderImpl$$Lambda$getTimeZone$1, inst$)},
	{}
};
$MethodInfo DateFormatProviderImpl$$Lambda$getTimeZone$1::methodInfos[3] = {
	{"<init>", "(Ljava/text/DateFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(DateFormatProviderImpl$$Lambda$getTimeZone$1::*)($DateFormat*)>(&DateFormatProviderImpl$$Lambda$getTimeZone$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateFormatProviderImpl$$Lambda$getTimeZone$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.util.locale.provider.DateFormatProviderImpl$$Lambda$getTimeZone$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* DateFormatProviderImpl$$Lambda$getTimeZone$1::load$($String* name, bool initialize) {
	$loadClass(DateFormatProviderImpl$$Lambda$getTimeZone$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateFormatProviderImpl$$Lambda$getTimeZone$1::class$ = nullptr;

$FieldInfo _DateFormatProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(DateFormatProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DateFormatProviderImpl, langtags)},
	{}
};

$MethodInfo _DateFormatProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(DateFormatProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&DateFormatProviderImpl::init$))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"getInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PRIVATE, $method(static_cast<$DateFormat*(DateFormatProviderImpl::*)(int32_t,int32_t,$Locale*)>(&DateFormatProviderImpl::getInstance))},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateFormatProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.DateFormatProviderImpl",
	"java.text.spi.DateFormatProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_DateFormatProviderImpl_FieldInfo_,
	_DateFormatProviderImpl_MethodInfo_
};

$Object* allocate$DateFormatProviderImpl($Class* clazz) {
	return $of($alloc(DateFormatProviderImpl));
}

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
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
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
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Locale, rg, $CalendarDataUtility::findRegionOverride(locale));
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, ""_s, rg));
	$var($Calendar, cal, sdf->getCalendar());
	try {
		$var($String, pattern, $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(rg)))->getDateTimePattern(timeStyle, dateStyle, cal));
		sdf->applyPattern(pattern);
	} catch ($MissingResourceException&) {
		$var($MissingResourceException, mre, $catch());
		sdf->applyPattern("M/d/yy h:mm a"_s);
	}
	$var($String, tz, $nc(locale)->getUnicodeLocaleType("tz"_s));
	if (tz != nullptr) {
		sdf->setTimeZone($cast($TimeZone, $($nc($($nc($($TimeZoneNameUtility::convertLDMLShortID(tz)))->map(static_cast<$Function*>($$new(DateFormatProviderImpl$$Lambda$getTimeZone)))))->orElseGet(static_cast<$Supplier*>($$new(DateFormatProviderImpl$$Lambda$getTimeZone$1, static_cast<$SimpleDateFormat*>(sdf)))))));
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
		if (name->equals(DateFormatProviderImpl$$Lambda$getTimeZone::classInfo$.name)) {
			return DateFormatProviderImpl$$Lambda$getTimeZone::load$(name, initialize);
		}
		if (name->equals(DateFormatProviderImpl$$Lambda$getTimeZone$1::classInfo$.name)) {
			return DateFormatProviderImpl$$Lambda$getTimeZone$1::load$(name, initialize);
		}
	}
	$loadClass(DateFormatProviderImpl, name, initialize, &_DateFormatProviderImpl_ClassInfo_, allocate$DateFormatProviderImpl);
	return class$;
}

$Class* DateFormatProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun