#include <java/util/concurrent/ConcurrentHashMap$SearchMappingsTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$SearchMappingsTask_FieldInfo_[] = {
	{"searchFunction", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TK;-TV;+TU;>;", $FINAL, $field(ConcurrentHashMap$SearchMappingsTask, searchFunction)},
	{"result", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<TU;>;", $FINAL, $field(ConcurrentHashMap$SearchMappingsTask, result)},
	{}
};

$MethodInfo _ConcurrentHashMap$SearchMappingsTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/BiFunction;Ljava/util/concurrent/atomic/AtomicReference;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/BiFunction<-TK;-TV;+TU;>;Ljava/util/concurrent/atomic/AtomicReference<TU;>;)V", 0, $method(ConcurrentHashMap$SearchMappingsTask, init$, void, $ConcurrentHashMap$BulkTask*, int32_t, int32_t, int32_t, $ConcurrentHashMap$NodeArray*, $BiFunction*, $AtomicReference*)},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$SearchMappingsTask, compute, void)},
	{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$SearchMappingsTask, getRawResult, $Object*)},
	{}
};

$InnerClassInfo _ConcurrentHashMap$SearchMappingsTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$SearchMappingsTask", "java.util.concurrent.ConcurrentHashMap", "SearchMappingsTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$SearchMappingsTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$SearchMappingsTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$SearchMappingsTask_FieldInfo_,
	_ConcurrentHashMap$SearchMappingsTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
	nullptr,
	_ConcurrentHashMap$SearchMappingsTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$SearchMappingsTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$SearchMappingsTask));
}

void ConcurrentHashMap$SearchMappingsTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $BiFunction* searchFunction, $AtomicReference* result) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, searchFunction, searchFunction);
	$set(this, result, result);
}

$Object* ConcurrentHashMap$SearchMappingsTask::getRawResult() {
	return $of($nc(this->result)->get());
}

void ConcurrentHashMap$SearchMappingsTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BiFunction, searchFunction, nullptr);
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
				$$new(ConcurrentHashMap$SearchMappingsTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, searchFunction, result)->fork();
			}
		}
		while ($nc(result)->get() == nullptr) {
			$var($Object, u, nullptr);
			$var($ConcurrentHashMap$Node, p, nullptr);
			if (($assign(p, advance())) == nullptr) {
				propagateCompletion();
				break;
			}
			if (($assign(u, $nc(searchFunction)->apply($nc(p)->key, p->val))) != nullptr) {
				if (result->compareAndSet(nullptr, u)) {
					quietlyCompleteRoot();
				}
				break;
			}
		}
	}
}

ConcurrentHashMap$SearchMappingsTask::ConcurrentHashMap$SearchMappingsTask() {
}

$Class* ConcurrentHashMap$SearchMappingsTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$SearchMappingsTask, name, initialize, &_ConcurrentHashMap$SearchMappingsTask_ClassInfo_, allocate$ConcurrentHashMap$SearchMappingsTask);
	return class$;
}

$Class* ConcurrentHashMap$SearchMappingsTask::class$ = nullptr;

		} // concurrent
	} // util
} // java