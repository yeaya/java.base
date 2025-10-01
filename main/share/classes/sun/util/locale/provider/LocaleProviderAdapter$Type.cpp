#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <jcpp.h>

#undef FALLBACK
#undef CLDR
#undef HOST
#undef JRE
#undef CLASSNAME
#undef SPI
#undef UTIL_RESOURCES_PACKAGE
#undef TEXT_RESOURCES_PACKAGE

using $LocaleProviderAdapter$TypeArray = $Array<::sun::util::locale::provider::LocaleProviderAdapter$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _LocaleProviderAdapter$Type_FieldInfo_[] = {
	{"JRE", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LocaleProviderAdapter$Type, JRE)},
	{"CLDR", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LocaleProviderAdapter$Type, CLDR)},
	{"SPI", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LocaleProviderAdapter$Type, SPI)},
	{"HOST", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LocaleProviderAdapter$Type, HOST)},
	{"FALLBACK", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LocaleProviderAdapter$Type, FALLBACK)},
	{"$VALUES", "[Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LocaleProviderAdapter$Type, $VALUES)},
	{"CLASSNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocaleProviderAdapter$Type, CLASSNAME)},
	{"UTIL_RESOURCES_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocaleProviderAdapter$Type, UTIL_RESOURCES_PACKAGE)},
	{"TEXT_RESOURCES_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocaleProviderAdapter$Type, TEXT_RESOURCES_PACKAGE)},
	{}
};

$MethodInfo _LocaleProviderAdapter$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LocaleProviderAdapter$TypeArray*(*)()>(&LocaleProviderAdapter$Type::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(LocaleProviderAdapter$Type::*)($String*,int32_t,$String*)>(&LocaleProviderAdapter$Type::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(LocaleProviderAdapter$Type::*)($String*,int32_t,$String*,$String*,$String*)>(&LocaleProviderAdapter$Type::init$))},
	{"getAdapterClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LocaleProviderAdapter$Type::*)()>(&LocaleProviderAdapter$Type::getAdapterClassName))},
	{"getTextResourcesPackage", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LocaleProviderAdapter$Type::*)()>(&LocaleProviderAdapter$Type::getTextResourcesPackage))},
	{"getUtilResourcesPackage", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LocaleProviderAdapter$Type::*)()>(&LocaleProviderAdapter$Type::getUtilResourcesPackage))},
	{"valueOf", "(Ljava/lang/String;)Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocaleProviderAdapter$Type*(*)($String*)>(&LocaleProviderAdapter$Type::valueOf))},
	{"values", "()[Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LocaleProviderAdapter$TypeArray*(*)()>(&LocaleProviderAdapter$Type::values))},
	{}
};

$InnerClassInfo _LocaleProviderAdapter$Type_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.LocaleProviderAdapter$Type", "sun.util.locale.provider.LocaleProviderAdapter", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LocaleProviderAdapter$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.util.locale.provider.LocaleProviderAdapter$Type",
	"java.lang.Enum",
	nullptr,
	_LocaleProviderAdapter$Type_FieldInfo_,
	_LocaleProviderAdapter$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/util/locale/provider/LocaleProviderAdapter$Type;>;",
	nullptr,
	_LocaleProviderAdapter$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.LocaleProviderAdapter"
};

$Object* allocate$LocaleProviderAdapter$Type($Class* clazz) {
	return $of($alloc(LocaleProviderAdapter$Type));
}

LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::JRE = nullptr;
LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::CLDR = nullptr;
LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::SPI = nullptr;
LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::HOST = nullptr;
LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::FALLBACK = nullptr;
$LocaleProviderAdapter$TypeArray* LocaleProviderAdapter$Type::$VALUES = nullptr;

$LocaleProviderAdapter$TypeArray* LocaleProviderAdapter$Type::$values() {
	$init(LocaleProviderAdapter$Type);
	return $new($LocaleProviderAdapter$TypeArray, {
		LocaleProviderAdapter$Type::JRE,
		LocaleProviderAdapter$Type::CLDR,
		LocaleProviderAdapter$Type::SPI,
		LocaleProviderAdapter$Type::HOST,
		LocaleProviderAdapter$Type::FALLBACK
	});
}

$LocaleProviderAdapter$TypeArray* LocaleProviderAdapter$Type::values() {
	$init(LocaleProviderAdapter$Type);
	return $cast($LocaleProviderAdapter$TypeArray, LocaleProviderAdapter$Type::$VALUES->clone());
}

LocaleProviderAdapter$Type* LocaleProviderAdapter$Type::valueOf($String* name) {
	$init(LocaleProviderAdapter$Type);
	return $cast(LocaleProviderAdapter$Type, $Enum::valueOf(LocaleProviderAdapter$Type::class$, name));
}

void LocaleProviderAdapter$Type::init$($String* $enum$name, int32_t $enum$ordinal, $String* className) {
	LocaleProviderAdapter$Type::init$($enum$name, $enum$ordinal, className, nullptr, nullptr);
}

void LocaleProviderAdapter$Type::init$($String* $enum$name, int32_t $enum$ordinal, $String* className, $String* util, $String* text) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, CLASSNAME, className);
	$set(this, UTIL_RESOURCES_PACKAGE, util);
	$set(this, TEXT_RESOURCES_PACKAGE, text);
}

$String* LocaleProviderAdapter$Type::getAdapterClassName() {
	return this->CLASSNAME;
}

$String* LocaleProviderAdapter$Type::getUtilResourcesPackage() {
	return this->UTIL_RESOURCES_PACKAGE;
}

$String* LocaleProviderAdapter$Type::getTextResourcesPackage() {
	return this->TEXT_RESOURCES_PACKAGE;
}

void clinit$LocaleProviderAdapter$Type($Class* class$) {
	$assignStatic(LocaleProviderAdapter$Type::JRE, $new(LocaleProviderAdapter$Type, "JRE"_s, 0, "sun.util.locale.provider.JRELocaleProviderAdapter"_s, "sun.util.resources"_s, "sun.text.resources"_s));
	$assignStatic(LocaleProviderAdapter$Type::CLDR, $new(LocaleProviderAdapter$Type, "CLDR"_s, 1, "sun.util.cldr.CLDRLocaleProviderAdapter"_s, "sun.util.resources.cldr"_s, "sun.text.resources.cldr"_s));
	$assignStatic(LocaleProviderAdapter$Type::SPI, $new(LocaleProviderAdapter$Type, "SPI"_s, 2, "sun.util.locale.provider.SPILocaleProviderAdapter"_s));
	$assignStatic(LocaleProviderAdapter$Type::HOST, $new(LocaleProviderAdapter$Type, "HOST"_s, 3, "sun.util.locale.provider.HostLocaleProviderAdapter"_s));
	$assignStatic(LocaleProviderAdapter$Type::FALLBACK, $new(LocaleProviderAdapter$Type, "FALLBACK"_s, 4, "sun.util.locale.provider.FallbackLocaleProviderAdapter"_s, "sun.util.resources"_s, "sun.text.resources"_s));
	$assignStatic(LocaleProviderAdapter$Type::$VALUES, LocaleProviderAdapter$Type::$values());
}

LocaleProviderAdapter$Type::LocaleProviderAdapter$Type() {
}

$Class* LocaleProviderAdapter$Type::load$($String* name, bool initialize) {
	$loadClass(LocaleProviderAdapter$Type, name, initialize, &_LocaleProviderAdapter$Type_ClassInfo_, clinit$LocaleProviderAdapter$Type, allocate$LocaleProviderAdapter$Type);
	return class$;
}

$Class* LocaleProviderAdapter$Type::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun