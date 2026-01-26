#include <sun/util/locale/provider/CalendarDataProviderImpl.h>

#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef FIRST_DAY_OF_WEEK
#undef MINIMAL_DAYS_IN_FIRST_WEEK

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarDataProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(CalendarDataProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(CalendarDataProviderImpl, langtags)},
	{}
};

$MethodInfo _CalendarDataProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(CalendarDataProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"convertToCalendarData", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(CalendarDataProviderImpl, convertToCalendarData, int32_t, $String*)},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CalendarDataProviderImpl, getAvailableLanguageTags, $Set*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(CalendarDataProviderImpl, getAvailableLocales, $LocaleArray*)},
	{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(CalendarDataProviderImpl, getFirstDayOfWeek, int32_t, $Locale*)},
	{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC, $virtualMethod(CalendarDataProviderImpl, getMinimalDaysInFirstWeek, int32_t, $Locale*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CalendarDataProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.CalendarDataProviderImpl",
	"java.util.spi.CalendarDataProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_CalendarDataProviderImpl_FieldInfo_,
	_CalendarDataProviderImpl_MethodInfo_
};

$Object* allocate$CalendarDataProviderImpl($Class* clazz) {
	return $of($alloc(CalendarDataProviderImpl));
}

int32_t CalendarDataProviderImpl::hashCode() {
	 return this->$CalendarDataProvider::hashCode();
}

bool CalendarDataProviderImpl::equals(Object$* obj) {
	 return this->$CalendarDataProvider::equals(obj);
}

$Object* CalendarDataProviderImpl::clone() {
	 return this->$CalendarDataProvider::clone();
}

$String* CalendarDataProviderImpl::toString() {
	 return this->$CalendarDataProvider::toString();
}

void CalendarDataProviderImpl::finalize() {
	this->$CalendarDataProvider::finalize();
}

void CalendarDataProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CalendarDataProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

int32_t CalendarDataProviderImpl::getFirstDayOfWeek($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($CalendarDataUtility);
	$var($String, fw, $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getCalendarData($CalendarDataUtility::FIRST_DAY_OF_WEEK));
	return convertToCalendarData(fw);
}

int32_t CalendarDataProviderImpl::getMinimalDaysInFirstWeek($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($CalendarDataUtility);
	$var($String, md, $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getCalendarData($CalendarDataUtility::MINIMAL_DAYS_IN_FIRST_WEEK));
	return convertToCalendarData(md);
}

$LocaleArray* CalendarDataProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

$Set* CalendarDataProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

int32_t CalendarDataProviderImpl::convertToCalendarData($String* src) {
	int32_t val = $Integer::parseInt(src);
	return ($nc(src)->isEmpty() || val <= 0 || val > 7) ? 0 : val;
}

CalendarDataProviderImpl::CalendarDataProviderImpl() {
}

$Class* CalendarDataProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CalendarDataProviderImpl, name, initialize, &_CalendarDataProviderImpl_ClassInfo_, allocate$CalendarDataProviderImpl);
	return class$;
}

$Class* CalendarDataProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun