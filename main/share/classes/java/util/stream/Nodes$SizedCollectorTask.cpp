#include <java/util/stream/Nodes$SizedCollectorTask.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

#undef SUBSIZED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SizedCollectorTask_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$SizedCollectorTask, $assertionsDisabled)},
	{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TP_IN;>;", $PROTECTED | $FINAL, $field(Nodes$SizedCollectorTask, spliterator)},
	{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TP_OUT;>;", $PROTECTED | $FINAL, $field(Nodes$SizedCollectorTask, helper)},
	{"targetSize", "J", nullptr, $PROTECTED | $FINAL, $field(Nodes$SizedCollectorTask, targetSize)},
	{"offset", "J", nullptr, $PROTECTED, $field(Nodes$SizedCollectorTask, offset)},
	{"length", "J", nullptr, $PROTECTED, $field(Nodes$SizedCollectorTask, length)},
	{"index", "I", nullptr, $PROTECTED, $field(Nodes$SizedCollectorTask, index)},
	{"fence", "I", nullptr, $PROTECTED, $field(Nodes$SizedCollectorTask, fence)},
	{}
};

$MethodInfo _Nodes$SizedCollectorTask_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/PipelineHelper;I)V", "(Ljava/util/Spliterator<TP_IN;>;Ljava/util/stream/PipelineHelper<TP_OUT;>;I)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask::*)($Spliterator*,$PipelineHelper*,int32_t)>(&Nodes$SizedCollectorTask::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$SizedCollectorTask;Ljava/util/Spliterator;JJI)V", "(TK;Ljava/util/Spliterator<TP_IN;>;JJI)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask::*)(Nodes$SizedCollectorTask*,$Spliterator*,int64_t,int64_t,int32_t)>(&Nodes$SizedCollectorTask::init$))},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"compute", "()V", nullptr, $PUBLIC},
	{"makeChild", "(Ljava/util/Spliterator;JJ)Ljava/util/stream/Nodes$SizedCollectorTask;", "(Ljava/util/Spliterator<TP_IN;>;JJ)TK;", $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$SizedCollectorTask_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SizedCollectorTask", "java.util.stream.Nodes", "SizedCollectorTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$SizedCollectorTask$OfDouble", "java.util.stream.Nodes$SizedCollectorTask", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Nodes$SizedCollectorTask$OfLong", "java.util.stream.Nodes$SizedCollectorTask", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Nodes$SizedCollectorTask$OfInt", "java.util.stream.Nodes$SizedCollectorTask", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Nodes$SizedCollectorTask$OfRef", "java.util.stream.Nodes$SizedCollectorTask", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$SizedCollectorTask_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$SizedCollectorTask",
	"java.util.concurrent.CountedCompleter",
	"java.util.stream.Sink",
	_Nodes$SizedCollectorTask_FieldInfo_,
	_Nodes$SizedCollectorTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;T_SINK::Ljava/util/stream/Sink<TP_OUT;>;K:Ljava/util/stream/Nodes$SizedCollectorTask<TP_IN;TP_OUT;TT_SINK;TK;>;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;Ljava/util/stream/Sink<TP_OUT;>;",
	nullptr,
	_Nodes$SizedCollectorTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SizedCollectorTask($Class* clazz) {
	return $of($alloc(Nodes$SizedCollectorTask));
}

int32_t Nodes$SizedCollectorTask::hashCode() {
	 return this->$CountedCompleter::hashCode();
}

bool Nodes$SizedCollectorTask::equals(Object$* obj) {
	 return this->$CountedCompleter::equals(obj);
}

$Object* Nodes$SizedCollectorTask::clone() {
	 return this->$CountedCompleter::clone();
}

$String* Nodes$SizedCollectorTask::toString() {
	 return this->$CountedCompleter::toString();
}

void Nodes$SizedCollectorTask::finalize() {
	this->$CountedCompleter::finalize();
}

bool Nodes$SizedCollectorTask::$assertionsDisabled = false;

void Nodes$SizedCollectorTask::init$($Spliterator* spliterator, $PipelineHelper* helper, int32_t arrayLength) {
	$CountedCompleter::init$();
	if (!Nodes$SizedCollectorTask::$assertionsDisabled && !$nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$throwNew($AssertionError);
	}
	$set(this, spliterator, spliterator);
	$set(this, helper, helper);
	this->targetSize = $AbstractTask::suggestTargetSize($nc(spliterator)->estimateSize());
	this->offset = 0;
	this->length = arrayLength;
}

void Nodes$SizedCollectorTask::init$(Nodes$SizedCollectorTask* parent, $Spliterator* spliterator, int64_t offset, int64_t length, int32_t arrayLength) {
	$useLocalCurrentObjectStackCache();
	$CountedCompleter::init$(parent);
	if (!Nodes$SizedCollectorTask::$assertionsDisabled && !$nc(spliterator)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$throwNew($AssertionError);
	}
	$set(this, spliterator, spliterator);
	$set(this, helper, $nc(parent)->helper);
	this->targetSize = parent->targetSize;
	this->offset = offset;
	this->length = length;
	if (offset < 0 || length < 0 || (offset + length - 1 >= arrayLength)) {
		$throwNew($IllegalArgumentException, $($String::format("offset and length interval [%d, %d + %d) is not within array size interval [0, %d)"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(offset))),
			$($of($Long::valueOf(offset))),
			$($of($Long::valueOf(length))),
			$($of($Integer::valueOf(arrayLength)))
		}))));
	}
}

void Nodes$SizedCollectorTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var(Nodes$SizedCollectorTask, task, this);
	$var($Spliterator, rightSplit, this->spliterator);
	$var($Spliterator, leftSplit, nullptr);
	while (true) {
		bool var$0 = $nc(rightSplit)->estimateSize() > $nc(task)->targetSize;
		if (!(var$0 && ($assign(leftSplit, rightSplit->trySplit())) != nullptr)) {
			break;
		}
		{
			task->setPendingCount(1);
			int64_t leftSplitSize = $nc(leftSplit)->estimateSize();
			$nc($(task->makeChild(leftSplit, task->offset, leftSplitSize)))->fork();
			$assign(task, task->makeChild(rightSplit, task->offset + leftSplitSize, task->length - leftSplitSize));
		}
	}
	if (!Nodes$SizedCollectorTask::$assertionsDisabled && !($nc(task)->offset + task->length < (int64_t)2147483639)) {
		$throwNew($AssertionError);
	}
	$var($Sink, sink, static_cast<$Sink*>(task));
	$nc($nc(task)->helper)->wrapAndCopyInto(sink, rightSplit);
	task->propagateCompletion();
}

void Nodes$SizedCollectorTask::begin(int64_t size) {
	if (size > this->length) {
		$throwNew($IllegalStateException, "size passed to Sink.begin exceeds array length"_s);
	}
	this->index = (int32_t)this->offset;
	this->fence = this->index + (int32_t)this->length;
}

void clinit$Nodes$SizedCollectorTask($Class* class$) {
	$load($Nodes);
	Nodes$SizedCollectorTask::$assertionsDisabled = !$Nodes::class$->desiredAssertionStatus();
}

Nodes$SizedCollectorTask::Nodes$SizedCollectorTask() {
}

$Class* Nodes$SizedCollectorTask::load$($String* name, bool initialize) {
	$loadClass(Nodes$SizedCollectorTask, name, initialize, &_Nodes$SizedCollectorTask_ClassInfo_, clinit$Nodes$SizedCollectorTask, allocate$Nodes$SizedCollectorTask);
	return class$;
}

$Class* Nodes$SizedCollectorTask::class$ = nullptr;

		} // stream
	} // util
} // java