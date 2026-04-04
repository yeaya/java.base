#include <java/lang/StackWalker$Option.h>
#include <java/lang/Enum.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE
#undef SHOW_HIDDEN_FRAMES
#undef SHOW_REFLECT_FRAMES

using $StackWalker$OptionArray = $Array<::java::lang::StackWalker$Option>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

StackWalker$Option* StackWalker$Option::RETAIN_CLASS_REFERENCE = nullptr;
StackWalker$Option* StackWalker$Option::SHOW_REFLECT_FRAMES = nullptr;
StackWalker$Option* StackWalker$Option::SHOW_HIDDEN_FRAMES = nullptr;
$StackWalker$OptionArray* StackWalker$Option::$VALUES = nullptr;

$StackWalker$OptionArray* StackWalker$Option::$values() {
	$init(StackWalker$Option);
	return $new($StackWalker$OptionArray, {
		StackWalker$Option::RETAIN_CLASS_REFERENCE,
		StackWalker$Option::SHOW_REFLECT_FRAMES,
		StackWalker$Option::SHOW_HIDDEN_FRAMES
	});
}

$StackWalker$OptionArray* StackWalker$Option::values() {
	$init(StackWalker$Option);
	return $cast($StackWalker$OptionArray, StackWalker$Option::$VALUES->clone());
}

StackWalker$Option* StackWalker$Option::valueOf($String* name) {
	$init(StackWalker$Option);
	return $cast(StackWalker$Option, $Enum::valueOf(StackWalker$Option::class$, name));
}

void StackWalker$Option::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void StackWalker$Option::clinit$($Class* clazz) {
	$assignStatic(StackWalker$Option::RETAIN_CLASS_REFERENCE, $new(StackWalker$Option, "RETAIN_CLASS_REFERENCE"_s, 0));
	$assignStatic(StackWalker$Option::SHOW_REFLECT_FRAMES, $new(StackWalker$Option, "SHOW_REFLECT_FRAMES"_s, 1));
	$assignStatic(StackWalker$Option::SHOW_HIDDEN_FRAMES, $new(StackWalker$Option, "SHOW_HIDDEN_FRAMES"_s, 2));
	$assignStatic(StackWalker$Option::$VALUES, StackWalker$Option::$values());
}

StackWalker$Option::StackWalker$Option() {
}

$Class* StackWalker$Option::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RETAIN_CLASS_REFERENCE", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, RETAIN_CLASS_REFERENCE)},
		{"SHOW_REFLECT_FRAMES", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, SHOW_REFLECT_FRAMES)},
		{"SHOW_HIDDEN_FRAMES", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, SHOW_HIDDEN_FRAMES)},
		{"$VALUES", "[Ljava/lang/StackWalker$Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StackWalker$Option, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/StackWalker$Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(StackWalker$Option, $values, $StackWalker$OptionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(StackWalker$Option, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC, $staticMethod(StackWalker$Option, valueOf, StackWalker$Option*, $String*)},
		{"values", "()[Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC, $staticMethod(StackWalker$Option, values, $StackWalker$OptionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StackWalker$Option", "java.lang.StackWalker", "Option", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.lang.StackWalker$Option",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/StackWalker$Option;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.StackWalker"
	};
	$loadClass(StackWalker$Option, name, initialize, &classInfo$$, StackWalker$Option::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(StackWalker$Option));
	});
	return class$;
}

$Class* StackWalker$Option::class$ = nullptr;

	} // lang
} // java