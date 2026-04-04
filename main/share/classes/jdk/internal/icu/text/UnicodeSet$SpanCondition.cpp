#include <jdk/internal/icu/text/UnicodeSet$SpanCondition.h>
#include <java/lang/Enum.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

#undef CONTAINED
#undef NOT_CONTAINED
#undef SIMPLE

using $UnicodeSet$SpanConditionArray = $Array<::jdk::internal::icu::text::UnicodeSet$SpanCondition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

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

void UnicodeSet$SpanCondition::clinit$($Class* clazz) {
	$assignStatic(UnicodeSet$SpanCondition::NOT_CONTAINED, $new(UnicodeSet$SpanCondition, "NOT_CONTAINED"_s, 0));
	$assignStatic(UnicodeSet$SpanCondition::CONTAINED, $new(UnicodeSet$SpanCondition, "CONTAINED"_s, 1));
	$assignStatic(UnicodeSet$SpanCondition::SIMPLE, $new(UnicodeSet$SpanCondition, "SIMPLE"_s, 2));
	$assignStatic(UnicodeSet$SpanCondition::$VALUES, UnicodeSet$SpanCondition::$values());
}

UnicodeSet$SpanCondition::UnicodeSet$SpanCondition() {
}

$Class* UnicodeSet$SpanCondition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOT_CONTAINED", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, NOT_CONTAINED)},
		{"CONTAINED", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, CONTAINED)},
		{"SIMPLE", "Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeSet$SpanCondition, SIMPLE)},
		{"$VALUES", "[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeSet$SpanCondition, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnicodeSet$SpanCondition, $values, $UnicodeSet$SpanConditionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UnicodeSet$SpanCondition, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnicodeSet$SpanCondition, valueOf, UnicodeSet$SpanCondition*, $String*)},
		{"values", "()[Ljdk/internal/icu/text/UnicodeSet$SpanCondition;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnicodeSet$SpanCondition, values, $UnicodeSet$SpanConditionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.UnicodeSet$SpanCondition", "jdk.internal.icu.text.UnicodeSet", "SpanCondition", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.icu.text.UnicodeSet$SpanCondition",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/icu/text/UnicodeSet$SpanCondition;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.UnicodeSet"
	};
	$loadClass(UnicodeSet$SpanCondition, name, initialize, &classInfo$$, UnicodeSet$SpanCondition::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnicodeSet$SpanCondition));
	});
	return class$;
}

$Class* UnicodeSet$SpanCondition::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk