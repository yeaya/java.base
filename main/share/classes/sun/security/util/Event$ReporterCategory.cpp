#include <sun/security/util/Event$ReporterCategory.h>

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
using $Event = ::sun::security::util::Event;
using $Event$Reporter = ::sun::security::util::Event$Reporter;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _Event$ReporterCategory_FieldInfo_[] = {
	{"CRLCHECK", "Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Event$ReporterCategory, CRLCHECK)},
	{"ZIPFILEATTRS", "Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Event$ReporterCategory, ZIPFILEATTRS)},
	{"$VALUES", "[Lsun/security/util/Event$ReporterCategory;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Event$ReporterCategory, $VALUES)},
	{"reporter", "Lsun/security/util/Event$Reporter;", nullptr, $PRIVATE, $field(Event$ReporterCategory, reporter)},
	{}
};

$MethodInfo _Event$ReporterCategory_MethodInfo_[] = {
	{"$values", "()[Lsun/security/util/Event$ReporterCategory;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Event$ReporterCategoryArray*(*)()>(&Event$ReporterCategory::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Event$ReporterCategory::*)($String*,int32_t)>(&Event$ReporterCategory::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Event$ReporterCategory*(*)($String*)>(&Event$ReporterCategory::valueOf))},
	{"values", "()[Lsun/security/util/Event$ReporterCategory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Event$ReporterCategoryArray*(*)()>(&Event$ReporterCategory::values))},
	{}
};

$InnerClassInfo _Event$ReporterCategory_InnerClassesInfo_[] = {
	{"sun.security.util.Event$ReporterCategory", "sun.security.util.Event", "ReporterCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Event$ReporterCategory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.Event$ReporterCategory",
	"java.lang.Enum",
	nullptr,
	_Event$ReporterCategory_FieldInfo_,
	_Event$ReporterCategory_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/util/Event$ReporterCategory;>;",
	nullptr,
	_Event$ReporterCategory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.Event"
};

$Object* allocate$Event$ReporterCategory($Class* clazz) {
	return $of($alloc(Event$ReporterCategory));
}

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

void clinit$Event$ReporterCategory($Class* class$) {
	$assignStatic(Event$ReporterCategory::CRLCHECK, $new(Event$ReporterCategory, "CRLCHECK"_s, 0));
	$assignStatic(Event$ReporterCategory::ZIPFILEATTRS, $new(Event$ReporterCategory, "ZIPFILEATTRS"_s, 1));
	$assignStatic(Event$ReporterCategory::$VALUES, Event$ReporterCategory::$values());
}

Event$ReporterCategory::Event$ReporterCategory() {
}

$Class* Event$ReporterCategory::load$($String* name, bool initialize) {
	$loadClass(Event$ReporterCategory, name, initialize, &_Event$ReporterCategory_ClassInfo_, clinit$Event$ReporterCategory, allocate$Event$ReporterCategory);
	return class$;
}

$Class* Event$ReporterCategory::class$ = nullptr;

		} // util
	} // security
} // sun