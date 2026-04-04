#include <sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter.h>
#include <java/lang/AssertionError.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $CalendarNameProviderImpl = ::sun::util::locale::provider::CalendarNameProviderImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

bool CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled = false;
CalendarDataUtility$CalendarFieldValueNamesMapGetter* CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE = nullptr;

void CalendarDataUtility$CalendarFieldValueNamesMapGetter::init$() {
}

$Map* CalendarDataUtility$CalendarFieldValueNamesMapGetter::getObject($CalendarNameProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	if (!CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled && !($nc(params)->length == 3)) {
		$throwNew($AssertionError);
	}
	int32_t field = $nc($cast($Integer, $nc(params)->get(0)))->intValue();
	int32_t style = $nc($cast($Integer, params->get(1)))->intValue();
	bool javatime = $nc($cast($Boolean, params->get(2)))->booleanValue();
	if (javatime && $instanceOf($CalendarNameProviderImpl, calendarNameProvider)) {
		$var($Map, map, nullptr);
		$assign(map, $cast($CalendarNameProviderImpl, calendarNameProvider)->getJavaTimeDisplayNames(requestID, field, style, locale));
		return map;
	}
	return $nc(calendarNameProvider)->getDisplayNames(requestID, field, style, locale);
}

$Object* CalendarDataUtility$CalendarFieldValueNamesMapGetter::getObject($LocaleServiceProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	return this->getObject($cast($CalendarNameProvider, calendarNameProvider), locale, requestID, params);
}

void CalendarDataUtility$CalendarFieldValueNamesMapGetter::clinit$($Class* clazz) {
	$load($CalendarDataUtility);
	CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled = !$CalendarDataUtility::class$->desiredAssertionStatus();
	$assignStatic(CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE, $new(CalendarDataUtility$CalendarFieldValueNamesMapGetter));
}

CalendarDataUtility$CalendarFieldValueNamesMapGetter::CalendarDataUtility$CalendarFieldValueNamesMapGetter() {
}

$Class* CalendarDataUtility$CalendarFieldValueNamesMapGetter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CalendarDataUtility$CalendarFieldValueNamesMapGetter, $assertionsDisabled)},
		{"INSTANCE", "Lsun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarDataUtility$CalendarFieldValueNamesMapGetter, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CalendarDataUtility$CalendarFieldValueNamesMapGetter, init$, void)},
		{"getObject", "(Ljava/util/spi/CalendarNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Map;", "(Ljava/util/spi/CalendarNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $TRANSIENT, $virtualMethod(CalendarDataUtility$CalendarFieldValueNamesMapGetter, getObject, $Map*, $CalendarNameProvider*, $Locale*, $String*, $ObjectArray*)},
		{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CalendarDataUtility$CalendarFieldValueNamesMapGetter, getObject, $Object*, $LocaleServiceProvider*, $Locale*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarFieldValueNamesMapGetter", $PRIVATE | $STATIC},
		{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter",
		"java.lang.Object",
		"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CalendarNameProvider;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.CalendarDataUtility"
	};
	$loadClass(CalendarDataUtility$CalendarFieldValueNamesMapGetter, name, initialize, &classInfo$$, CalendarDataUtility$CalendarFieldValueNamesMapGetter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarDataUtility$CalendarFieldValueNamesMapGetter);
	});
	return class$;
}

$Class* CalendarDataUtility$CalendarFieldValueNamesMapGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun