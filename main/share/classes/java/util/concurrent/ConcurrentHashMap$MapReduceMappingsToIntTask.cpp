#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/ToIntBiFunction.h>
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
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$MapReduceMappingsToIntTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/ToIntBiFunction;", "Ljava/util/function/ToIntBiFunction<-TK;-TV;>;", $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, transformer)},
	{"reducer", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, reducer)},
	{"basis", "I", nullptr, $FINAL, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, basis)},
	{"result", "I", nullptr, 0, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, result)},
	{"rights", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, rights)},
	{"nextRight", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask;", "Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask<TK;TV;>;", 0, $field(ConcurrentHashMap$MapReduceMappingsToIntTask, nextRight)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapReduceMappingsToIntTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask;Ljava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask<TK;TV;>;Ljava/util/function/ToIntBiFunction<-TK;-TV;>;ILjava/util/function/IntBinaryOperator;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapReduceMappingsToIntTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,ConcurrentHashMap$MapReduceMappingsToIntTask*,$ToIntBiFunction*,int32_t,$IntBinaryOperator*)>(&ConcurrentHashMap$MapReduceMappingsToIntTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapReduceMappingsToIntTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapReduceMappingsToIntTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToIntTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToIntTask_FieldInfo_,
	_ConcurrentHashMap$MapReduceMappingsToIntTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Integer;>;",
	nullptr,
	_ConcurrentHashMap$MapReduceMappingsToIntTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapReduceMappingsToIntTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapReduceMappingsToIntTask));
}

void ConcurrentHashMap$MapReduceMappingsToIntTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, ConcurrentHashMap$MapReduceMappingsToIntTask* nextRight, $ToIntBiFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, nextRight, nextRight);
	$set(this, transformer, transformer);
	this->basis = basis;
	$set(this, reducer, reducer);
}

$Object* ConcurrentHashMap$MapReduceMappingsToIntTask::getRawResult() {
	return $of($Integer::valueOf(this->result));
}

void ConcurrentHashMap$MapReduceMappingsToIntTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($ToIntBiFunction, transformer, nullptr);
	$var($IntBinaryOperator, reducer, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(reducer, this->reducer)) != nullptr) {
		int32_t r = this->basis;
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$nc(($assignField(this, rights, $new(ConcurrentHashMap$MapReduceMappingsToIntTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, this->rights, transformer, r, reducer))))->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				r = $nc(reducer)->applyAsInt(r, $nc(transformer)->applyAsInt($nc(p)->key, p->val));
			}
		}
		this->result = r;
		$var($CountedCompleter, c, nullptr);
		for ($assign(c, firstComplete()); c != nullptr; $assign(c, $nc(c)->nextComplete())) {
			$var(ConcurrentHashMap$MapReduceMappingsToIntTask, t, $cast(ConcurrentHashMap$MapReduceMappingsToIntTask, c));
			$var(ConcurrentHashMap$MapReduceMappingsToIntTask, s, t->rights);
			while (s != nullptr) {
				t->result = $nc(reducer)->applyAsInt(t->result, s->result);
				$assign(s, ($assignField(t, rights, s->nextRight)));
			}
		}
	}
}

ConcurrentHashMap$MapReduceMappingsToIntTask::ConcurrentHashMap$MapReduceMappingsToIntTask() {
}

$Class* ConcurrentHashMap$MapReduceMappingsToIntTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapReduceMappingsToIntTask, name, initialize, &_ConcurrentHashMap$MapReduceMappingsToIntTask_ClassInfo_, allocate$ConcurrentHashMap$MapReduceMappingsToIntTask);
	return class$;
}

$Class* ConcurrentHashMap$MapReduceMappingsToIntTask::class$ = nullptr;

		} // concurrent
	} // util
} // java