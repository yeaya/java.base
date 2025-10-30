#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>

#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace text {
		namespace spi {

$MethodInfo _JavaTimeDateTimePatternProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JavaTimeDateTimePatternProvider::*)()>(&JavaTimeDateTimePatternProvider::init$))},
	{"getJavaTimeDateTimePattern", "(IILjava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaTimeDateTimePatternProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.text.spi.JavaTimeDateTimePatternProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_JavaTimeDateTimePatternProvider_MethodInfo_
};

$Object* allocate$JavaTimeDateTimePatternProvider($Class* clazz) {
	return $of($alloc(JavaTimeDateTimePatternProvider));
}

void JavaTimeDateTimePatternProvider::init$() {
	$LocaleServiceProvider::init$();
}

JavaTimeDateTimePatternProvider::JavaTimeDateTimePatternProvider() {
}

$Class* JavaTimeDateTimePatternProvider::load$($String* name, bool initialize) {
	$loadClass(JavaTimeDateTimePatternProvider, name, initialize, &_JavaTimeDateTimePatternProvider_ClassInfo_, allocate$JavaTimeDateTimePatternProvider);
	return class$;
}

$Class* JavaTimeDateTimePatternProvider::class$ = nullptr;

		} // spi
	} // text
} // sun