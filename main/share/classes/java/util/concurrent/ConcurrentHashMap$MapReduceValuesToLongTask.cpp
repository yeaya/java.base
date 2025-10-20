#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ToLongFunction = ::java::util::function::ToLongFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceValuesToLongTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToLongFunction;", "Ljava/util/function/ToLongFunction<-TV;>;", $FINAL, $field(ConcurrentHashMap$MapReduceValuesToLongTask, transformer)},
	{"reducer", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceValuesToLongTask, reducer)},
	{"basis", "J", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceValuesToLongTask, basis)},
	{"result", "J", nullptr, 0, $field(ConcurrentHashMap$MapReduceValuesToLongTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceValuesToLongTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceValuesToLongTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceValuesToLongTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask;Ljava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask<TK;TV;>;Ljava/util/function/ToLongFunction<-TV;>;JLjava/util/function/LongBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceValuesToLongTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceValuesToLongTask*,$ToLongFunction*,int64_t,$LongBinaryOperator*)>(&ConcurrentHashMap$MapReduceValuesToLongTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Long;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceValuesToLongTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceValuesToLongTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceValuesToLongTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceValuesToLongTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceValuesToLongTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Long;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceValuesToLongTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceValuesToLongTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceValuesToLongTask));
}

void ConcurrentHashMap$MapReduceValuesToLongTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceValuesToLongTask* nextRight, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceValuesToLongTask::getRawResult() {
	return $of($Long::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceValuesToLongTask::compute() {
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
				$nc(($assignField(this, rights, $new(ConcurrentHashMap$MapReduceValuesToLongTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsLong(r, $nc(transformer)->applyAsLong($nc(p)->val));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceValuesToLongTask, t, $cast(ConcurrentHashMap$MapReduceValuesToLongTask, c));
			$var(ConcurrentHashMap$MapReduceValuesToLongTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsLong(t->result, s->result);
				$assign(s, ($assignField(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceValuesToLongTask::ConcurrentHashMap$MapReduceValuesToLongTask() {
}

$Class* ConcurrentHashMap$MapReduceValuesToLongTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceValuesToLongTask, name, initialize, &_ConcurrentHashMap$MapReduceValuesToLongTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceValuesToLongTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceValuesToLongTask::class$ = nullptr;

		} // concurrent
	} // util
} // java