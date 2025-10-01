#include <LingerOnClose$TestMode.h>

#include <LingerOnClose.h>
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
#include <jcpp.h>

#undef NON_BLOCKING_AND_REGISTERED
#undef NON_BLOCKING
#undef BLOCKING

using $LingerOnClose = ::LingerOnClose;
using $LingerOnClose$TestModeArray = $Array<LingerOnClose$TestMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LingerOnClose$TestMode_FieldInfo_[] = {
	{"BLOCKING", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, BLOCKING)},
	{"NON_BLOCKING", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, NON_BLOCKING)},
	{"NON_BLOCKING_AND_REGISTERED", "LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LingerOnClose$TestMode, NON_BLOCKING_AND_REGISTERED)},
	{"$VALUES", "[LLingerOnClose$TestMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LingerOnClose$TestMode, $VALUES)},
	{}
};

$MethodInfo _LingerOnClose$TestMode_MethodInfo_[] = {
	{"$values", "()[LLingerOnClose$TestMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LingerOnClose$TestModeArray*(*)()>(&LingerOnClose$TestMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LingerOnClose$TestMode::*)($String*,int32_t)>(&LingerOnClose$TestMode::init$))},
	{"valueOf", "(Ljava/lang/String;)LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LingerOnClose$TestMode*(*)($String*)>(&LingerOnClose$TestMode::valueOf))},
	{"values", "()[LLingerOnClose$TestMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LingerOnClose$TestModeArray*(*)()>(&LingerOnClose$TestMode::values))},
	{}
};

$InnerClassInfo _LingerOnClose$TestMode_InnerClassesInfo_[] = {
	{"LingerOnClose$TestMode", "LingerOnClose", "TestMode", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LingerOnClose$TestMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"LingerOnClose$TestMode",
	"java.lang.Enum",
	nullptr,
	_LingerOnClose$TestMode_FieldInfo_,
	_LingerOnClose$TestMode_MethodInfo_,
	"Ljava/lang/Enum<LLingerOnClose$TestMode;>;",
	nullptr,
	_LingerOnClose$TestMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LingerOnClose"
};

$Object* allocate$LingerOnClose$TestMode($Class* clazz) {
	return $of($alloc(LingerOnClose$TestMode));
}

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

void clinit$LingerOnClose$TestMode($Class* class$) {
	$assignStatic(LingerOnClose$TestMode::BLOCKING, $new(LingerOnClose$TestMode, "BLOCKING"_s, 0));
	$assignStatic(LingerOnClose$TestMode::NON_BLOCKING, $new(LingerOnClose$TestMode, "NON_BLOCKING"_s, 1));
	$assignStatic(LingerOnClose$TestMode::NON_BLOCKING_AND_REGISTERED, $new(LingerOnClose$TestMode, "NON_BLOCKING_AND_REGISTERED"_s, 2));
	$assignStatic(LingerOnClose$TestMode::$VALUES, LingerOnClose$TestMode::$values());
}

LingerOnClose$TestMode::LingerOnClose$TestMode() {
}

$Class* LingerOnClose$TestMode::load$($String* name, bool initialize) {
	$loadClass(LingerOnClose$TestMode, name, initialize, &_LingerOnClose$TestMode_ClassInfo_, clinit$LingerOnClose$TestMode, allocate$LingerOnClose$TestMode);
	return class$;
}

$Class* LingerOnClose$TestMode::class$ = nullptr;