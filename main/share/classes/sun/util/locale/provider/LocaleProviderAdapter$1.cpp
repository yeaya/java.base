#include <sun/util/locale/provider/LocaleProviderAdapter$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <jcpp.h>

#undef CLDR
#undef FALLBACK
#undef HOST
#undef JRE
#undef SPI

using $LocaleProviderAdapter$TypeArray = $Array<::sun::util::locale::provider::LocaleProviderAdapter$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _LocaleProviderAdapter$1_FieldInfo_[] = {
	{"$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocaleProviderAdapter$1, $SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)},
	{}
};

$EnclosingMethodInfo _LocaleProviderAdapter$1_EnclosingMethodInfo_ = {
	"sun.util.locale.provider.LocaleProviderAdapter",
	nullptr,
	nullptr
};

$InnerClassInfo _LocaleProviderAdapter$1_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.LocaleProviderAdapter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LocaleProviderAdapter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.util.locale.provider.LocaleProviderAdapter$1",
	"java.lang.Object",
	nullptr,
	_LocaleProviderAdapter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LocaleProviderAdapter$1_EnclosingMethodInfo_,
	_LocaleProviderAdapter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.LocaleProviderAdapter"
};

$Object* allocate$LocaleProviderAdapter$1($Class* clazz) {
	return $of($alloc(LocaleProviderAdapter$1));
}

$ints* LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type = nullptr;

void clinit$LocaleProviderAdapter$1($Class* class$) {
	$assignStatic(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type, $new($ints, $($LocaleProviderAdapter$Type::values())->length));
	{
		try {
			$nc(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)->set($LocaleProviderAdapter$Type::JRE->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)->set($LocaleProviderAdapter$Type::CLDR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)->set($LocaleProviderAdapter$Type::SPI->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)->set($LocaleProviderAdapter$Type::HOST->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocaleProviderAdapter$1::$SwitchMap$sun$util$locale$provider$LocaleProviderAdapter$Type)->set($LocaleProviderAdapter$Type::FALLBACK->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

LocaleProviderAdapter$1::LocaleProviderAdapter$1() {
}

$Class* LocaleProviderAdapter$1::load$($String* name, bool initialize) {
	$loadClass(LocaleProviderAdapter$1, name, initialize, &_LocaleProviderAdapter$1_ClassInfo_, clinit$LocaleProviderAdapter$1, allocate$LocaleProviderAdapter$1);
	return class$;
}

$Class* LocaleProviderAdapter$1::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun