#include <java/text/spi/DateFormatProvider.h>

#include <java/text/DateFormat.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

$MethodInfo _DateFormatProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(DateFormatProvider, init$, void)},
	{"getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateFormatProvider, getDateInstance, $DateFormat*, int32_t, $Locale*)},
	{"getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateFormatProvider, getDateTimeInstance, $DateFormat*, int32_t, int32_t, $Locale*)},
	{"getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateFormatProvider, getTimeInstance, $DateFormat*, int32_t, $Locale*)},
	{}
};

$ClassInfo _DateFormatProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.spi.DateFormatProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_DateFormatProvider_MethodInfo_
};

$Object* allocate$DateFormatProvider($Class* clazz) {
	return $of($alloc(DateFormatProvider));
}

void DateFormatProvider::init$() {
	$LocaleServiceProvider::init$();
}

DateFormatProvider::DateFormatProvider() {
}

$Class* DateFormatProvider::load$($String* name, bool initialize) {
	$loadClass(DateFormatProvider, name, initialize, &_DateFormatProvider_ClassInfo_, allocate$DateFormatProvider);
	return class$;
}

$Class* DateFormatProvider::class$ = nullptr;

		} // spi
	} // text
} // java