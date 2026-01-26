#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/ToLongFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ToLongFunction = ::java::util::function::ToLongFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceEntriesToLongTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToLongFunction;", "Ljava/util/function/ToLongFunction<Ljava/util/Map$Entry<TK;TV;>;>;", $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, transformer)},
	{"reducer", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, reducer)},
	{"basis", "J", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, basis)},
	{"result", "J", nullptr, 0, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceEntriesToLongTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceEntriesToLongTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask;Ljava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask<TK;TV;>;Ljava/util/function/ToLongFunction<Ljava/util/Map$Entry<TK;TV;>;>;JLjava/util/function/LongBinaryOperator;)V", 0, $method(ConcurrentHashMap$MapReduceEntriesToLongTask, init$, void, $ConcurrentHashMap$BulkTask*, int32_t, int32_t, int32_t, $ConcurrentHashMap$NodeArray*, ConcurrentHashMap$MapReduceEntriesToLongTask*, $ToLongFunction*, int64_t, $LongBinaryOperator*)},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$MapReduceEntriesToLongTask, compute, void)},
	{"getRawResult", "()Ljava/lang/Long;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$MapReduceEntriesToLongTask, getRawResult, $Object*)},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceEntriesToLongTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceEntriesToLongTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToLongTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceEntriesToLongTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceEntriesToLongTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Long;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceEntriesToLongTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceEntriesToLongTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceEntriesToLongTask));
}

void ConcurrentHashMap$MapReduceEntriesToLongTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceEntriesToLongTask* nextRight, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceEntriesToLongTask::getRawResult() {
	return $of($Long::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceEntriesToLongTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToLongFunction, transformer, nullptr);
	$var($LongBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		int64_t r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceEntriesToLongTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsLong(r, $nc(transformer)->applyAsLong(p));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceEntriesToLongTask, t, $cast(ConcurrentHashMap$MapReduceEntriesToLongTask, c));
			$var(ConcurrentHashMap$MapReduceEntriesToLongTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsLong(t->result, s->result);
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceEntriesToLongTask::ConcurrentHashMap$MapReduceEntriesToLongTask() {
}

$Class* ConcurrentHashMap$MapReduceEntriesToLongTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceEntriesToLongTask, name, initialize, &_ConcurrentHashMap$MapReduceEntriesToLongTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceEntriesToLongTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceEntriesToLongTask::class$ = nullptr;

		} // concurrent
	} // util
} // java