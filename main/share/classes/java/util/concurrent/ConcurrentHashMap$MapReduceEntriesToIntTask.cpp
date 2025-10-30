#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/ToIntFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $ToIntFunction = ::java::util::function::ToIntFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceEntriesToIntTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToIntFunction;", "Ljava/util/function/ToIntFunction<Ljava/util/Map$Entry<TK;TV;>;>;", $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, transformer)},
	{"reducer", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, reducer)},
	{"basis", "I", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, basis)},
	{"result", "I", nullptr, 0, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceEntriesToIntTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceEntriesToIntTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask;Ljava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask<TK;TV;>;Ljava/util/function/ToIntFunction<Ljava/util/Map$Entry<TK;TV;>;>;ILjava/util/function/IntBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceEntriesToIntTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceEntriesToIntTask*,$ToIntFunction*,int32_t,$IntBinaryOperator*)>(&ConcurrentHashMap$MapReduceEntriesToIntTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceEntriesToIntTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceEntriesToIntTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToIntTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceEntriesToIntTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceEntriesToIntTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Integer;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceEntriesToIntTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceEntriesToIntTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceEntriesToIntTask));
}

void ConcurrentHashMap$MapReduceEntriesToIntTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceEntriesToIntTask* nextRight, $ToIntFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceEntriesToIntTask::getRawResult() {
	return $of($Integer::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceEntriesToIntTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToIntFunction, transformer, nullptr);
	$var($IntBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		int32_t r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceEntriesToIntTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsInt(r, $nc(transformer)->applyAsInt(p));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceEntriesToIntTask, t, $cast(ConcurrentHashMap$MapReduceEntriesToIntTask, c));
			$var(ConcurrentHashMap$MapReduceEntriesToIntTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsInt(t->result, s->result);
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceEntriesToIntTask::ConcurrentHashMap$MapReduceEntriesToIntTask() {
}

$Class* ConcurrentHashMap$MapReduceEntriesToIntTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceEntriesToIntTask, name, initialize, &_ConcurrentHashMap$MapReduceEntriesToIntTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceEntriesToIntTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceEntriesToIntTask::class$ = nullptr;

		} // concurrent
	} // util
} // java