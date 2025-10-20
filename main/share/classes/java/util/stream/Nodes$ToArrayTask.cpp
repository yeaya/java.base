#include <java/util/stream/Nodes$ToArrayTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$ToArrayTask_FieldInfo_[] = {
	{"node", "Ljava/util/stream/Node;", "TT_NODE;", $PROTECTED | $FINAL, $field(Nodes$ToArrayTask, node)},
	{"offset", "I", nullptr, $PROTECTED | $FINAL, $field(Nodes$ToArrayTask, offset)},
	{}
};

$MethodInfo _Nodes$ToArrayTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node;I)V", "(TT_NODE;I)V", 0, $method(static_cast<void(Nodes$ToArrayTask::*)($Node*,int32_t)>(&Nodes$ToArrayTask::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$ToArrayTask;Ljava/util/stream/Node;I)V", "(TK;TT_NODE;I)V", 0, $method(static_cast<void(Nodes$ToArrayTask::*)(Nodes$ToArrayTask*,$Node*,int32_t)>(&Nodes$ToArrayTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC},
	{"copyNodeToArray", "()V", nullptr, $ABSTRACT},
	{"makeChild", "(II)Ljava/util/stream/Nodes$ToArrayTask;", "(II)TK;", $ABSTRACT},
	{}
};

$InnerClassInfo _Nodes$ToArrayTask_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$ToArrayTask$OfDouble", "java.util.stream.Nodes$ToArrayTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ToArrayTask$OfLong", "java.util.stream.Nodes$ToArrayTask", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ToArrayTask$OfInt", "java.util.stream.Nodes$ToArrayTask", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
	{"java.util.stream.Nodes$ToArrayTask$OfRef", "java.util.stream.Nodes$ToArrayTask", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$ToArrayTask_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$ToArrayTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_Nodes$ToArrayTask_FieldInfo_,
	_Nodes$ToArrayTask_MethodInfo_,
	"<T:Ljava/lang/Object;T_NODE::Ljava/util/stream/Node<TT;>;K:Ljava/util/stream/Nodes$ToArrayTask<TT;TT_NODE;TK;>;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_Nodes$ToArrayTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ToArrayTask($Class* clazz) {
	return $of($alloc(Nodes$ToArrayTask));
}

void Nodes$ToArrayTask::init$($Node* node, int32_t offset) {
	$CountedCompleter::init$();
	$set(this, node, node);
	this->offset = offset;
}

void Nodes$ToArrayTask::init$(Nodes$ToArrayTask* parent, $Node* node, int32_t offset) {
	$CountedCompleter::init$(parent);
	$set(this, node, node);
	this->offset = offset;
}

void Nodes$ToArrayTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var(Nodes$ToArrayTask, task, this);
	while (true) {
		if ($nc($nc(task)->node)->getChildCount() == 0) {
			task->copyNodeToArray();
			task->propagateCompletion();
			return;
		} else {
			task->setPendingCount($nc(task->node)->getChildCount() - 1);
			int32_t size = 0;
			int32_t i = 0;
			for (; i < $nc(task->node)->getChildCount() - 1; ++i) {
				$var(Nodes$ToArrayTask, leftTask, task->makeChild(i, task->offset + size));
				size += $nc($nc(leftTask)->node)->count();
				leftTask->fork();
			}
			$assign(task, task->makeChild(i, task->offset + size));
		}
	}
}

Nodes$ToArrayTask::Nodes$ToArrayTask() {
}

$Class* Nodes$ToArrayTask::load$($String* name, bool initialize) {
	$loadClass(Nodes$ToArrayTask, name, initialize, &_Nodes$ToArrayTask_ClassInfo_, allocate$Nodes$ToArrayTask);
	return class$;
}

$Class* Nodes$ToArrayTask::class$ = nullptr;

		} // stream
	} // util
} // java