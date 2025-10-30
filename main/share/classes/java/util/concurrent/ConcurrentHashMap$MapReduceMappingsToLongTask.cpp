#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask.h>

#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/ToLongBiFunction.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ToLongBiFunction = ::java::util::function::ToLongBiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceMappingsToLongTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToLongBiFunction;", "Ljava/util/function/ToLongBiFunction<-TK;-TV;>;", $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, transformer)},
	{"reducer", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, reducer)},
	{"basis", "J", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, basis)},
	{"result", "J", nullptr, 0, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToLongTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceMappingsToLongTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask;Ljava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask<TK;TV;>;Ljava/util/function/ToLongBiFunction<-TK;-TV;>;JLjava/util/function/LongBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceMappingsToLongTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceMappingsToLongTask*,$ToLongBiFunction*,int64_t,$LongBinaryOperator*)>(&ConcurrentHashMap$MapReduceMappingsToLongTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Long;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceMappingsToLongTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceMappingsToLongTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToLongTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToLongTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceMappingsToLongTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Long;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToLongTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceMappingsToLongTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceMappingsToLongTask));
}

void ConcurrentHashMap$MapReduceMappingsToLongTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceMappingsToLongTask* nextRight, $ToLongBiFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceMappingsToLongTask::getRawResult() {
	return $of($Long::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceMappingsToLongTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToLongBiFunction, transformer, nullptr);
	$var($LongBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		int64_t r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($set(this, rights, $new(ConcurrentHashMap$MapReduceMappingsToLongTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsLong(r, $nc(transformer)->applyAsLong($nc(p)->key, p->val));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceMappingsToLongTask, t, $cast(ConcurrentHashMap$MapReduceMappingsToLongTask, c));
			$var(ConcurrentHashMap$MapReduceMappingsToLongTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsLong(t->result, s->result);
				$assign(s, ($set(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceMappingsToLongTask::ConcurrentHashMap$MapReduceMappingsToLongTask() {
}

$Class* ConcurrentHashMap$MapReduceMappingsToLongTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceMappingsToLongTask, name, initialize, &_ConcurrentHashMap$MapReduceMappingsToLongTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceMappingsToLongTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceMappingsToLongTask::class$ = nullptr;

		} // concurrent
	} // util
} // java