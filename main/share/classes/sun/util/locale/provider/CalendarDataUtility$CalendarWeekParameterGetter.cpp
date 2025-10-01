#include <sun/util/locale/provider/CalendarDataUtility$CalendarWeekParameterGetter.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <jcpp.h>

#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleServiceProviderPool$LocalizedObjectGetter = ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarDataUtility$CalendarWeekParameterGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CalendarDataUtility$CalendarWeekParameterGetter, $assertionsDisabled)},
	{"INSTANCE", "Lsun/util/locale/provider/CalendarDataUtility$CalendarWeekParameterGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarDataUtility$CalendarWeekParameterGetter, INSTANCE)},
	{}
};

$MethodInfo _CalendarDataUtility$CalendarWeekParameterGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CalendarDataUtility$CalendarWeekParameterGetter::*)()>(&CalendarDataUtility$CalendarWeekParameterGetter::init$))},
	{"getObject", "(Ljava/util/spi/CalendarDataProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Integer;", nullptr, $PUBLIC | $TRANSIENT},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _CalendarDataUtility$CalendarWeekParameterGetter_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarDataUtility$CalendarWeekParameterGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarWeekParameterGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CalendarDataUtility$CalendarWeekParameterGetter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.CalendarDataUtility$CalendarWeekParameterGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_CalendarDataUtility$CalendarWeekParameterGetter_FieldInfo_,
	_CalendarDataUtility$CalendarWeekParameterGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CalendarDataProvider;Ljava/lang/Integer;>;",
	nullptr,
	_CalendarDataUtility$CalendarWeekParameterGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarDataUtility"
};

$Object* allocate$CalendarDataUtility$CalendarWeekParameterGetter($Class* clazz) {
	return $of($alloc(CalendarDataUtility$CalendarWeekParameterGetter));
}

bool CalendarDataUtility$CalendarWeekParameterGetter::$assertionsDisabled = false;
CalendarDataUtility$CalendarWeekParameterGetter* CalendarDataUtility$CalendarWeekParameterGetter::INSTANCE = nullptr;

void CalendarDataUtility$CalendarWeekParameterGetter::init$() {
}

$Integer* CalendarDataUtility$CalendarWeekParameterGetter::getObject($CalendarDataProvider* calendarDataProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	if (!CalendarDataUtility$CalendarWeekParameterGetter::$assertionsDisabled && !($nc(params)->length == 0)) {
		$throwNew($AssertionError);
	}
	int32_t value = 0;
	{
		$var($String, s10944$, requestID);
		int32_t tmp10944$ = -1;
		switch ($nc(s10944$)->hashCode()) {
		case 0x1F21FC57:
			{
				if (s10944$->equals("firstDayOfWeek"_s)) {
					tmp10944$ = 0;
				}
				break;
			}
		case 0x50511A67:
			{
				if (s10944$->equals("minimalDaysInFirstWeek"_s)) {
					tmp10944$ = 1;
				}
				break;
			}
		}
		switch (tmp10944$) {
		case 0:
			{
				value = $nc(calendarDataProvider)->getFirstDayOfWeek(locale);
				if (value == 0) {
					value = 2;
				}
				break;
			}
		case 1:
			{
				value = $nc(calendarDataProvider)->getMinimalDaysInFirstWeek(locale);
				if (value == 0) {
					value = 1;
				}
				break;
			}
		default:
			{
				$throwNew($InternalError, $$str({"invalid requestID: "_s, requestID}));
			}
		}
	}
	if (!CalendarDataUtility$CalendarWeekParameterGetter::$assertionsDisabled && !(value != 0)) {
		$throwNew($AssertionError);
	}
	return $Integer::valueOf(value);
}

$Object* CalendarDataUtility$CalendarWeekParameterGetter::getObject($LocaleServiceProvider* calendarDataProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	return $of(this->getObject($cast($CalendarDataProvider, calendarDataProvider), locale, requestID, params));
}

void clinit$CalendarDataUtility$CalendarWeekParameterGetter($Class* class$) {
	$load($CalendarDataUtility);
	CalendarDataUtility$CalendarWeekParameterGetter::$assertionsDisabled = !$CalendarDataUtility::class$->desiredAssertionStatus();
	$assignStatic(CalendarDataUtility$CalendarWeekParameterGetter::INSTANCE, $new(CalendarDataUtility$CalendarWeekParameterGetter));
}

CalendarDataUtility$CalendarWeekParameterGetter::CalendarDataUtility$CalendarWeekParameterGetter() {
}

$Class* CalendarDataUtility$CalendarWeekParameterGetter::load$($String* name, bool initialize) {
	$loadClass(CalendarDataUtility$CalendarWeekParameterGetter, name, initialize, &_CalendarDataUtility$CalendarWeekParameterGetter_ClassInfo_, clinit$CalendarDataUtility$CalendarWeekParameterGetter, allocate$CalendarDataUtility$CalendarWeekParameterGetter);
	return class$;
}

$Class* CalendarDataUtility$CalendarWeekParameterGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun