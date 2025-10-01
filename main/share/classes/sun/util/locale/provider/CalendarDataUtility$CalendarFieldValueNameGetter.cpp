#include <sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNameGetter.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
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
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $CalendarNameProviderImpl = ::sun::util::locale::provider::CalendarNameProviderImpl;
using $LocaleServiceProviderPool$LocalizedObjectGetter = ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarDataUtility$CalendarFieldValueNameGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CalendarDataUtility$CalendarFieldValueNameGetter, $assertionsDisabled)},
	{"INSTANCE", "Lsun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNameGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarDataUtility$CalendarFieldValueNameGetter, INSTANCE)},
	{}
};

$MethodInfo _CalendarDataUtility$CalendarFieldValueNameGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CalendarDataUtility$CalendarFieldValueNameGetter::*)()>(&CalendarDataUtility$CalendarFieldValueNameGetter::init$))},
	{"getObject", "(Ljava/util/spi/CalendarNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _CalendarDataUtility$CalendarFieldValueNameGetter_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNameGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarFieldValueNameGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CalendarDataUtility$CalendarFieldValueNameGetter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNameGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_CalendarDataUtility$CalendarFieldValueNameGetter_FieldInfo_,
	_CalendarDataUtility$CalendarFieldValueNameGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/CalendarNameProvider;Ljava/lang/String;>;",
	nullptr,
	_CalendarDataUtility$CalendarFieldValueNameGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarDataUtility"
};

$Object* allocate$CalendarDataUtility$CalendarFieldValueNameGetter($Class* clazz) {
	return $of($alloc(CalendarDataUtility$CalendarFieldValueNameGetter));
}

bool CalendarDataUtility$CalendarFieldValueNameGetter::$assertionsDisabled = false;
CalendarDataUtility$CalendarFieldValueNameGetter* CalendarDataUtility$CalendarFieldValueNameGetter::INSTANCE = nullptr;

void CalendarDataUtility$CalendarFieldValueNameGetter::init$() {
}

$String* CalendarDataUtility$CalendarFieldValueNameGetter::getObject($CalendarNameProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	if (!CalendarDataUtility$CalendarFieldValueNameGetter::$assertionsDisabled && !($nc(params)->length == 4)) {
		$throwNew($AssertionError);
	}
	int32_t field = $nc(($cast($Integer, $nc(params)->get(0))))->intValue();
	int32_t value = $nc(($cast($Integer, params->get(1))))->intValue();
	int32_t style = $nc(($cast($Integer, params->get(2))))->intValue();
	bool javatime = $nc(($cast($Boolean, params->get(3))))->booleanValue();
	if (javatime && $instanceOf($CalendarNameProviderImpl, calendarNameProvider)) {
		$var($String, name, nullptr);
		$assign(name, $nc(($cast($CalendarNameProviderImpl, calendarNameProvider)))->getJavaTimeDisplayName(requestID, field, value, style, locale));
		return name;
	}
	return $nc(calendarNameProvider)->getDisplayName(requestID, field, value, style, locale);
}

$Object* CalendarDataUtility$CalendarFieldValueNameGetter::getObject($LocaleServiceProvider* calendarNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	return $of(this->getObject($cast($CalendarNameProvider, calendarNameProvider), locale, requestID, params));
}

void clinit$CalendarDataUtility$CalendarFieldValueNameGetter($Class* class$) {
	$load($CalendarDataUtility);
	CalendarDataUtility$CalendarFieldValueNameGetter::$assertionsDisabled = !$CalendarDataUtility::class$->desiredAssertionStatus();
	$assignStatic(CalendarDataUtility$CalendarFieldValueNameGetter::INSTANCE, $new(CalendarDataUtility$CalendarFieldValueNameGetter));
}

CalendarDataUtility$CalendarFieldValueNameGetter::CalendarDataUtility$CalendarFieldValueNameGetter() {
}

$Class* CalendarDataUtility$CalendarFieldValueNameGetter::load$($String* name, bool initialize) {
	$loadClass(CalendarDataUtility$CalendarFieldValueNameGetter, name, initialize, &_CalendarDataUtility$CalendarFieldValueNameGetter_ClassInfo_, clinit$CalendarDataUtility$CalendarFieldValueNameGetter, allocate$CalendarDataUtility$CalendarFieldValueNameGetter);
	return class$;
}

$Class* CalendarDataUtility$CalendarFieldValueNameGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun