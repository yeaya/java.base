#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/function/ToDoubleFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $ToDoubleFunction = ::java::util::function::ToDoubleFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceKeysToDoubleTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToDoubleFunction;", "Ljava/util/function/ToDoubleFunction<-TK;>;", $FINAL, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, transformer)},
	{"reducer", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, reducer)},
	{"basis", "D", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, basis)},
	{"result", "D", nullptr, 0, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceKeysToDoubleTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceKeysToDoubleTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask;Ljava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask<TK;TV;>;Ljava/util/function/ToDoubleFunction<-TK;>;DLjava/util/function/DoubleBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceKeysToDoubleTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceKeysToDoubleTask*,$ToDoubleFunction*,double,$DoubleBinaryOperator*)>(&ConcurrentHashMap$MapReduceKeysToDoubleTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Double;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceKeysToDoubleTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceKeysToDoubleTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToDoubleTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceKeysToDoubleTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceKeysToDoubleTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Double;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceKeysToDoubleTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceKeysToDoubleTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceKeysToDoubleTask));
}

void ConcurrentHashMap$MapReduceKeysToDoubleTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceKeysToDoubleTask* nextRight, $ToDoubleFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceKeysToDoubleTask::getRawResult() {
	return $of($Double::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceKeysToDoubleTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToDoubleFunction, transformer, nullptr);
	$var($DoubleBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		double r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceKeysToDoubleTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsDouble(r, $nc(transformer)->applyAsDouble($nc(p)->key));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceKeysToDoubleTask, t, $cast(ConcurrentHashMap$MapReduceKeysToDoubleTask, c));
			$var(ConcurrentHashMap$MapReduceKeysToDoubleTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsDouble(t->result, s->result);
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceKeysToDoubleTask::ConcurrentHashMap$MapReduceKeysToDoubleTask() {
}

$Class* ConcurrentHashMap$MapReduceKeysToDoubleTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceKeysToDoubleTask, name, initialize, &_ConcurrentHashMap$MapReduceKeysToDoubleTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceKeysToDoubleTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceKeysToDoubleTask::class$ = nullptr;

		} // concurrent
	} // util
} // java