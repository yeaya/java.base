#include <java/lang/Thread$State.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCKED
#undef NEW
#undef RUNNABLE
#undef TERMINATED
#undef TIMED_WAITING
#undef WAITING

using $Thread$StateArray = $Array<::java::lang::Thread$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Thread$State_FieldInfo_[] = {
	{"NEW", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, NEW)},
	{"RUNNABLE", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, RUNNABLE)},
	{"BLOCKED", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, BLOCKED)},
	{"WAITING", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, WAITING)},
	{"TIMED_WAITING", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, TIMED_WAITING)},
	{"TERMINATED", "Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Thread$State, TERMINATED)},
	{"$VALUES", "[Ljava/lang/Thread$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Thread$State, $VALUES)},
	{}
};

$MethodInfo _Thread$State_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/Thread$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Thread$State, $values, $Thread$StateArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Thread$State, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(Thread$State, valueOf, Thread$State*, $String*)},
	{"values", "()[Ljava/lang/Thread$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(Thread$State, values, $Thread$StateArray*)},
	{}
};

$InnerClassInfo _Thread$State_InnerClassesInfo_[] = {
	{"java.lang.Thread$State", "java.lang.Thread", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Thread$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.Thread$State",
	"java.lang.Enum",
	nullptr,
	_Thread$State_FieldInfo_,
	_Thread$State_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/Thread$State;>;",
	nullptr,
	_Thread$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Thread"
};

$Object* allocate$Thread$State($Class* clazz) {
	return $of($alloc(Thread$State));
}

Thread$State* Thread$State::NEW = nullptr;
Thread$State* Thread$State::RUNNABLE = nullptr;
Thread$State* Thread$State::BLOCKED = nullptr;
Thread$State* Thread$State::WAITING = nullptr;
Thread$State* Thread$State::TIMED_WAITING = nullptr;
Thread$State* Thread$State::TERMINATED = nullptr;
$Thread$StateArray* Thread$State::$VALUES = nullptr;

$Thread$StateArray* Thread$State::$values() {
	$init(Thread$State);
	return $new($Thread$StateArray, {
		Thread$State::NEW,
		Thread$State::RUNNABLE,
		Thread$State::BLOCKED,
		Thread$State::WAITING,
		Thread$State::TIMED_WAITING,
		Thread$State::TERMINATED
	});
}

$Thread$StateArray* Thread$State::values() {
	$init(Thread$State);
	return $cast($Thread$StateArray, Thread$State::$VALUES->clone());
}

Thread$State* Thread$State::valueOf($String* name) {
	$init(Thread$State);
	return $cast(Thread$State, $Enum::valueOf(Thread$State::class$, name));
}

void Thread$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Thread$State($Class* class$) {
	$assignStatic(Thread$State::NEW, $new(Thread$State, "NEW"_s, 0));
	$assignStatic(Thread$State::RUNNABLE, $new(Thread$State, "RUNNABLE"_s, 1));
	$assignStatic(Thread$State::BLOCKED, $new(Thread$State, "BLOCKED"_s, 2));
	$assignStatic(Thread$State::WAITING, $new(Thread$State, "WAITING"_s, 3));
	$assignStatic(Thread$State::TIMED_WAITING, $new(Thread$State, "TIMED_WAITING"_s, 4));
	$assignStatic(Thread$State::TERMINATED, $new(Thread$State, "TERMINATED"_s, 5));
	$assignStatic(Thread$State::$VALUES, Thread$State::$values());
}

Thread$State::Thread$State() {
}

$Class* Thread$State::load$($String* name, bool initialize) {
	$loadClass(Thread$State, name, initialize, &_Thread$State_ClassInfo_, clinit$Thread$State, allocate$Thread$State);
	return class$;
}

$Class* Thread$State::class$ = nullptr;

	} // lang
} // java