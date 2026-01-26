#include <java/lang/StackStreamFactory$WalkerState.h>

#include <java/lang/Enum.h>
#include <java/lang/StackStreamFactory.h>
#include <jcpp.h>

#undef CLOSED
#undef NEW
#undef OPEN

using $StackStreamFactory$WalkerStateArray = $Array<::java::lang::StackStreamFactory$WalkerState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$WalkerState_FieldInfo_[] = {
	{"NEW", "Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackStreamFactory$WalkerState, NEW)},
	{"OPEN", "Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackStreamFactory$WalkerState, OPEN)},
	{"CLOSED", "Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackStreamFactory$WalkerState, CLOSED)},
	{"$VALUES", "[Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$WalkerState, $VALUES)},
	{}
};

$MethodInfo _StackStreamFactory$WalkerState_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(StackStreamFactory$WalkerState, $values, $StackStreamFactory$WalkerStateArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(StackStreamFactory$WalkerState, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamFactory$WalkerState, valueOf, StackStreamFactory$WalkerState*, $String*)},
	{"values", "()[Ljava/lang/StackStreamFactory$WalkerState;", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamFactory$WalkerState, values, $StackStreamFactory$WalkerStateArray*)},
	{}
};

$InnerClassInfo _StackStreamFactory$WalkerState_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$WalkerState", "java.lang.StackStreamFactory", "WalkerState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StackStreamFactory$WalkerState_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.StackStreamFactory$WalkerState",
	"java.lang.Enum",
	nullptr,
	_StackStreamFactory$WalkerState_FieldInfo_,
	_StackStreamFactory$WalkerState_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/StackStreamFactory$WalkerState;>;",
	nullptr,
	_StackStreamFactory$WalkerState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$WalkerState($Class* clazz) {
	return $of($alloc(StackStreamFactory$WalkerState));
}

StackStreamFactory$WalkerState* StackStreamFactory$WalkerState::NEW = nullptr;
StackStreamFactory$WalkerState* StackStreamFactory$WalkerState::OPEN = nullptr;
StackStreamFactory$WalkerState* StackStreamFactory$WalkerState::CLOSED = nullptr;
$StackStreamFactory$WalkerStateArray* StackStreamFactory$WalkerState::$VALUES = nullptr;

$StackStreamFactory$WalkerStateArray* StackStreamFactory$WalkerState::$values() {
	$init(StackStreamFactory$WalkerState);
	return $new($StackStreamFactory$WalkerStateArray, {
		StackStreamFactory$WalkerState::NEW,
		StackStreamFactory$WalkerState::OPEN,
		StackStreamFactory$WalkerState::CLOSED
	});
}

$StackStreamFactory$WalkerStateArray* StackStreamFactory$WalkerState::values() {
	$init(StackStreamFactory$WalkerState);
	return $cast($StackStreamFactory$WalkerStateArray, StackStreamFactory$WalkerState::$VALUES->clone());
}

StackStreamFactory$WalkerState* StackStreamFactory$WalkerState::valueOf($String* name) {
	$init(StackStreamFactory$WalkerState);
	return $cast(StackStreamFactory$WalkerState, $Enum::valueOf(StackStreamFactory$WalkerState::class$, name));
}

void StackStreamFactory$WalkerState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StackStreamFactory$WalkerState($Class* class$) {
	$assignStatic(StackStreamFactory$WalkerState::NEW, $new(StackStreamFactory$WalkerState, "NEW"_s, 0));
	$assignStatic(StackStreamFactory$WalkerState::OPEN, $new(StackStreamFactory$WalkerState, "OPEN"_s, 1));
	$assignStatic(StackStreamFactory$WalkerState::CLOSED, $new(StackStreamFactory$WalkerState, "CLOSED"_s, 2));
	$assignStatic(StackStreamFactory$WalkerState::$VALUES, StackStreamFactory$WalkerState::$values());
}

StackStreamFactory$WalkerState::StackStreamFactory$WalkerState() {
}

$Class* StackStreamFactory$WalkerState::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$WalkerState, name, initialize, &_StackStreamFactory$WalkerState_ClassInfo_, clinit$StackStreamFactory$WalkerState, allocate$StackStreamFactory$WalkerState);
	return class$;
}

$Class* StackStreamFactory$WalkerState::class$ = nullptr;

	} // lang
} // java