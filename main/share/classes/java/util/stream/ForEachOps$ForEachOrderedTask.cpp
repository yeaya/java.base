#include <java/util/stream/ForEachOps$ForEachOrderedTask.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/ForEachOps.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $ForEachOps = ::java::util::stream::ForEachOps;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

class ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0 : public $IntFunction {
	$class(ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t size) override {
		 return $of(ForEachOps$ForEachOrderedTask::lambda$doCompute$0(size));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::*)()>(&ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::class$ = nullptr;

$FieldInfo _ForEachOps$ForEachOrderedTask_FieldInfo_[] = {
	{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TT;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachOrderedTask, helper)},
	{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TS;>;", $PRIVATE, $field(ForEachOps$ForEachOrderedTask, spliterator)},
	{"targetSize", "J", nullptr, $PRIVATE | $FINAL, $field(ForEachOps$ForEachOrderedTask, targetSize)},
	{"completionMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachOrderedTask, completionMap)},
	{"action", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<TT;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachOrderedTask, action)},
	{"leftPredecessor", "Ljava/util/stream/ForEachOps$ForEachOrderedTask;", "Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachOrderedTask, leftPredecessor)},
	{"node", "Ljava/util/stream/Node;", "Ljava/util/stream/Node<TT;>;", $PRIVATE, $field(ForEachOps$ForEachOrderedTask, node)},
	{}
};

$MethodInfo _ForEachOps$ForEachOrderedTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/stream/Sink;)V", "(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;Ljava/util/stream/Sink<TT;>;)V", $PROTECTED, $method(static_cast<void(ForEachOps$ForEachOrderedTask::*)($PipelineHelper*,$Spliterator*,$Sink*)>(&ForEachOps$ForEachOrderedTask::init$))},
	{"<init>", "(Ljava/util/stream/ForEachOps$ForEachOrderedTask;Ljava/util/Spliterator;Ljava/util/stream/ForEachOps$ForEachOrderedTask;)V", "(Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;Ljava/util/Spliterator<TS;>;Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;)V", 0, $method(static_cast<void(ForEachOps$ForEachOrderedTask::*)(ForEachOps$ForEachOrderedTask*,$Spliterator*,ForEachOps$ForEachOrderedTask*)>(&ForEachOps$ForEachOrderedTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"doCompute", "(Ljava/util/stream/ForEachOps$ForEachOrderedTask;)V", "<S:Ljava/lang/Object;T:Ljava/lang/Object;>(Ljava/util/stream/ForEachOps$ForEachOrderedTask<TS;TT;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(ForEachOps$ForEachOrderedTask*)>(&ForEachOps$ForEachOrderedTask::doCompute))},
	{"lambda$doCompute$0", "(I)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ObjectArray*(*)(int32_t)>(&ForEachOps$ForEachOrderedTask::lambda$doCompute$0))},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOrderedTask_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOrderedTask", "java.util.stream.ForEachOps", "ForEachOrderedTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForEachOps$ForEachOrderedTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachOrderedTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ForEachOps$ForEachOrderedTask_FieldInfo_,
	_ForEachOps$ForEachOrderedTask_MethodInfo_,
	"<S:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ForEachOps$ForEachOrderedTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOrderedTask($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOrderedTask));
}

void ForEachOps$ForEachOrderedTask::init$($PipelineHelper* helper, $Spliterator* spliterator, $Sink* action) {
	$CountedCompleter::init$(nullptr);
	$set(this, helper, helper);
	$set(this, spliterator, spliterator);
	this->targetSize = $AbstractTask::suggestTargetSize($nc(spliterator)->estimateSize());
	$set(this, completionMap, $new($ConcurrentHashMap, $Math::max(16, $AbstractTask::getLeafTarget() << 1)));
	$set(this, action, action);
	$set(this, leftPredecessor, nullptr);
}

void ForEachOps$ForEachOrderedTask::init$(ForEachOps$ForEachOrderedTask* parent, $Spliterator* spliterator, ForEachOps$ForEachOrderedTask* leftPredecessor) {
	$CountedCompleter::init$(parent);
	$set(this, helper, $nc(parent)->helper);
	$set(this, spliterator, spliterator);
	this->targetSize = parent->targetSize;
	$set(this, completionMap, parent->completionMap);
	$set(this, action, parent->action);
	$set(this, leftPredecessor, leftPredecessor);
}

void ForEachOps$ForEachOrderedTask::compute() {
	doCompute(this);
}

void ForEachOps$ForEachOrderedTask::doCompute(ForEachOps$ForEachOrderedTask* task$renamed) {
	$init(ForEachOps$ForEachOrderedTask);
	$useLocalCurrentObjectStackCache();
	$var(ForEachOps$ForEachOrderedTask, task, task$renamed);
	$var($Spliterator, rightSplit, $nc(task)->spliterator);
	$var($Spliterator, leftSplit, nullptr);
	int64_t sizeThreshold = task->targetSize;
	bool forkRight = false;
	while (true) {
		bool var$0 = $nc(rightSplit)->estimateSize() > sizeThreshold;
		if (!(var$0 && ($assign(leftSplit, rightSplit->trySplit())) != nullptr)) {
			break;
		}
		{
			$var(ForEachOps$ForEachOrderedTask, leftChild, $new(ForEachOps$ForEachOrderedTask, task, leftSplit, $nc(task)->leftPredecessor));
			$var(ForEachOps$ForEachOrderedTask, rightChild, $new(ForEachOps$ForEachOrderedTask, task, rightSplit, leftChild));
			$nc(task)->addToPendingCount(1);
			rightChild->addToPendingCount(1);
			$nc(task->completionMap)->put(leftChild, rightChild);
			if (task->leftPredecessor != nullptr) {
				leftChild->addToPendingCount(1);
				if ($nc(task->completionMap)->replace(task->leftPredecessor, task, leftChild)) {
					task->addToPendingCount(-1);
				} else {
					leftChild->addToPendingCount(-1);
				}
			}
			$var(ForEachOps$ForEachOrderedTask, taskToFork, nullptr);
			if (forkRight) {
				forkRight = false;
				$assign(rightSplit, leftSplit);
				$assign(task, leftChild);
				$assign(taskToFork, rightChild);
			} else {
				forkRight = true;
				$assign(task, rightChild);
				$assign(taskToFork, leftChild);
			}
			$nc(taskToFork)->fork();
		}
	}
	if (task->getPendingCount() > 0) {
		$var($IntFunction, generator, static_cast<$IntFunction*>($new(ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0)));
		$var($Node$Builder, nb, $nc(task->helper)->makeNodeBuilder($nc(task->helper)->exactOutputSizeIfKnown(rightSplit), generator));
		$set(task, node, $nc(($cast($Node$Builder, $($nc(task->helper)->wrapAndCopyInto(nb, rightSplit)))))->build());
		$set(task, spliterator, nullptr);
	}
	task->tryComplete();
}

void ForEachOps$ForEachOrderedTask::onCompletion($CountedCompleter* caller) {
	if (this->node != nullptr) {
		$nc(this->node)->forEach(this->action);
		$set(this, node, nullptr);
	} else if (this->spliterator != nullptr) {
		$nc(this->helper)->wrapAndCopyInto(this->action, this->spliterator);
		$set(this, spliterator, nullptr);
	}
	$var(ForEachOps$ForEachOrderedTask, leftDescendant, $cast(ForEachOps$ForEachOrderedTask, $nc(this->completionMap)->remove(this)));
	if (leftDescendant != nullptr) {
		leftDescendant->tryComplete();
	}
}

$ObjectArray* ForEachOps$ForEachOrderedTask::lambda$doCompute$0(int32_t size) {
	$init(ForEachOps$ForEachOrderedTask);
	return $new($ObjectArray, size);
}

ForEachOps$ForEachOrderedTask::ForEachOps$ForEachOrderedTask() {
}

$Class* ForEachOps$ForEachOrderedTask::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::classInfo$.name)) {
			return ForEachOps$ForEachOrderedTask$$Lambda$lambda$doCompute$0::load$(name, initialize);
		}
	}
	$loadClass(ForEachOps$ForEachOrderedTask, name, initialize, &_ForEachOps$ForEachOrderedTask_ClassInfo_, allocate$ForEachOps$ForEachOrderedTask);
	return class$;
}

$Class* ForEachOps$ForEachOrderedTask::class$ = nullptr;

		} // stream
	} // util
} // java