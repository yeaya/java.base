#include <java/util/concurrent/ConcurrentHashMap$SearchKeysTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ConcurrentHashMap$SearchKeysTask_FieldInfo_[] = {
	{"searchFunction", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TK;+TU;>;", $FINAL, $field(ConcurrentHashMap$SearchKeysTask, searchFunction)},
	{"result", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<TU;>;", $FINAL, $field(ConcurrentHashMap$SearchKeysTask, result)},
	{}
};

$MethodInfo _ConcurrentHashMap$SearchKeysTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Function;Ljava/util/concurrent/atomic/AtomicReference;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Function<-TK;+TU;>;Ljava/util/concurrent/atomic/AtomicReference<TU;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$SearchKeysTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$Function*,$AtomicReference*)>(&ConcurrentHashMap$SearchKeysTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$SearchKeysTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$SearchKeysTask", "java.util.concurrent.ConcurrentHashMap", "SearchKeysTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$SearchKeysTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$SearchKeysTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$SearchKeysTask_FieldInfo_,
	_ConcurrentHashMap$SearchKeysTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
	nullptr,
	_ConcurrentHashMap$SearchKeysTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$SearchKeysTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$SearchKeysTask));
}

void ConcurrentHashMap$SearchKeysTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Function* searchFunction, $AtomicReference* result) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, searchFunction, searchFunction);
	$set(this, result, result);
}

$Object* ConcurrentHashMap$SearchKeysTask::getRawResult() {
	return $of($nc(this->result)->get());
}

void ConcurrentHashMap$SearchKeysTask::compute() {
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
				$$new(ConcurrentHashMap$SearchKeysTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, searchFunction, result)->fork();
			}
		}
		while ($nc(result)->get() == nullptr) {
			$var($Object, u, nullptr);
			$var($ConcurrentHashMap$Node, p, nullptr);
			if (($assign(p, advance())) == nullptr) {
				propagateCompletion();
				break;
			}
			if (($assign(u, $nc(searchFunction)->apply($nc(p)->key))) != nullptr) {
				if (result->compareAndSet(nullptr, u)) {
					quietlyCompleteRoot();
				}
				break;
			}
		}
	}
}

ConcurrentHashMap$SearchKeysTask::ConcurrentHashMap$SearchKeysTask() {
}

$Class* ConcurrentHashMap$SearchKeysTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$SearchKeysTask, name, initialize, &_ConcurrentHashMap$SearchKeysTask_ClassInfo_, allocate$ConcurrentHashMap$SearchKeysTask);
	return class$;
}

$Class* ConcurrentHashMap$SearchKeysTask::class$ = nullptr;

		} // concurrent
	} // util
} // java