#include <jdk/internal/icu/text/UnicodeSet$SpanCondition.h>

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
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

#undef NOT_CONTAINED
#undef SIMPLE
#undef CONTAINED

using $UnicodeSet$SpanConditionArray = $Array<::jdk::internal::icu::text::UnicodeSet$SpanCondition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _UnicodeSet$SpanCondition_FieldInfo_[] = {
	{"NOT_CONTAINED", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, NOT_CONTAINED)},
	{"CONTAINED", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, CONTAINED)},
	{"SIMPLE", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, SIMPLE)},
	{"$VALUES", "[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeSet$SpanCondition, $VALUES)},
	{}
};

$MethodInfo _UnicodeSet$SpanCondition_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UnicodeSet$SpanConditionArray*(*)()>(&UnicodeSet$SpanCondition::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(UnicodeSet$SpanCondition::*)($String*,int32_t)>(&UnicodeSet$SpanCondition::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UnicodeSet$SpanCondition*(*)($String*)>(&UnicodeSet$SpanCondition::valueOf))},
	{"values", "()[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UnicodeSet$SpanConditionArray*(*)()>(&UnicodeSet$SpanCondition::values))},
	{}
};

$InnerClassInfo _UnicodeSet$SpanCondition_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.UnicodeSet$SpanCondition", "jdk.internal.icu.text.UnicodeSet", "SpanCondition", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UnicodeSet$SpanCondition_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.icu.text.UnicodeSet$SpanCondition",
	"java.lang.Enum",
	nullptr,
	_UnicodeSet$SpanCondition_FieldInfo_,
	_UnicodeSet$SpanCondition_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/icu/text/UnicodeSet$SpanCondition;>;",
	nullptr,
	_UnicodeSet$SpanCondition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.UnicodeSet"
};

$Object* allocate$UnicodeSet$SpanCondition($Class* clazz) {
	return $of($alloc(UnicodeSet$SpanCondition));
}


UnicodeSet$SpanCondition* UnicodeSet$SpanCondition::NOT_CONTAINED = nullptr;

UnicodeSet$SpanCondition* UnicodeSet$SpanCondition::CONTAINED = nullptr;

UnicodeSet$SpanCondition* UnicodeSet$SpanCondition::SIMPLE = nullptr;
$UnicodeSet$SpanConditionArray* UnicodeSet$SpanCondition::$VALUES = nullptr;

$UnicodeSet$SpanConditionArray* UnicodeSet$SpanCondition::$values() {
	$init(UnicodeSet$SpanCondition);
	return $new($UnicodeSet$SpanConditionArray, {
		UnicodeSet$SpanCondition::NOT_CONTAINED,
		UnicodeSet$SpanCondition::CONTAINED,
		UnicodeSet$SpanCondition::SIMPLE
	});
}

$UnicodeSet$SpanConditionArray* UnicodeSet$SpanCondition::values() {
	$init(UnicodeSet$SpanCondition);
	return $cast($UnicodeSet$SpanConditionArray, UnicodeSet$SpanCondition::$VALUES->clone());
}

UnicodeSet$SpanCondition* UnicodeSet$SpanCondition::valueOf($String* name) {
	$init(UnicodeSet$SpanCondition);
	return $cast(UnicodeSet$SpanCondition, $Enum::valueOf(UnicodeSet$SpanCondition::class$, name));
}

void UnicodeSet$SpanCondition::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$UnicodeSet$SpanCondition($Class* class$) {
	$assignStatic(UnicodeSet$SpanCondition::NOT_CONTAINED, $new(UnicodeSet$SpanCondition, "NOT_CONTAINED"_s, 0));
	$assignStatic(UnicodeSet$SpanCondition::CONTAINED, $new(UnicodeSet$SpanCondition, "CONTAINED"_s, 1));
	$assignStatic(UnicodeSet$SpanCondition::SIMPLE, $new(UnicodeSet$SpanCondition, "SIMPLE"_s, 2));
	$assignStatic(UnicodeSet$SpanCondition::$VALUES, UnicodeSet$SpanCondition::$values());
}

UnicodeSet$SpanCondition::UnicodeSet$SpanCondition() {
}

$Class* UnicodeSet$SpanCondition::load$($String* name, bool initialize) {
	$loadClass(UnicodeSet$SpanCondition, name, initialize, &_UnicodeSet$SpanCondition_ClassInfo_, clinit$UnicodeSet$SpanCondition, allocate$UnicodeSet$SpanCondition);
	return class$;
}

$Class* UnicodeSet$SpanCondition::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk