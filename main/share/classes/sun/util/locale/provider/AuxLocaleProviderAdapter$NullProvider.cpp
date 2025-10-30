#include <sun/util/locale/provider/AuxLocaleProviderAdapter$NullProvider.h>

#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $AuxLocaleProviderAdapter = ::sun::util::locale::provider::AuxLocaleProviderAdapter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _AuxLocaleProviderAdapter$NullProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AuxLocaleProviderAdapter$NullProvider::*)()>(&AuxLocaleProviderAdapter$NullProvider::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AuxLocaleProviderAdapter$NullProvider_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider", "sun.util.locale.provider.AuxLocaleProviderAdapter", "NullProvider", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AuxLocaleProviderAdapter$NullProvider_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_AuxLocaleProviderAdapter$NullProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AuxLocaleProviderAdapter$NullProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.AuxLocaleProviderAdapter"
};

$Object* allocate$AuxLocaleProviderAdapter$NullProvider($Class* clazz) {
	return $of($alloc(AuxLocaleProviderAdapter$NullProvider));
}

void AuxLocaleProviderAdapter$NullProvider::init$() {
	$LocaleServiceProvider::init$();
}

$LocaleArray* AuxLocaleProviderAdapter$NullProvider::getAvailableLocales() {
	return $new($LocaleArray, 0);
}

AuxLocaleProviderAdapter$NullProvider::AuxLocaleProviderAdapter$NullProvider() {
}

$Class* AuxLocaleProviderAdapter$NullProvider::load$($String* name, bool initialize) {
	$loadClass(AuxLocaleProviderAdapter$NullProvider, name, initialize, &_AuxLocaleProviderAdapter$NullProvider_ClassInfo_, allocate$AuxLocaleProviderAdapter$NullProvider);
	return class$;
}

$Class* AuxLocaleProviderAdapter$NullProvider::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun