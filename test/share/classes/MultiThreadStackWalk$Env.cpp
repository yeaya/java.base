#include <MultiThreadStackWalk$Env.h>

#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk$Marker.h>
#include <MultiThreadStackWalk$Test.h>
#include <MultiThreadStackWalk$WalkThread.h>
#include <MultiThreadStackWalk.h>
#include <java/io/Serializable.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Call = ::MultiThreadStackWalk$Call;
using $MultiThreadStackWalk$Marker = ::MultiThreadStackWalk$Marker;
using $MultiThreadStackWalk$Test = ::MultiThreadStackWalk$Test;
using $MultiThreadStackWalk$WalkThread = ::MultiThreadStackWalk$WalkThread;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Consumer = ::java::util::function::Consumer;

class MultiThreadStackWalk$Env$$Lambda$lambda$consume$0 : public $Consumer {
	$class(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(MultiThreadStackWalk$Env* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* x) override {
		$nc(inst$)->lambda$consume$0($cast($StackWalker$StackFrame, x));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiThreadStackWalk$Env$$Lambda$lambda$consume$0>());
	}
	MultiThreadStackWalk$Env* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, inst$)},
	{}
};
$MethodInfo MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::methodInfos[3] = {
	{"<init>", "(LMultiThreadStackWalk$Env;)V", nullptr, $PUBLIC, $method(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, init$, void, MultiThreadStackWalk$Env*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, accept, void, Object$*)},
	{}
};
$ClassInfo MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiThreadStackWalk$Env$$Lambda$lambda$consume$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::class$ = nullptr;

$FieldInfo _MultiThreadStackWalk$Env_FieldInfo_[] = {
	{"frameCounter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, frameCounter)},
	{"checkMarkAt", "J", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, checkMarkAt)},
	{"max", "J", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, max)},
	{"debug", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, debug)},
	{"markerCalled", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, markerCalled)},
	{"maxReached", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $FINAL, $field(MultiThreadStackWalk$Env, maxReached)},
	{"unexpected", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(MultiThreadStackWalk$Env, unexpected)},
	{}
};

