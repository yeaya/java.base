#include <java/util/concurrent/ConcurrentHashMap$ReduceEntriesTask.h>

#include <java/util/Map$Entry.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ReduceEntriesTask_FieldInfo_[] = {
	{"reducer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/util/Map$Entry<TK;TV;>;Ljava/util/Map$Entry<TK;TV;>;+Ljava/util/Map$Entry<TK;TV;>;>;", $FINAL, $field(ConcurrentHashMap$ReduceEntriesTask, reducer)},
	{"result", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceEntriesTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceEntriesTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceEntriesTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$ReduceEntriesTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$ReduceEntriesTask<TK;TV;>;Ljava/util/function/BiFunction<Ljava/util/Map$Entry<TK;TV;>;Ljava/util/Map$Entry<TK;TV;>;+Ljava/util/Map$Entry<TK;TV;>;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ReduceEntriesTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$ReduceEntriesTask*,$BiFunction*)>(&ConcurrentHashMap$ReduceEntriesTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ReduceEntriesTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ReduceEntriesTask", "java.util.concurrent.ConcurrentHashMap", "ReduceEntriesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ReduceEntriesTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ReduceEntriesTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ReduceEntriesTask_FieldInfo_,
	_ConcurrentHashMap$ReduceEntriesTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentHashMap$ReduceEntriesTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ReduceEntriesTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ReduceEntriesTask));
}

void ConcurrentHashMap$ReduceEntriesTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$ReduceEntriesTask* nextRight, $BiFunction* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$ReduceEntriesTask::getRawResult() {
	return $of(this->result);
}

void ConcurrentHashMap$ReduceEntriesTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BiFunction, reducer, nullptr);
	if (($assign(reducer, this->reducer)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$ReduceEntriesTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, reducer))))->fork();
			}
		}
		$var($Map$Entry, r, nullptr);
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$assign(r, (r == nullptr) ? static_cast<$Map$Entry*>(p) : $cast($Map$Entry, $nc(reducer)->apply(r, p)));
			}
		}
		$set(this, result, r);
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$ReduceEntriesTask, t, $cast(ConcurrentHashMap$ReduceEntriesTask, c));
			$var(ConcurrentHashMap$ReduceEntriesTask, s, t->rights);
			while (s != nullptr) {
				$var($Map$Entry, tr, nullptr);
				$var($Map$Entry, sr, nullptr);
				if (($assign(sr, s->result)) != nullptr) {
					$set(t, result, (($assign(tr, t->result)) == nullptr) ? sr : $cast($Map$Entry, $nc(reducer)->apply(tr, sr)));
				}
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$ReduceEntriesTask::ConcurrentHashMap$ReduceEntriesTask() {
}

$Class* ConcurrentHashMap$ReduceEntriesTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ReduceEntriesTask, name, initialize, &_ConcurrentHashMap$ReduceEntriesTask_ClassInfo_, allocate$ConcurrentHashMap$ReduceEntriesTask);
	return class$;
}

$Class* ConcurrentHashMap$ReduceEntriesTask::class$ = nullptr;

		} // concurrent
	} // util
} // java