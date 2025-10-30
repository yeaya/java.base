#include <java/util/concurrent/ConcurrentHashMap$SearchEntriesTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$SearchEntriesTask_FieldInfo_[] = {
	{"searchFunction", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/util/Map$Entry<TK;TV;>;+TU;>;", $FINAL, $field(ConcurrentHashMap$SearchEntriesTask, searchFunction)},
	{"result", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<TU;>;", $FINAL, $field(ConcurrentHashMap$SearchEntriesTask, result)},
	{}
};

$MethodInfo _ConcurrentHashMap$SearchEntriesTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Function;Ljava/util/concurrent/atomic/AtomicReference;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Function<Ljava/util/Map$Entry<TK;TV;>;+TU;>;Ljava/util/concurrent/atomic/AtomicReference<TU;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$SearchEntriesTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$Function*,$AtomicReference*)>(&ConcurrentHashMap$SearchEntriesTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$SearchEntriesTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$SearchEntriesTask", "java.util.concurrent.ConcurrentHashMap", "SearchEntriesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$SearchEntriesTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$SearchEntriesTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$SearchEntriesTask_FieldInfo_,
	_ConcurrentHashMap$SearchEntriesTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
	nullptr,
	_ConcurrentHashMap$SearchEntriesTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$SearchEntriesTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$SearchEntriesTask));
}

void ConcurrentHashMap$SearchEntriesTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Function* searchFunction, $AtomicReference* result) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, searchFunction, searchFunction);
	$set(this, result, result);
}

$Object* ConcurrentHashMap$SearchEntriesTask::getRawResult() {
	return $of($nc(this->result)->get());
}

void ConcurrentHashMap$SearchEntriesTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Function, searchFunction, nullptr);
	$var($AtomicReference, result, nullptr);
	if (($assign(searchFunction, this->searchFunction)) != nullptr && ($assign(result, this->result)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				if ($nc(result)->get() != nullptr) {
					return;
				}
				addToPendingCount(1);
				$$new(ConcurrentHashMap$SearchEntriesTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, searchFunction, result)->fork();
			}
		}
		while ($nc(result)->get() == nullptr) {
			$var($Object, u, nullptr);
			$var($ConcurrentHashMap$Node, p, nullptr);
			if (($assign(p, advance())) == nullptr) {
				propagateCompletion();
				break;
			}
			if (($assign(u, $nc(searchFunction)->apply(p))) != nullptr) {
				if (result->compareAndSet(nullptr, u)) {
					quietlyCompleteRoot();
				}
				return;
			}
		}
	}
}

ConcurrentHashMap$SearchEntriesTask::ConcurrentHashMap$SearchEntriesTask() {
}

$Class* ConcurrentHashMap$SearchEntriesTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$SearchEntriesTask, name, initialize, &_ConcurrentHashMap$SearchEntriesTask_ClassInfo_, allocate$ConcurrentHashMap$SearchEntriesTask);
	return class$;
}

$Class* ConcurrentHashMap$SearchEntriesTask::class$ = nullptr;

		} // concurrent
	} // util
} // java