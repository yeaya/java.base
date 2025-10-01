#include <java/util/spi/CalendarNameProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _CalendarNameProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CalendarNameProvider::*)()>(&CalendarNameProvider::init$))},
	{"getDisplayName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDisplayNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CalendarNameProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.spi.CalendarNameProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_CalendarNameProvider_MethodInfo_
};

$Object* allocate$CalendarNameProvider($Class* clazz) {
	return $of($alloc(CalendarNameProvider));
}

void CalendarNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarNameProvider::CalendarNameProvider() {
}

$Class* CalendarNameProvider::load$($String* name, bool initialize) {
	$loadClass(CalendarNameProvider, name, initialize, &_CalendarNameProvider_ClassInfo_, allocate$CalendarNameProvider);
	return class$;
}

$Class* CalendarNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java