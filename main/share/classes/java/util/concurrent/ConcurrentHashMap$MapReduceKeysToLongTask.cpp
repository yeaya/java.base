#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask.h>

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

$FieldInfo _ConcurrentHashMap$MapReduceKeysToLongTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToLongFunction;", "Ljava/util/function/ToLongFunction<-TK;>;", $FINAL, $field(ConcurrentHashMap$MapReduceKeysToLongTask, transformer)},
	{"reducer", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceKeysToLongTask, reducer)},
	{"basis", "J", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceKeysToLongTask, basis)},
	{"result", "J", nullptr, 0, $field(ConcurrentHashMap$MapReduceKeysToLongTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceKeysToLongTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceKeysToLongTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceKeysToLongTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask;Ljava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask<TK;TV;>;Ljava/util/function/ToLongFunction<-TK;>;JLjava/util/function/LongBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceKeysToLongTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceKeysToLongTask*,$ToLongFunction*,int64_t,$LongBinaryOperator*)>(&ConcurrentHashMap$MapReduceKeysToLongTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Long;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceKeysToLongTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceKeysToLongTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToLongTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceKeysToLongTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceKeysToLongTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Long;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceKeysToLongTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceKeysToLongTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceKeysToLongTask));
}

void ConcurrentHashMap$MapReduceKeysToLongTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceKeysToLongTask* nextRight, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceKeysToLongTask::getRawResult() {
	return $of($Long::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceKeysToLongTask::compute() {
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
				$nc(($assignField(this, rights, $new(ConcurrentHashMap$MapReduceKeysToLongTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsLong(r, $nc(transformer)->applyAsLong($nc(p)->key));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceKeysToLongTask, t, $cast(ConcurrentHashMap$MapReduceKeysToLongTask, c));
			$var(ConcurrentHashMap$MapReduceKeysToLongTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsLong(t->result, s->result);
				$assign(s, ($assignField(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceKeysToLongTask::ConcurrentHashMap$MapReduceKeysToLongTask() {
}

$Class* ConcurrentHashMap$MapReduceKeysToLongTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceKeysToLongTask, name, initialize, &_ConcurrentHashMap$MapReduceKeysToLongTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceKeysToLongTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceKeysToLongTask::class$ = nullptr;

		} // concurrent
	} // util
} // java