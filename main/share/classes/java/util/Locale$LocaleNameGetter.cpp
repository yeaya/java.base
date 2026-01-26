#include <java/util/Locale$LocaleNameGetter.h>

#include <java/lang/AssertionError.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {

$FieldInfo _Locale$LocaleNameGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$LocaleNameGetter, $assertionsDisabled)},
	{"INSTANCE", "Ljava/util/Locale$LocaleNameGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Locale$LocaleNameGetter, INSTANCE)},
	{}
};

$MethodInfo _Locale$LocaleNameGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Locale$LocaleNameGetter, init$, void)},
	{"getObject", "(Ljava/util/spi/LocaleNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Locale$LocaleNameGetter, getObject, $String*, $LocaleNameProvider*, $Locale*, $String*, $ObjectArray*)},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Locale$LocaleNameGetter, getObject, $Object*, $LocaleServiceProvider*, $Locale*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _Locale$LocaleNameGetter_InnerClassesInfo_[] = {
	{"java.util.Locale$LocaleNameGetter", "java.util.Locale", "LocaleNameGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Locale$LocaleNameGetter_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Locale$LocaleNameGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_Locale$LocaleNameGetter_FieldInfo_,
	_Locale$LocaleNameGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/LocaleNameProvider;Ljava/lang/String;>;",
	nullptr,
	_Locale$LocaleNameGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$LocaleNameGetter($Class* clazz) {
	return $of($alloc(Locale$LocaleNameGetter));
}

bool Locale$LocaleNameGetter::$assertionsDisabled = false;
Locale$LocaleNameGetter* Locale$LocaleNameGetter::INSTANCE = nullptr;

void Locale$LocaleNameGetter::init$() {
}

$String* Locale$LocaleNameGetter::getObject($LocaleNameProvider* localeNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (!Locale$LocaleNameGetter::$assertionsDisabled && !($nc(params)->length == 3)) {
		$throwNew($AssertionError);
	}
	int32_t type = $nc(($cast($Integer, $nc(params)->get(0))))->intValue();
	$var($String, code, $cast($String, params->get(1)));
	$var($String, cat, $cast($String, params->get(2)));
	switch (type) {
	case 0:
		{
			return $nc(localeNameProvider)->getDisplayLanguage(code, locale);
		}
	case 1:
		{
			return $nc(localeNameProvider)->getDisplayCountry(code, locale);
		}
	case 2:
		{
			return $nc(localeNameProvider)->getDisplayVariant(code, locale);
		}
	case 3:
		{
			return $nc(localeNameProvider)->getDisplayScript(code, locale);
		}
	case 4:
		{
			return $nc(localeNameProvider)->getDisplayUnicodeExtensionKey(code, locale);
		}
	case 5:
		{
			return $nc(localeNameProvider)->getDisplayUnicodeExtensionType(code, cat, locale);
		}
	default:
		{
			if (!Locale$LocaleNameGetter::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	return nullptr;
}

$Object* Locale$LocaleNameGetter::getObject($LocaleServiceProvider* localeNameProvider, $Locale* locale, $String* key, $ObjectArray* params) {
	return $of(this->getObject($cast($LocaleNameProvider, localeNameProvider), locale, key, params));
}

void clinit$Locale$LocaleNameGetter($Class* class$) {
	$load($Locale);
	Locale$LocaleNameGetter::$assertionsDisabled = !$Locale::class$->desiredAssertionStatus();
	$assignStatic(Locale$LocaleNameGetter::INSTANCE, $new(Locale$LocaleNameGetter));
}

Locale$LocaleNameGetter::Locale$LocaleNameGetter() {
}

$Class* Locale$LocaleNameGetter::load$($String* name, bool initialize) {
	$loadClass(Locale$LocaleNameGetter, name, initialize, &_Locale$LocaleNameGetter_ClassInfo_, clinit$Locale$LocaleNameGetter, allocate$Locale$LocaleNameGetter);
	return class$;
}

$Class* Locale$LocaleNameGetter::class$ = nullptr;

	} // util
} // java