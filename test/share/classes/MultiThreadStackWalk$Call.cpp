#include <MultiThreadStackWalk$Call.h>

#include <MultiThreadStackWalk$1.h>
#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE
#undef WALKSTACK

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$1 = ::MultiThreadStackWalk$1;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiThreadStackWalk$Call$$Lambda$consume>());
	}
	$MultiThreadStackWalk$Env* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiThreadStackWalk$Call$$Lambda$consume::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiThreadStackWalk$Call$$Lambda$consume, inst$)},
	{}
};
$MethodInfo MultiThreadStackWalk$Call$$Lambda$consume::methodInfos[3] = {
	{"<init>", "(LMultiThreadStackWalk$Env;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiThreadStackWalk$Call$$Lambda$consume::*)($MultiThreadStackWalk$Env*)>(&MultiThreadStackWalk$Call$$Lambda$consume::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiThreadStackWalk$Call$$Lambda$consume::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiThreadStackWalk$Call$$Lambda$consume",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* MultiThreadStackWalk$Call$$Lambda$consume::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$Call$$Lambda$consume, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiThreadStackWalk$Call$$Lambda$consume::class$ = nullptr;

$MethodInfo _MultiThreadStackWalk$Call_MethodInfo_[] = {
	{"call", "(LMultiThreadStackWalk$Env;LMultiThreadStackWalk$Call;III)V", nullptr, $PUBLIC},
	{"getWalkType", "()LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC},
	{"walk", "(LMultiThreadStackWalk$Env;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$Call_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"MultiThreadStackWalk$Call$WalkType", "MultiThreadStackWalk$Call", "WalkType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultiThreadStackWalk$Call_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MultiThreadStackWalk$Call",
	nullptr,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$Call_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$Call_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$Call($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$Call));
}

$MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Call::getWalkType() {
	$init($MultiThreadStackWalk$Call$WalkType);
	return $MultiThreadStackWalk$Call$WalkType::WALKSTACK;
}

void MultiThreadStackWalk$Call::walk($MultiThreadStackWalk$Env* env) {
	$beforeCallerSensitive();
	$MultiThreadStackWalk$Call$WalkType* walktype = getWalkType();
	$init($System);
	$nc($System::out)->println($$str({"Thread "_s, $($($Thread::currentThread())->getName()), " starting walk with "_s, walktype}));
	$init($MultiThreadStackWalk$1);
	switch ($nc($MultiThreadStackWalk$1::$SwitchMap$MultiThreadStackWalk$Call$WalkType)->get($nc((walktype))->ordinal())) {
	case 1:
		{
			$init($StackWalker$Option);
			$nc($($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE)))->forEach(static_cast<$Consumer*>($$new(MultiThreadStackWalk$Call$$Lambda$consume, static_cast<$MultiThreadStackWalk$Env*>($nc(env)))));
			break;
		}
	default:
		{
			$throwNew($InternalError, $$str({"Unknown walk type: "_s, walktype}));
		}
	}
}

void MultiThreadStackWalk$Call::call($MultiThreadStackWalk$Env* env, MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) {
	if (current < total) {
		$nc(next)->call(env, next, total, current + 1, markAt);
	}
}

$Class* MultiThreadStackWalk$Call::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiThreadStackWalk$Call$$Lambda$consume::classInfo$.name)) {
			return MultiThreadStackWalk$Call$$Lambda$consume::load$(name, initialize);
		}
	}
	$loadClass(MultiThreadStackWalk$Call, name, initialize, &_MultiThreadStackWalk$Call_ClassInfo_, allocate$MultiThreadStackWalk$Call);
	return class$;
}

$Class* MultiThreadStackWalk$Call::class$ = nullptr;