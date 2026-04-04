#include <LingerOnClose$TestMode.h>
#include <LingerOnClose.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCKING
#undef NON_BLOCKING
#undef NON_BLOCKING_AND_REGISTERED

using $LingerOnClose$TestModeArray = $Array<LingerOnClose$TestMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

LingerOnClose$TestMode* LingerOnClose$TestMode::BLOCKING = nullptr;
LingerOnClose$TestMode* LingerOnClose$TestMode::NON_BLOCKING = nullptr;
LingerOnClose$TestMode* LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED = nullptr;
$LingerOnClose$TestModeArray* LingerOnClose$TestMode::$VALUES = nullptr;

$LingerOnClose$TestModeArray* LingerOnClose$TestMode::$values() {
	$init(LingerOnClose$TestMode);
	return $new($LingerOnClose$TestModeArray, {
		LingerOnClose$TestMode::BLOCKING,
		LingerOnClose$TestMode::NON_BLOCKING,
		LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED
	});
}

$LingerOnClose$TestModeArray* LingerOnClose$TestMode::values() {
	$init(LingerOnClose$TestMode);
	return $cast($LingerOnClose$TestModeArray, LingerOnClose$TestMode::$VALUES->clone());
}

LingerOnClose$TestMode* LingerOnClose$TestMode::valueOf($String* name) {
	$init(LingerOnClose$TestMode);
	return $cast(LingerOnClose$TestMode, $Enum::valueOf(LingerOnClose$TestMode::class$, name));
}

void LingerOnClose$TestMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void LingerOnClose$TestMode::clinit$($Class* clazz) {
	$assignStatic(LingerOnClose$TestMode::BLOCKING, $new(LingerOnClose$TestMode, "BLOCKING"_s, 0));
	$assignStatic(LingerOnClose$TestMode::NON_BLOCKING, $new(LingerOnClose$TestMode, "NON_BLOCKING"_s, 1));
	$assignStatic(LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED, $new(LingerOnClose$TestMode, "NON_BLOCKING_AND_REGISTERED"_s, 2));
	$assignStatic(LingerOnClose$TestMode::$VALUES, LingerOnClose$TestMode::$values());
}

LingerOnClose$TestMode::LingerOnClose$TestMode() {
}

$Class* LingerOnClose$TestMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOCKING", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, BLOCKING)},
		{"NON_BLOCKING", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, NON_BLOCKING)},
		{"NON_BLOCKING_AND_REGISTERED", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, NON_BLOCKING_AND_REGISTERED)},
		{"$VALUES", "[LLingerOnClose$TestMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LingerOnClose$TestMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LLingerOnClose$TestMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LingerOnClose$TestMode, $values, $LingerOnClose$TestModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(LingerOnClose$TestMode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(LingerOnClose$TestMode, valueOf, LingerOnClose$TestMode*, $String*)},
		{"values", "()[LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(LingerOnClose$TestMode, values, $LingerOnClose$TestModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LingerOnClose$TestMode", "LingerOnClose", "TestMode", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"LingerOnClose$TestMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LLingerOnClose$TestMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LingerOnClose"
	};
	$loadClass(LingerOnClose$TestMode, name, initialize, &classInfo$$, LingerOnClose$TestMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LingerOnClose$TestMode));
	});
	return class$;
}

$Class* LingerOnClose$TestMode::class$ = nullptr;