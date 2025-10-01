#include <sun/launcher/LauncherHelper$SizePrefix.h>

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
#include <java/math/BigDecimal.h>
#include <java/math/RoundingMode.h>
#include <sun/launcher/LauncherHelper.h>
#include <jcpp.h>

#undef KILO
#undef HALF_EVEN
#undef MEGA
#undef TERA
#undef GIGA

using $LauncherHelper$SizePrefixArray = $Array<::sun::launcher::LauncherHelper$SizePrefix>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $RoundingMode = ::java::math::RoundingMode;
using $LauncherHelper = ::sun::launcher::LauncherHelper;

namespace sun {
	namespace launcher {

$FieldInfo _LauncherHelper$SizePrefix_FieldInfo_[] = {
	{"KILO", "Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LauncherHelper$SizePrefix, KILO)},
	{"MEGA", "Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LauncherHelper$SizePrefix, MEGA)},
	{"GIGA", "Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LauncherHelper$SizePrefix, GIGA)},
	{"TERA", "Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LauncherHelper$SizePrefix, TERA)},
	{"$VALUES", "[Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LauncherHelper$SizePrefix, $VALUES)},
	{"size", "J", nullptr, 0, $field(LauncherHelper$SizePrefix, size)},
	{"abbrev", "Ljava/lang/String;", nullptr, 0, $field(LauncherHelper$SizePrefix, abbrev)},
	{}
};

$MethodInfo _LauncherHelper$SizePrefix_MethodInfo_[] = {
	{"$values", "()[Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LauncherHelper$SizePrefixArray*(*)()>(&LauncherHelper$SizePrefix::$values))},
	{"<init>", "(Ljava/lang/String;IJLjava/lang/String;)V", "(JLjava/lang/String;)V", $PRIVATE, $method(static_cast<void(LauncherHelper$SizePrefix::*)($String*,int32_t,int64_t,$String*)>(&LauncherHelper$SizePrefix::init$))},
	{"scale", "(JLsun/launcher/LauncherHelper$SizePrefix;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int64_t,LauncherHelper$SizePrefix*)>(&LauncherHelper$SizePrefix::scale))},
	{"scaleValue", "(J)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int64_t)>(&LauncherHelper$SizePrefix::scaleValue))},
	{"valueOf", "(Ljava/lang/String;)Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LauncherHelper$SizePrefix*(*)($String*)>(&LauncherHelper$SizePrefix::valueOf))},
	{"values", "()[Lsun/launcher/LauncherHelper$SizePrefix;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LauncherHelper$SizePrefixArray*(*)()>(&LauncherHelper$SizePrefix::values))},
	{}
};

$InnerClassInfo _LauncherHelper$SizePrefix_InnerClassesInfo_[] = {
	{"sun.launcher.LauncherHelper$SizePrefix", "sun.launcher.LauncherHelper", "SizePrefix", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LauncherHelper$SizePrefix_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.launcher.LauncherHelper$SizePrefix",
	"java.lang.Enum",
	nullptr,
	_LauncherHelper$SizePrefix_FieldInfo_,
	_LauncherHelper$SizePrefix_MethodInfo_,
	"Ljava/lang/Enum<Lsun/launcher/LauncherHelper$SizePrefix;>;",
	nullptr,
	_LauncherHelper$SizePrefix_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.launcher.LauncherHelper"
};

$Object* allocate$LauncherHelper$SizePrefix($Class* clazz) {
	return $of($alloc(LauncherHelper$SizePrefix));
}

LauncherHelper$SizePrefix* LauncherHelper$SizePrefix::KILO = nullptr;
LauncherHelper$SizePrefix* LauncherHelper$SizePrefix::MEGA = nullptr;
LauncherHelper$SizePrefix* LauncherHelper$SizePrefix::GIGA = nullptr;
LauncherHelper$SizePrefix* LauncherHelper$SizePrefix::TERA = nullptr;
$LauncherHelper$SizePrefixArray* LauncherHelper$SizePrefix::$VALUES = nullptr;

$LauncherHelper$SizePrefixArray* LauncherHelper$SizePrefix::$values() {
	$init(LauncherHelper$SizePrefix);
	return $new($LauncherHelper$SizePrefixArray, {
		LauncherHelper$SizePrefix::KILO,
		LauncherHelper$SizePrefix::MEGA,
		LauncherHelper$SizePrefix::GIGA,
		LauncherHelper$SizePrefix::TERA
	});
}

$LauncherHelper$SizePrefixArray* LauncherHelper$SizePrefix::values() {
	$init(LauncherHelper$SizePrefix);
	return $cast($LauncherHelper$SizePrefixArray, LauncherHelper$SizePrefix::$VALUES->clone());
}

LauncherHelper$SizePrefix* LauncherHelper$SizePrefix::valueOf($String* name) {
	$init(LauncherHelper$SizePrefix);
	return $cast(LauncherHelper$SizePrefix, $Enum::valueOf(LauncherHelper$SizePrefix::class$, name));
}

void LauncherHelper$SizePrefix::init$($String* $enum$name, int32_t $enum$ordinal, int64_t size, $String* abbrev) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->size = size;
	$set(this, abbrev, abbrev);
}

$String* LauncherHelper$SizePrefix::scale(int64_t v, LauncherHelper$SizePrefix* prefix) {
	$init(LauncherHelper$SizePrefix);
	$init($RoundingMode);
	return $str({$($nc($($nc($($BigDecimal::valueOf(v)))->divide($($BigDecimal::valueOf($nc(prefix)->size)), 2, $RoundingMode::HALF_EVEN)))->toPlainString()), $nc(prefix)->abbrev});
}

$String* LauncherHelper$SizePrefix::scaleValue(int64_t v) {
	$init(LauncherHelper$SizePrefix);
	if (v < LauncherHelper$SizePrefix::MEGA->size) {
		return scale(v, LauncherHelper$SizePrefix::KILO);
	} else {
		if (v < LauncherHelper$SizePrefix::GIGA->size) {
			return scale(v, LauncherHelper$SizePrefix::MEGA);
		} else {
			if (v < LauncherHelper$SizePrefix::TERA->size) {
				return scale(v, LauncherHelper$SizePrefix::GIGA);
			} else {
				return scale(v, LauncherHelper$SizePrefix::TERA);
			}
		}
	}
}

void clinit$LauncherHelper$SizePrefix($Class* class$) {
	$assignStatic(LauncherHelper$SizePrefix::KILO, $new(LauncherHelper$SizePrefix, "KILO"_s, 0, 1024, "K"_s));
	$assignStatic(LauncherHelper$SizePrefix::MEGA, $new(LauncherHelper$SizePrefix, "MEGA"_s, 1, 1024 * 1024, "M"_s));
	$assignStatic(LauncherHelper$SizePrefix::GIGA, $new(LauncherHelper$SizePrefix, "GIGA"_s, 2, 1024 * 1024 * 1024, "G"_s));
	$assignStatic(LauncherHelper$SizePrefix::TERA, $new(LauncherHelper$SizePrefix, "TERA"_s, 3, (int64_t)1024 * (int64_t)1024 * (int64_t)1024 * (int64_t)1024, "T"_s));
	$assignStatic(LauncherHelper$SizePrefix::$VALUES, LauncherHelper$SizePrefix::$values());
}

LauncherHelper$SizePrefix::LauncherHelper$SizePrefix() {
}

$Class* LauncherHelper$SizePrefix::load$($String* name, bool initialize) {
	$loadClass(LauncherHelper$SizePrefix, name, initialize, &_LauncherHelper$SizePrefix_ClassInfo_, clinit$LauncherHelper$SizePrefix, allocate$LauncherHelper$SizePrefix);
	return class$;
}

$Class* LauncherHelper$SizePrefix::class$ = nullptr;

	} // launcher
} // sun