#include <sun/security/util/Event$ReporterCategory.h>
#include <java/lang/Enum.h>
#include <sun/security/util/Event$Reporter.h>
#include <sun/security/util/Event.h>
#include <jcpp.h>

#undef CRLCHECK
#undef ZIPFILEATTRS

using $Event$ReporterCategoryArray = $Array<::sun::security::util::Event$ReporterCategory>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

Event$ReporterCategory* Event$ReporterCategory::CRLCHECK = nullptr;
Event$ReporterCategory* Event$ReporterCategory::ZIPFILEATTRS = nullptr;
$Event$ReporterCategoryArray* Event$ReporterCategory::$VALUES = nullptr;

$Event$ReporterCategoryArray* Event$ReporterCategory::$values() {
	$init(Event$ReporterCategory);
	return $new($Event$ReporterCategoryArray, {
		Event$ReporterCategory::CRLCHECK,
		Event$ReporterCategory::ZIPFILEATTRS
	});
}

$Event$ReporterCategoryArray* Event$ReporterCategory::values() {
	$init(Event$ReporterCategory);
	return $cast($Event$ReporterCategoryArray, Event$ReporterCategory::$VALUES->clone());
}

Event$ReporterCategory* Event$ReporterCategory::valueOf($String* name) {
	$init(Event$ReporterCategory);
	return $cast(Event$ReporterCategory, $Enum::valueOf(Event$ReporterCategory::class$, name));
}

void Event$ReporterCategory::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Event$ReporterCategory::clinit$($Class* clazz) {
	$assignStatic(Event$ReporterCategory::CRLCHECK, $new(Event$ReporterCategory, "CRLCHECK"_s, 0));
	$assignStatic(Event$ReporterCategory::ZIPFILEATTRS, $new(Event$ReporterCategory, "ZIPFILEATTRS"_s, 1));
	$assignStatic(Event$ReporterCategory::$VALUES, Event$ReporterCategory::$values());
}

Event$ReporterCategory::Event$ReporterCategory() {
}

$Class* Event$ReporterCategory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CRLCHECK", "Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Event$ReporterCategory, CRLCHECK)},
		{"ZIPFILEATTRS", "Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Event$ReporterCategory, ZIPFILEATTRS)},
		{"$VALUES", "[Lsun/security/util/Event$ReporterCategory;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Event$ReporterCategory, $VALUES)},
		{"reporter", "Lsun/security/util/Event$Reporter;", nullptr, $PRIVATE, $field(Event$ReporterCategory, reporter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/util/Event$ReporterCategory;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Event$ReporterCategory, $values, $Event$ReporterCategoryArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Event$ReporterCategory, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC, $staticMethod(Event$ReporterCategory, valueOf, Event$ReporterCategory*, $String*)},
		{"values", "()[Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC, $staticMethod(Event$ReporterCategory, values, $Event$ReporterCategoryArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Event$ReporterCategory", "sun.security.util.Event", "ReporterCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"sun.security.util.Event$ReporterCategory",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/util/Event$ReporterCategory;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.Event"
	};
	$loadClass(Event$ReporterCategory, name, initialize, &classInfo$$, Event$ReporterCategory::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Event$ReporterCategory));
	});
	return class$;
}

$Class* Event$ReporterCategory::class$ = nullptr;

		} // util
	} // security
} // sun