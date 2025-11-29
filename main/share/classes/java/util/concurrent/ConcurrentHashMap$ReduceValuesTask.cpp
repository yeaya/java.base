#include <java/util/concurrent/ConcurrentHashMap$ReduceValuesTask.h>

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
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ReduceValuesTask_FieldInfo_[] = {
	{"reducer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TV;-TV;+TV;>;", $FINAL, $field(ConcurrentHashMap$ReduceValuesTask, reducer)},
	{"result", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentHashMap$ReduceValuesTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceValuesTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask;", "Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask<TK;TV;>;", 0, $field(ConcurrentHashMap$ReduceValuesTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$ReduceValuesTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$ReduceValuesTask<TK;TV;>;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ReduceValuesTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$ReduceValuesTask*,$BiFunction*)>(&ConcurrentHashMap$ReduceValuesTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ReduceValuesTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ReduceValuesTask", "java.util.concurrent.ConcurrentHashMap", "ReduceValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ReduceValuesTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ReduceValuesTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ReduceValuesTask_FieldInfo_,
	_ConcurrentHashMap$ReduceValuesTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TV;>;",
	nullptr,
	_ConcurrentHashMap$ReduceValuesTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ReduceValuesTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ReduceValuesTask));
}

void ConcurrentHashMap$ReduceValuesTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$ReduceValuesTask* nextRight, $BiFunction* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$ReduceValuesTask::getRawResult() {
	return $of(this->result);
}

void ConcurrentHashMap$ReduceValuesTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BiFunction, reducer, nullptr);
	if (($assign(reducer, this->reducer)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$ReduceValuesTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, reducer))))->fork();
			}
		}
		$var($Object, r, nullptr);
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$var($Object, v, $nc(p)->val);
				$assign(r, (r == nullptr) ? v : $nc(reducer)->apply(r, v));
			}
		}
		$set(this, result, r);
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$ReduceValuesTask, t, $cast(ConcurrentHashMap$ReduceValuesTask, c));
			$var(ConcurrentHashMap$ReduceValuesTask, s, t->rights);
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

ConcurrentHashMap$ReduceValuesTask::ConcurrentHashMap$ReduceValuesTask() {
}

$Class* ConcurrentHashMap$ReduceValuesTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ReduceValuesTask, name, initialize, &_ConcurrentHashMap$ReduceValuesTask_ClassInfo_, allocate$ConcurrentHashMap$ReduceValuesTask);
	return class$;
}

$Class* ConcurrentHashMap$ReduceValuesTask::class$ = nullptr;

		} // concurrent
	} // util
} // java