#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/function/ToDoubleBiFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $ToDoubleBiFunction = ::java::util::function::ToDoubleBiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceMappingsToDoubleTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToDoubleBiFunction;", "Ljava/util/function/ToDoubleBiFunction<-TK;-TV;>;", $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, transformer)},
	{"reducer", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, reducer)},
	{"basis", "D", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, basis)},
	{"result", "D", nullptr, 0, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToDoubleTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceMappingsToDoubleTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask;Ljava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask<TK;TV;>;Ljava/util/function/ToDoubleBiFunction<-TK;-TV;>;DLjava/util/function/DoubleBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceMappingsToDoubleTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceMappingsToDoubleTask*,$ToDoubleBiFunction*,double,$DoubleBinaryOperator*)>(&ConcurrentHashMap$MapReduceMappingsToDoubleTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Double;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceMappingsToDoubleTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceMappingsToDoubleTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToDoubleTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToDoubleTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceMappingsToDoubleTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Double;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToDoubleTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceMappingsToDoubleTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceMappingsToDoubleTask));
}

void ConcurrentHashMap$MapReduceMappingsToDoubleTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceMappingsToDoubleTask* nextRight, $ToDoubleBiFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceMappingsToDoubleTask::getRawResult() {
	return $of($Double::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceMappingsToDoubleTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToDoubleBiFunction, transformer, nullptr);
	$var($DoubleBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		double r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceMappingsToDoubleTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsDouble(r, $nc(transformer)->applyAsDouble($nc(p)->key, p->val));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceMappingsToDoubleTask, t, $cast(ConcurrentHashMap$MapReduceMappingsToDoubleTask, c));
			$var(ConcurrentHashMap$MapReduceMappingsToDoubleTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsDouble(t->result, s->result);
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceMappingsToDoubleTask::ConcurrentHashMap$MapReduceMappingsToDoubleTask() {
}

$Class* ConcurrentHashMap$MapReduceMappingsToDoubleTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceMappingsToDoubleTask, name, initialize, &_ConcurrentHashMap$MapReduceMappingsToDoubleTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceMappingsToDoubleTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceMappingsToDoubleTask::class$ = nullptr;

		} // concurrent
	} // util
} // java