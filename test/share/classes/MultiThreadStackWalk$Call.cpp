#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk$1.h>
#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE
#undef WALKSTACK

using $MultiThreadStackWalk$1 = ::MultiThreadStackWalk$1;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Consumer = ::java::util::function::Consumer;

class MultiThreadStackWalk$Call$$Lambda$consume : public $Consumer {
	$class(MultiThreadStackWalk$Call$$Lambda$consume, $NO_CLASS_INIT, $Consumer)
public:
	void init$($MultiThreadStackWalk$Env* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* sfi) override {
		$nc(inst$)->consume($cast($StackWalker$StackFrame, sfi));
	}
	$MultiThreadStackWalk$Env* inst$ = nullptr;
};
$Class* MultiThreadStackWalk$Call$$Lambda$consume::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiThreadStackWalk$Call$$Lambda$consume, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LMultiThreadStackWalk$Env;)V", nullptr, $PUBLIC, $method(MultiThreadStackWalk$Call$$Lambda$consume, init$, void, $MultiThreadStackWalk$Env*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Call$$Lambda$consume, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiThreadStackWalk$Call$$Lambda$consume",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiThreadStackWalk$Call$$Lambda$consume, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadStackWalk$Call$$Lambda$consume);
	});
	return class$;
}
$Class* MultiThreadStackWalk$Call$$Lambda$consume::class$ = nullptr;

$MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Call::getWalkType() {
	$init($MultiThreadStackWalk$Call$WalkType);
	return $MultiThreadStackWalk$Call$WalkType::WALKSTACK;
}

void MultiThreadStackWalk$Call::walk($MultiThreadStackWalk$Env* env) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$MultiThreadStackWalk$Call$WalkType* walktype = getWalkType();
	$nc($System::out)->println($$str({"Thread "_s, $($($Thread::currentThread())->getName()), " starting walk with "_s, walktype}));
	$init($MultiThreadStackWalk$1);
	switch ($nc($MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType)->get($nc((walktype))->ordinal())) {
	case 1:
		$init($StackWalker$Option);
		$$nc($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE))->forEach($$new(MultiThreadStackWalk$Call$$Lambda$consume, $nc(env)));
		break;
	default:
		$throwNew($InternalError, $$str({"Unknown walk type: "_s, walktype}));
	}
}

void MultiThreadStackWalk$Call::call($MultiThreadStackWalk$Env* env, MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) {
	if (current < total) {
		$nc(next)->call(env, next, total, current + 1, markAt);
	}
}

$Class* MultiThreadStackWalk$Call::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MultiThreadStackWalk$Call$$Lambda$consume")) {
			return MultiThreadStackWalk$Call$$Lambda$consume::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"call", "(LMultiThreadStackWalk$Env;LMultiThreadStackWalk$Call;III)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Call, call, void, $MultiThreadStackWalk$Env*, MultiThreadStackWalk$Call*, int32_t, int32_t, int32_t)},
		{"getWalkType", "()LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Call, getWalkType, $MultiThreadStackWalk$Call$WalkType*)},
		{"walk", "(LMultiThreadStackWalk$Env;)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Call, walk, void, $MultiThreadStackWalk$Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"MultiThreadStackWalk$Call$WalkType", "MultiThreadStackWalk$Call", "WalkType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MultiThreadStackWalk$Call",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiThreadStackWalk"
	};
	$loadClass(MultiThreadStackWalk$Call, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadStackWalk$Call);
	});
	return class$;
}

$Class* MultiThreadStackWalk$Call::class$ = nullptr;