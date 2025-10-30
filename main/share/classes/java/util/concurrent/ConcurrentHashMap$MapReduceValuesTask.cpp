#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/BiFunction.h>
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
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceValuesTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TV;+TU;>;", $FINAL, $field(ConcurrentHashMap$MapReduceValuesTask, transformer)},
	{"reducer", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TU;-TU;+TU;>;", $FINAL, $field(ConcurrentHashMap$MapReduceValuesTask, reducer)},
	{"result", "Ljava/lang/Object;", "TU;", 0, $field(ConcurrentHashMap$MapReduceValuesTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask<TK;TV;TU;>;", 0, $field(ConcurrentHashMap$MapReduceValuesTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask<TK;TV;TU;>;", 0, $field(ConcurrentHashMap$MapReduceValuesTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceValuesTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask;Ljava/util/function/Function;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesTask<TK;TV;TU;>;Ljava/util/function/Function<-TV;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceValuesTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceValuesTask*,$Function*,$BiFunction*)>(&ConcurrentHashMap$MapReduceValuesTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Object;", "()TU;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceValuesTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceValuesTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceValuesTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceValuesTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceValuesTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;TU;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceValuesTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceValuesTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceValuesTask));
}

void ConcurrentHashMap$MapReduceValuesTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceValuesTask* nextRight, $Function* transformer, $BiFunction* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceValuesTask::getRawResult() {
	return $of(this->result);
}

void ConcurrentHashMap$MapReduceValuesTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Function, transformer, nullptr);
	$var($BiFunction, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceValuesTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, reducer))))->fork();
			}
		}
		$var($Object, r, nullptr);
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$var($Object, u, nullptr);
				if (($assign(u, $nc(transformer)->apply($nc(p)->val))) != nullptr) {
					$assign(r, (r == nullptr) ? u : $nc(reducer)->apply(r, u));
				}
			}
		}
		$set(this, result, r);
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceValuesTask, t, $cast(ConcurrentHashMap$MapReduceValuesTask, c));
			$var(ConcurrentHashMap$MapReduceValuesTask, s, t->rights);
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

ConcurrentHashMap$MapReduceValuesTask::ConcurrentHashMap$MapReduceValuesTask() {
}

$Class* ConcurrentHashMap$MapReduceValuesTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceValuesTask, name, initialize, &_ConcurrentHashMap$MapReduceValuesTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceValuesTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceValuesTask::class$ = nullptr;

		} // concurrent
	} // util
} // java