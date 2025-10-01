#include <java/util/spi/TimeZoneNameProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef ID

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _TimeZoneNameProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TimeZoneNameProvider::*)()>(&TimeZoneNameProvider::init$))},
	{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TimeZoneNameProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.spi.TimeZoneNameProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_TimeZoneNameProvider_MethodInfo_
};

$Object* allocate$TimeZoneNameProvider($Class* clazz) {
	return $of($alloc(TimeZoneNameProvider));
}

void TimeZoneNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

$String* TimeZoneNameProvider::getGenericDisplayName($String* ID, int32_t style, $Locale* locale) {
	return nullptr;
}

TimeZoneNameProvider::TimeZoneNameProvider() {
}

$Class* TimeZoneNameProvider::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNameProvider, name, initialize, &_TimeZoneNameProvider_ClassInfo_, allocate$TimeZoneNameProvider);
	return class$;
}

$Class* TimeZoneNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java