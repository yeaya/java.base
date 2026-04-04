#include <sun/util/locale/provider/LocaleProviderAdapter$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <jcpp.h>

#undef CLDR
#undef FALLBACK
#undef HOST
#undef JRE
#undef SPI

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$ints* LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type = nullptr;

void LocaleProviderAdapter$1::clinit$($Class* clazz) {
	$assignStatic(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type, $new($ints, $($LocaleProviderAdapter$Type::values())->length));
	{
		try {
			LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type->set($LocaleProviderAdapter$Type::JRE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type->set($LocaleProviderAdapter$Type::CLDR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type->set($LocaleProviderAdapter$Type::SPI->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type->set($LocaleProviderAdapter$Type::HOST->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type->set($LocaleProviderAdapter$Type::FALLBACK->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LocaleProviderAdapter$1::LocaleProviderAdapter$1() {
}

$Class* LocaleProviderAdapter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocaleProviderAdapter$1, $SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.locale.provider.LocaleProviderAdapter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.LocaleProviderAdapter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.util.locale.provider.LocaleProviderAdapter$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.LocaleProviderAdapter"
	};
	$loadClass(LocaleProviderAdapter$1, name, initialize, &classInfo$$, LocaleProviderAdapter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleProviderAdapter$1);
	});
	return class$;
}

$Class* LocaleProviderAdapter$1::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun