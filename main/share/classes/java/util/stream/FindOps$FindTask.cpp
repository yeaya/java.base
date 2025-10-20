#include <java/util/stream/FindOps$FindTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractShortCircuitTask.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/FindOps$FindOp.h>
#include <java/util/stream/FindOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $AbstractShortCircuitTask = ::java::util::stream::AbstractShortCircuitTask;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $FindOps = ::java::util::stream::FindOps;
using $FindOps$FindOp = ::java::util::stream::FindOps$FindOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _FindOps$FindTask_FieldInfo_[] = {
	{"op", "Ljava/util/stream/FindOps$FindOp;", "Ljava/util/stream/FindOps$FindOp<TP_OUT;TO;>;", $PRIVATE | $FINAL, $field(FindOps$FindTask, op)},
	{"mustFindFirst", "Z", nullptr, $PRIVATE | $FINAL, $field(FindOps$FindTask, mustFindFirst)},
	{}
};

$MethodInfo _FindOps$FindTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/FindOps$FindOp;ZLjava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/FindOps$FindOp<TP_OUT;TO;>;ZLjava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(FindOps$FindTask::*)($FindOps$FindOp*,bool,$PipelineHelper*,$Spliterator*)>(&FindOps$FindTask::init$))},
	{"<init>", "(Ljava/util/stream/FindOps$FindTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/FindOps$FindTask<TP_IN;TP_OUT;TO;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(FindOps$FindTask::*)(FindOps$FindTask*,$Spliterator*)>(&FindOps$FindTask::init$))},
	{"doLeaf", "()Ljava/lang/Object;", "()TO;", $PROTECTED},
	{"foundResult", "(Ljava/lang/Object;)V", "(TO;)V", $PRIVATE, $method(static_cast<void(FindOps$FindTask::*)(Object$*)>(&FindOps$FindTask::foundResult))},
	{"getEmptyResult", "()Ljava/lang/Object;", "()TO;", $PROTECTED},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/FindOps$FindTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/FindOps$FindTask<TP_IN;TP_OUT;TO;>;", $PROTECTED},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindTask_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindTask", "java.util.stream.FindOps", "FindTask", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FindOps$FindTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindTask",
	"java.util.stream.AbstractShortCircuitTask",
	nullptr,
	_FindOps$FindTask_FieldInfo_,
	_FindOps$FindTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/util/stream/AbstractShortCircuitTask<TP_IN;TP_OUT;TO;Ljava/util/stream/FindOps$FindTask<TP_IN;TP_OUT;TO;>;>;",
	nullptr,
	_FindOps$FindTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindTask($Class* clazz) {
	return $of($alloc(FindOps$FindTask));
}

void FindOps$FindTask::init$($FindOps$FindOp* op, bool mustFindFirst, $PipelineHelper* helper, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(helper, spliterator);
	this->mustFindFirst = mustFindFirst;
	$set(this, op, op);
}

void FindOps$FindTask::init$(FindOps$FindTask* parent, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(static_cast<$AbstractShortCircuitTask*>(parent), spliterator);
	this->mustFindFirst = $nc(parent)->mustFindFirst;
	$set(this, op, parent->op);
}

FindOps$FindTask* FindOps$FindTask::makeChild($Spliterator* spliterator) {
	return $new(FindOps$FindTask, this, spliterator);
}

$Object* FindOps$FindTask::getEmptyResult() {
	return $of($nc(this->op)->emptyValue);
}

void FindOps$FindTask::foundResult(Object$* answer) {
	if (isLeftmostNode()) {
		shortCircuit(answer);
	} else {
		cancelLaterNodes();
	}
}

$Object* FindOps$FindTask::doLeaf() {
	$useLocalCurrentObjectStackCache();
	$var($Object, result, $nc(($cast($TerminalSink, $($nc(this->helper)->wrapAndCopyInto($cast($TerminalSink, $($nc($nc(this->op)->sinkSupplier)->get())), this->spliterator)))))->get());
	if (!this->mustFindFirst) {
		if (result != nullptr) {
			shortCircuit(result);
		}
		return $of(nullptr);
	} else if (result != nullptr) {
		foundResult(result);
		return $of(result);
	} else {
		return $of(nullptr);
	}
}

void FindOps$FindTask::onCompletion($CountedCompleter* caller) {
	$useLocalCurrentObjectStackCache();
	if (this->mustFindFirst) {
		{
			$var(FindOps$FindTask, child, $cast(FindOps$FindTask, this->leftChild));
			$var(FindOps$FindTask, p, nullptr);
			for (; child != p; $assign(p, child), $assign(child, $cast(FindOps$FindTask, this->rightChild))) {
				$var($Object, result, $nc(child)->getLocalResult());
				if (result != nullptr && $nc($nc(this->op)->presentPredicate)->test(result)) {
					setLocalResult(result);
					foundResult(result);
					break;
				}
			}
		}
	}
	$AbstractShortCircuitTask::onCompletion(caller);
}

FindOps$FindTask::FindOps$FindTask() {
}

$Class* FindOps$FindTask::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindTask, name, initialize, &_FindOps$FindTask_ClassInfo_, allocate$FindOps$FindTask);
	return class$;
}

$Class* FindOps$FindTask::class$ = nullptr;

		} // stream
	} // util
} // java