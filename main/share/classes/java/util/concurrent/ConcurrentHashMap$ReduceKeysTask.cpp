#include <java/util/concurrent/ConcurrentHashMap$ReduceKeysTask.h>

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
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ReduceKeysTask_FieldInfo_[] = {
	{"reducer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TK;-TK;+TK;>;", $FINAL, $field(ConcurrentHashMap$ReduceKeysTask, reducer)},
	{"result", "Ljava/lang/Object;", "TK;", 0, $field(ConcurrentHashMap$ReduceKeysTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceKeysTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceKeysTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$ReduceKeysTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$ReduceKeysTask<TK;TV;>;Ljava/util/function/BiFunction<-TK;-TK;+TK;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ReduceKeysTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$ReduceKeysTask*,$BiFunction*)>(&ConcurrentHashMap$ReduceKeysTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ReduceKeysTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ReduceKeysTask", "java.util.concurrent.ConcurrentHashMap", "ReduceKeysTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ReduceKeysTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ReduceKeysTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ReduceKeysTask_FieldInfo_,
	_ConcurrentHashMap$ReduceKeysTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TK;>;",
	nullptr,
	_ConcurrentHashMap$ReduceKeysTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ReduceKeysTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ReduceKeysTask));
}

void ConcurrentHashMap$ReduceKeysTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$ReduceKeysTask* nextRight, $BiFunction* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$ReduceKeysTask::getRawResult() {
	return $of(this->result);
}

void ConcurrentHashMap$ReduceKeysTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BiFunction, reducer, nullptr);
	if (($assign(reducer, this->reducer)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$ReduceKeysTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, reducer))))->fork();
			}
		}
		$var($Object, r, nullptr);
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$var($Object, u, $nc(p)->key);
				$assign(r, (r == nullptr) ? u : u == nullptr ? r : $nc(reducer)->apply(r, u));
			}
		}
		$set(this, result, r);
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$ReduceKeysTask, t, $cast(ConcurrentHashMap$ReduceKeysTask, c));
			$var(ConcurrentHashMap$ReduceKeysTask, s, t->rights);
			while (s != nullptr) {
				$var($Object, tr, nullptr);
				$var($Object, sr, nullptr);
				if (($assign(sr, s->result)) != nullptr) {
					$set(t, result, (($assign(tr, t->result)) == nullptr) ? sr : $nc(reducer)->apply(tr, sr));
				}
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$ReduceKeysTask::ConcurrentHashMap$ReduceKeysTask() {
}

$Class* ConcurrentHashMap$ReduceKeysTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ReduceKeysTask, name, initialize, &_ConcurrentHashMap$ReduceKeysTask_ClassInfo_, allocate$ConcurrentHashMap$ReduceKeysTask);
	return class$;
}

$Class* ConcurrentHashMap$ReduceKeysTask::class$ = nullptr;

		} // concurrent
	} // util
} // java