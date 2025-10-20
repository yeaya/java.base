#include <sun/util/locale/provider/HostLocaleProviderAdapter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormat.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

#undef HOST

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $AuxLocaleProviderAdapter = ::sun::util::locale::provider::AuxLocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _HostLocaleProviderAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HostLocaleProviderAdapter::*)()>(&HostLocaleProviderAdapter::init$))},
	{"findInstalledProvider", "(Ljava/lang/Class;)Ljava/util/spi/LocaleServiceProvider;", "<P:Ljava/util/spi/LocaleServiceProvider;>(Ljava/lang/Class<TP;>;)TP;", $PROTECTED},
	{"getAdapterType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC},
	{"makeIntegerFormatter", "(Ljava/text/DecimalFormat;)Ljava/text/DecimalFormat;", nullptr, $STATIC, $method(static_cast<$DecimalFormat*(*)($DecimalFormat*)>(&HostLocaleProviderAdapter::makeIntegerFormatter))},
	{}
};

$ClassInfo _HostLocaleProviderAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapter",
	"sun.util.locale.provider.AuxLocaleProviderAdapter",
	nullptr,
	nullptr,
	_HostLocaleProviderAdapter_MethodInfo_
};

$Object* allocate$HostLocaleProviderAdapter($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapter));
}

void HostLocaleProviderAdapter::init$() {
	$AuxLocaleProviderAdapter::init$();
}

$LocaleProviderAdapter$Type* HostLocaleProviderAdapter::getAdapterType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::HOST;
}

$LocaleServiceProvider* HostLocaleProviderAdapter::findInstalledProvider($Class* c) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $cast($LocaleServiceProvider, $nc($($Class::forName("sun.util.locale.provider.HostLocaleProviderAdapterImpl"_s)->getMethod($$str({"get"_s, $($nc(c)->getSimpleName())}), ($ClassArray*)nullptr)))->invoke(nullptr, ($ObjectArray*)nullptr));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, ex, $catch());
		return nullptr;
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, ex, $catch());
		return nullptr;
	} catch ($IllegalAccessException&) {
		$var($Exception, ex, $catch());
		$throwNew($ServiceConfigurationError, "Host locale provider cannot be located."_s, ex);
	} catch ($IllegalArgumentException&) {
		$var($Exception, ex, $catch());
		$throwNew($ServiceConfigurationError, "Host locale provider cannot be located."_s, ex);
	} catch ($InvocationTargetException&) {
		$var($Exception, ex, $catch());
		$throwNew($ServiceConfigurationError, "Host locale provider cannot be located."_s, ex);
	}
	$shouldNotReachHere();
}

$DecimalFormat* HostLocaleProviderAdapter::makeIntegerFormatter($DecimalFormat* df) {
	$init(HostLocaleProviderAdapter);
	$nc(df)->setMaximumFractionDigits(0);
	df->setDecimalSeparatorAlwaysShown(false);
	df->setParseIntegerOnly(true);
	return df;
}

HostLocaleProviderAdapter::HostLocaleProviderAdapter() {
}

$Class* HostLocaleProviderAdapter::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapter, name, initialize, &_HostLocaleProviderAdapter_ClassInfo_, allocate$HostLocaleProviderAdapter);
	return class$;
}

$Class* HostLocaleProviderAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun