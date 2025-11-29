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

$FieldInfo _CalendarDataUtility$CalendarFieldValueNamesMapGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CalendarDataUtility$CalendarFieldValueNamesMapGetter, $assertionsDisabled)},
	{"INSTANCE", "Lsun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarDataUtility$CalendarFieldValueNamesMapGetter, INSTANCE)},
	{}
};

$MethodInfo _CalendarDataUtility$CalendarFieldValueNamesMapGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CalendarDataUtility$CalendarFieldValueNamesMapGetter::*)()>(&CalendarDataUtility$CalendarFieldValueNamesMapGetter::init$))},
	{"getObject", "(Ljava/util/spi/CalendarNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Map;", "(Ljava/util/spi/CalendarNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $TRANSIENT},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _CalendarDataUtility$CalendarFieldValueNamesMapGetter_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarFieldValueNamesMapGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CalendarDataUtility$CalendarFieldValueNamesMapGetter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_CalendarDataUtility$CalendarFieldValueNamesMapGetter_FieldInfo_,
	_CalendarDataUtility$CalendarFieldValueNamesMapGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CalendarNameProvider;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;>;",
	nullptr,
	_CalendarDataUtility$CalendarFieldValueNamesMapGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarDataUtility"
};

$Object* allocate$CalendarDataUtility$CalendarFieldValueNamesMapGetter($Class* clazz) {
	return $of($alloc(CalendarDataUtility$CalendarFieldValueNamesMapGetter));
}

bool CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled = false;
CalendarDataUtility$CalendarFieldValueNamesMapGetter* CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE = nullptr;

void CalendarDataUtility$CalendarFieldValueNamesMapGetter::init$() {
}

$Map* CalendarDataUtility$CalendarFieldValueNamesMapGetter::getObject($CalendarNameProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	if (!CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled && !($nc(params)->length == 3)) {
		$throwNew($AssertionError);
	}
	int32_t field = $nc(($cast($Integer, $nc(params)->get(0))))->intValue();
	int32_t style = $nc(($cast($Integer, params->get(1))))->intValue();
	bool javatime = $nc(($cast($Boolean, params->get(2))))->booleanValue();
	if (javatime && $instanceOf($CalendarNameProviderImpl, calendarNameProvider)) {
		$var($Map, map, nullptr);
		$assign(map, $nc(($cast($CalendarNameProviderImpl, calendarNameProvider)))->getJavaTimeDisplayNames(requestID, field, style, locale));
		return map;
	}
	return $nc(calendarNameProvider)->getDisplayNames(requestID, field, style, locale);
}

$Object* CalendarDataUtility$CalendarFieldValueNamesMapGetter::getObject($LocaleServiceProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	return $of(this->getObject($cast($CalendarNameProvider, calendarNameProvider), locale, requestID, params));
}

void clinit$CalendarDataUtility$CalendarFieldValueNamesMapGetter($Class* class$) {
	$load($CalendarDataUtility);
	CalendarDataUtility$CalendarFieldValueNamesMapGetter::$assertionsDisabled = !$CalendarDataUtility::class$->desiredAssertionStatus();
	$assignStatic(CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE, $new(CalendarDataUtility$CalendarFieldValueNamesMapGetter));
}

CalendarDataUtility$CalendarFieldValueNamesMapGetter::CalendarDataUtility$CalendarFieldValueNamesMapGetter() {
}

$Class* CalendarDataUtility$CalendarFieldValueNamesMapGetter::load$($String* name, bool initialize) {
	$loadClass(CalendarDataUtility$CalendarFieldValueNamesMapGetter, name, initialize, &_CalendarDataUtility$CalendarFieldValueNamesMapGetter_ClassInfo_, clinit$CalendarDataUtility$CalendarFieldValueNamesMapGetter, allocate$CalendarDataUtility$CalendarFieldValueNamesMapGetter);
	return class$;
}

$Class* CalendarDataUtility$CalendarFieldValueNamesMapGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun