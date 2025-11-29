#include <java/util/concurrent/ConcurrentHashMap$SearchValuesTask.h>

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
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$SearchValuesTask_FieldInfo_[] = {
	{"searchFunction", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TV;+TU;>;", $FINAL, $field(ConcurrentHashMap$SearchValuesTask, searchFunction)},
	{"result", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<TU;>;", $FINAL, $field(ConcurrentHashMap$SearchValuesTask, result)},
	{}
};

$MethodInfo _ConcurrentHashMap$SearchValuesTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Function;Ljava/util/concurrent/atomic/AtomicReference;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Function<-TV;+TU;>;Ljava/util/concurrent/atomic/AtomicReference<TU;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$SearchValuesTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$Function*,$AtomicReference*)>(&ConcurrentHashMap$SearchValuesTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$SearchValuesTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$SearchValuesTask", "java.util.concurrent.ConcurrentHashMap", "SearchValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$SearchValuesTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$SearchValuesTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$SearchValuesTask_FieldInfo_,
	_ConcurrentHashMap$SearchValuesTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
	nullptr,
	_ConcurrentHashMap$SearchValuesTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$SearchValuesTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$SearchValuesTask));
}

void ConcurrentHashMap$SearchValuesTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Function* searchFunction, $AtomicReference* result) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, searchFunction, searchFunction);
	$set(this, result, result);
}

$Object* ConcurrentHashMap$SearchValuesTask::getRawResult() {
	return $of($nc(this->result)->get());
}

void ConcurrentHashMap$SearchValuesTask::compute() {
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
				$$new(ConcurrentHashMap$SearchValuesTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, searchFunction, result)->fork();
			}
		}
		while ($nc(result)->get() == nullptr) {
			$var($Object, u, nullptr);
			$var($ConcurrentHashMap$Node, p, nullptr);
			if (($assign(p, advance())) == nullptr) {
				propagateCompletion();
				break;
			}
			if (($assign(u, $nc(searchFunction)->apply($nc(p)->val))) != nullptr) {
				if (result->compareAndSet(nullptr, u)) {
					quietlyCompleteRoot();
				}
				break;
			}
		}
	}
}

ConcurrentHashMap$SearchValuesTask::ConcurrentHashMap$SearchValuesTask() {
}

$Class* ConcurrentHashMap$SearchValuesTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$SearchValuesTask, name, initialize, &_ConcurrentHashMap$SearchValuesTask_ClassInfo_, allocate$ConcurrentHashMap$SearchValuesTask);
	return class$;
}

$Class* ConcurrentHashMap$SearchValuesTask::class$ = nullptr;

		} // concurrent
	} // util
} // java