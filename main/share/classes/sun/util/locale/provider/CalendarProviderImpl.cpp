#include <sun/util/locale/provider/CalendarProviderImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Calendar$Builder.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/spi/CalendarProvider.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Calendar$Builder = ::java::util::Calendar$Builder;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $AvailableLanguageTags = ::sun::util::locale::provider::AvailableLanguageTags;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $CalendarProvider = ::sun::util::spi::CalendarProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(CalendarProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CalendarProviderImpl, langtags)},
	{}
};

$MethodInfo _CalendarProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(CalendarProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&CalendarProviderImpl::init$))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CalendarProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.CalendarProviderImpl",
	"sun.util.spi.CalendarProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_CalendarProviderImpl_FieldInfo_,
	_CalendarProviderImpl_MethodInfo_
};

$Object* allocate$CalendarProviderImpl($Class* clazz) {
	return $of($alloc(CalendarProviderImpl));
}

int32_t CalendarProviderImpl::hashCode() {
	 return this->$CalendarProvider::hashCode();
}

bool CalendarProviderImpl::equals(Object$* obj) {
	 return this->$CalendarProvider::equals(obj);
}

$Object* CalendarProviderImpl::clone() {
	 return this->$CalendarProvider::clone();
}

$String* CalendarProviderImpl::toString() {
	 return this->$CalendarProvider::toString();
}

void CalendarProviderImpl::finalize() {
	this->$CalendarProvider::finalize();
}

void CalendarProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CalendarProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* CalendarProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool CalendarProviderImpl::isSupportedLocale($Locale* locale) {
	return true;
}

$Calendar* CalendarProviderImpl::getInstance($TimeZone* zone, $Locale* locale) {
	return $nc($($nc($($nc($($$new($Calendar$Builder)->setLocale(locale)))->setTimeZone(zone)))->setInstant($System::currentTimeMillis())))->build();
}

$Set* CalendarProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

CalendarProviderImpl::CalendarProviderImpl() {
}

$Class* CalendarProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CalendarProviderImpl, name, initialize, &_CalendarProviderImpl_ClassInfo_, allocate$CalendarProviderImpl);
	return class$;
}

$Class* CalendarProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun