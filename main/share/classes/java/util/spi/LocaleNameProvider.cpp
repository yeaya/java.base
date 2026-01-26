#include <java/util/spi/LocaleNameProvider.h>

#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

$MethodInfo _LocaleNameProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(LocaleNameProvider, init$, void)},
	{"getDisplayCountry", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LocaleNameProvider, getDisplayCountry, $String*, $String*, $Locale*)},
	{"getDisplayLanguage", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LocaleNameProvider, getDisplayLanguage, $String*, $String*, $Locale*)},
	{"getDisplayScript", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProvider, getDisplayScript, $String*, $String*, $Locale*)},
	{"getDisplayUnicodeExtensionKey", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProvider, getDisplayUnicodeExtensionKey, $String*, $String*, $Locale*)},
	{"getDisplayUnicodeExtensionType", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocaleNameProvider, getDisplayUnicodeExtensionType, $String*, $String*, $String*, $Locale*)},
	{"getDisplayVariant", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LocaleNameProvider, getDisplayVariant, $String*, $String*, $Locale*)},
	{}
};

$ClassInfo _LocaleNameProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.spi.LocaleNameProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_LocaleNameProvider_MethodInfo_
};

$Object* allocate$LocaleNameProvider($Class* clazz) {
	return $of($alloc(LocaleNameProvider));
}

void LocaleNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

$String* LocaleNameProvider::getDisplayScript($String* scriptCode, $Locale* locale) {
	return nullptr;
}

$String* LocaleNameProvider::getDisplayUnicodeExtensionKey($String* key, $Locale* locale) {
	$Objects::requireNonNull(key);
	$Objects::requireNonNull(locale);
	return nullptr;
}

$String* LocaleNameProvider::getDisplayUnicodeExtensionType($String* type, $String* key, $Locale* locale) {
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(key);
	$Objects::requireNonNull(locale);
	return nullptr;
}

LocaleNameProvider::LocaleNameProvider() {
}

$Class* LocaleNameProvider::load$($String* name, bool initialize) {
	$loadClass(LocaleNameProvider, name, initialize, &_LocaleNameProvider_ClassInfo_, allocate$LocaleNameProvider);
	return class$;
}

$Class* LocaleNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java