$MethodInfo _MultiThreadStackWalk$Env_MethodInfo_[] = {
	{"<init>", "(JJLjava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(MultiThreadStackWalk$Env, init$, void, int64_t, int64_t, $AtomicBoolean*)},
	{"<init>", "(LMultiThreadStackWalk$Env;J)V", nullptr, $PRIVATE, $method(MultiThreadStackWalk$Env, init$, void, MultiThreadStackWalk$Env*, int64_t)},
	{"consume", "(Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Env, consume, void, $StackWalker$StackFrame*)},
	{"lambda$consume$0", "(Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(MultiThreadStackWalk$Env, lambda$consume$0, void, $StackWalker$StackFrame*)},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$Env_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$Env", "MultiThreadStackWalk", "Env", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MultiThreadStackWalk$Env_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiThreadStackWalk$Env",
	"java.lang.Object",
	nullptr,
	_MultiThreadStackWalk$Env_FieldInfo_,
	_MultiThreadStackWalk$Env_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$Env_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$Env($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$Env));
}

void MultiThreadStackWalk$Env::init$(int64_t total, int64_t markAt, $AtomicBoolean* debug) {
	$set(this, debug, debug);
	$set(this, frameCounter, $new($AtomicLong));
	$set(this, maxReached, $new($AtomicLong));
	$set(this, unexpected, $Collections::synchronizedSet(static_cast<$Set*>(static_cast<$AbstractSet*>($$new($TreeSet)))));
	this->max = total + 2;
	this->checkMarkAt = total - markAt + 1;
	$set(this, markerCalled, $new($AtomicLong));
}

void MultiThreadStackWalk$Env::init$(MultiThreadStackWalk$Env* orig, int64_t start) {
	$set(this, debug, $nc(orig)->debug);
	$set(this, frameCounter, $new($AtomicLong, start));
	$set(this, maxReached, orig->maxReached);
	$set(this, unexpected, orig->unexpected);
	this->max = orig->max;
	this->checkMarkAt = orig->checkMarkAt;
	$set(this, markerCalled, orig->markerCalled);
}

void MultiThreadStackWalk$Env::consume($StackWalker$StackFrame* sfi) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool var$0 = $nc(this->frameCounter)->get() == 0;
	if (var$0 && $MultiThreadStackWalk::isStreamPipeline($nc(sfi)->getDeclaringClass())) {
		return;
	}
	int64_t count = $nc(this->frameCounter)->getAndIncrement();
	$var($StringBuilder, builder, $new($StringBuilder));
	builder->append("Declaring class["_s)->append(count)->append("]: "_s)->append($of($nc(sfi)->getDeclaringClass()));
	builder->append(u'\n');
	$var($String, var$1, nullptr);
	if ($nc($($nc(sfi)->toStackTraceElement()))->isNativeMethod()) {
		$assign(var$1, "(native)"_s);
	} else {
		$var($String, var$3, $$str({"("_s, $($nc($($nc(sfi)->toStackTraceElement()))->getFileName()), ":"_s}));
		$var($String, var$2, $$concat(var$3, $$str($nc($(sfi->toStackTraceElement()))->getLineNumber())));
		$assign(var$1, $concat(var$2, ")"_s));
	}
	builder->append("\t"_s)->append($($nc(sfi)->getClassName()))->append("."_s)->append($($nc($($nc(sfi)->toStackTraceElement()))->getMethodName()))->append(var$1);
	builder->append(u'\n');
	if ($nc(this->debug)->get()) {
		$nc($System::out)->print($$str({"[debug] "_s, $(builder->toString())}));
		builder->setLength(0);
	}
	if (count == this->max) {
		$nc(this->maxReached)->incrementAndGet();
	}
	if (count == this->checkMarkAt) {
		$load($MultiThreadStackWalk$Marker);
		if ($nc(sfi)->getDeclaringClass() != $MultiThreadStackWalk$Marker::class$) {
			$throwNew($RuntimeException, $$str({"Expected Marker at "_s, $$str(count), ", found "_s, sfi->getDeclaringClass()}));
		}
	} else {
		$load($MultiThreadStackWalk$Call);
		if (count <= 0 && $nc(sfi)->getDeclaringClass() != $MultiThreadStackWalk$Call::class$) {
			$throwNew($RuntimeException, $$str({"Expected Call at "_s, $$str(count), ", found "_s, sfi->getDeclaringClass()}));
		} else {
			$load($MultiThreadStackWalk$Test);
			if (count > 0 && count < this->max && sfi->getDeclaringClass() != $MultiThreadStackWalk$Test::class$) {
				$throwNew($RuntimeException, $$str({"Expected Test at "_s, $$str(count), ", found "_s, sfi->getDeclaringClass()}));
			} else {
				if (count == this->max && sfi->getDeclaringClass() != $MultiThreadStackWalk::class$) {
					$throwNew($RuntimeException, $$str({"Expected MultiThreadStackWalk at "_s, $$str(count), ", found "_s, sfi->getDeclaringClass()}));
				} else if (count == this->max && !$nc($($nc($(sfi->toStackTraceElement()))->getMethodName()))->equals("runTest"_s)) {
					$throwNew($RuntimeException, $$str({"Expected runTest method at "_s, $$str(count), ", found "_s, $($nc($(sfi->toStackTraceElement()))->getMethodName())}));
				} else if (count == this->max + 1) {
					$load($MultiThreadStackWalk$WalkThread);
					if (sfi->getDeclaringClass() != $MultiThreadStackWalk$WalkThread::class$) {
						$throwNew($RuntimeException, $$str({"Expected MultiThreadStackWalk at "_s, $$str(count), ", found "_s, sfi->getDeclaringClass()}));
					}
					if (count == this->max && !$nc($($nc($(sfi->toStackTraceElement()))->getMethodName()))->equals("run"_s)) {
						$throwNew($RuntimeException, $$str({"Expected main method at "_s, $$str(count), ", found "_s, $($nc($(sfi->toStackTraceElement()))->getMethodName())}));
					}
				} else if (count > this->max + 1) {
					if (!$nc($MultiThreadStackWalk::infrastructureClasses)->contains($($nc(sfi->getDeclaringClass())->getName()))) {
						$nc($System::err)->println($$str({"**** WARNING: encountered unexpected infrastructure class at "_s, $$str(count), ": "_s, $($nc(sfi->getDeclaringClass())->getName())}));
						$nc(this->unexpected)->add($($nc(sfi->getDeclaringClass())->getName()));
					}
				}
			}
		}
	}
	if (count == 100) {
		$init($StackWalker$Option);
		$nc($($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE)))->forEach(static_cast<$Consumer*>($$new(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0, this)));
	}
}

void MultiThreadStackWalk$Env::lambda$consume$0($StackWalker$StackFrame* x) {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElement, st, $nc(x)->toStackTraceElement());
	$var($StringBuilder, b, $new($StringBuilder));
	$var($String, var$0, nullptr);
	if (st == nullptr) {
		$assign(var$0, "- no stack trace element -"_s);
	} else {
		$var($String, var$1, $$str({"."_s, $($nc(st)->getMethodName())}));
		$var($String, var$2, nullptr);
		if (st->isNativeMethod()) {
			$assign(var$2, "(native)"_s);
		} else {
			$var($String, var$4, $$str({"("_s, $(st->getFileName()), ":"_s}));
			$var($String, var$3, $$concat(var$4, $$str(st->getLineNumber())));
			$assign(var$2, $concat(var$3, ")"_s));
		}
		$assign(var$0, $concat(var$1, (var$2)));
	}
	b->append("*** inner walk: "_s)->append($(x->getClassName()))->append(var$0)->append(u'\n');
	if ($nc(this->debug)->get()) {
		$nc($System::out)->print($(b->toString()));
		b->setLength(0);
	}
}

MultiThreadStackWalk$Env::MultiThreadStackWalk$Env() {
}

$Class* MultiThreadStackWalk$Env::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::classInfo$.name)) {
			return MultiThreadStackWalk$Env$$Lambda$lambda$consume$0::load$(name, initialize);
		}
	}
	$loadClass(MultiThreadStackWalk$Env, name, initialize, &_MultiThreadStackWalk$Env_ClassInfo_, allocate$MultiThreadStackWalk$Env);
	return class$;
}

$Class* MultiThreadStackWalk$Env::class$ = nullptr;