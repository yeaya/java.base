#include <WalkWithSecurity$ExpectedResult.h>

#include <WalkWithSecurity.h>
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

#undef FAIL
#undef PASS
#undef TOP_ONLY

using $WalkWithSecurity = ::WalkWithSecurity;
using $WalkWithSecurity$ExpectedResultArray = $Array<WalkWithSecurity$ExpectedResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _WalkWithSecurity$ExpectedResult_FieldInfo_[] = {
	{"PASS", "LWalkWithSecurity$ExpectedResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WalkWithSecurity$ExpectedResult, PASS)},
	{"FAIL", "LWalkWithSecurity$ExpectedResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WalkWithSecurity$ExpectedResult, FAIL)},
	{"TOP_ONLY", "LWalkWithSecurity$ExpectedResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(WalkWithSecurity$ExpectedResult, TOP_ONLY)},
	{"$VALUES", "[LWalkWithSecurity$ExpectedResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(WalkWithSecurity$ExpectedResult, $VALUES)},
	{}
};

$MethodInfo _WalkWithSecurity$ExpectedResult_MethodInfo_[] = {
	{"$values", "()[LWalkWithSecurity$ExpectedResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$WalkWithSecurity$ExpectedResultArray*(*)()>(&WalkWithSecurity$ExpectedResult::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(WalkWithSecurity$ExpectedResult::*)($String*,int32_t)>(&WalkWithSecurity$ExpectedResult::init$))},
	{"valueOf", "(Ljava/lang/String;)LWalkWithSecurity$ExpectedResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WalkWithSecurity$ExpectedResult*(*)($String*)>(&WalkWithSecurity$ExpectedResult::valueOf))},
	{"values", "()[LWalkWithSecurity$ExpectedResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WalkWithSecurity$ExpectedResultArray*(*)()>(&WalkWithSecurity$ExpectedResult::values))},
	{}
};

$InnerClassInfo _WalkWithSecurity$ExpectedResult_InnerClassesInfo_[] = {
	{"WalkWithSecurity$ExpectedResult", "WalkWithSecurity", "ExpectedResult", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _WalkWithSecurity$ExpectedResult_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"WalkWithSecurity$ExpectedResult",
	"java.lang.Enum",
	nullptr,
	_WalkWithSecurity$ExpectedResult_FieldInfo_,
	_WalkWithSecurity$ExpectedResult_MethodInfo_,
	"Ljava/lang/Enum<LWalkWithSecurity$ExpectedResult;>;",
	nullptr,
	_WalkWithSecurity$ExpectedResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WalkWithSecurity"
};

$Object* allocate$WalkWithSecurity$ExpectedResult($Class* clazz) {
	return $of($alloc(WalkWithSecurity$ExpectedResult));
}

WalkWithSecurity$ExpectedResult* WalkWithSecurity$ExpectedResult::PASS = nullptr;
WalkWithSecurity$ExpectedResult* WalkWithSecurity$ExpectedResult::FAIL = nullptr;
WalkWithSecurity$ExpectedResult* WalkWithSecurity$ExpectedResult::TOP_ONLY = nullptr;
$WalkWithSecurity$ExpectedResultArray* WalkWithSecurity$ExpectedResult::$VALUES = nullptr;

$WalkWithSecurity$ExpectedResultArray* WalkWithSecurity$ExpectedResult::$values() {
	$init(WalkWithSecurity$ExpectedResult);
	return $new($WalkWithSecurity$ExpectedResultArray, {
		WalkWithSecurity$ExpectedResult::PASS,
		WalkWithSecurity$ExpectedResult::FAIL,
		WalkWithSecurity$ExpectedResult::TOP_ONLY
	});
}

$WalkWithSecurity$ExpectedResultArray* WalkWithSecurity$ExpectedResult::values() {
	$init(WalkWithSecurity$ExpectedResult);
	return $cast($WalkWithSecurity$ExpectedResultArray, WalkWithSecurity$ExpectedResult::$VALUES->clone());
}

WalkWithSecurity$ExpectedResult* WalkWithSecurity$ExpectedResult::valueOf($String* name) {
	$init(WalkWithSecurity$ExpectedResult);
	return $cast(WalkWithSecurity$ExpectedResult, $Enum::valueOf(WalkWithSecurity$ExpectedResult::class$, name));
}

void WalkWithSecurity$ExpectedResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$WalkWithSecurity$ExpectedResult($Class* class$) {
	$assignStatic(WalkWithSecurity$ExpectedResult::PASS, $new(WalkWithSecurity$ExpectedResult, "PASS"_s, 0));
	$assignStatic(WalkWithSecurity$ExpectedResult::FAIL, $new(WalkWithSecurity$ExpectedResult, "FAIL"_s, 1));
	$assignStatic(WalkWithSecurity$ExpectedResult::TOP_ONLY, $new(WalkWithSecurity$ExpectedResult, "TOP_ONLY"_s, 2));
	$assignStatic(WalkWithSecurity$ExpectedResult::$VALUES, WalkWithSecurity$ExpectedResult::$values());
}

WalkWithSecurity$ExpectedResult::WalkWithSecurity$ExpectedResult() {
}

$Class* WalkWithSecurity$ExpectedResult::load$($String* name, bool initialize) {
	$loadClass(WalkWithSecurity$ExpectedResult, name, initialize, &_WalkWithSecurity$ExpectedResult_ClassInfo_, clinit$WalkWithSecurity$ExpectedResult, allocate$WalkWithSecurity$ExpectedResult);
	return class$;
}

$Class* WalkWithSecurity$ExpectedResult::class$ = nullptr;