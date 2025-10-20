#include <java/util/concurrent/ConcurrentHashMap$ForEachTransformedValueTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Consumer.h>
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
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ForEachTransformedValueTask_FieldInfo_[] = {
	{"transformer", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TV;+TU;>;", $FINAL, $field(ConcurrentHashMap$ForEachTransformedValueTask, transformer)},
	{"action", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TU;>;", $FINAL, $field(ConcurrentHashMap$ForEachTransformedValueTask, action)},
	{}
};

$MethodInfo _ConcurrentHashMap$ForEachTransformedValueTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Function;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Function<-TV;+TU;>;Ljava/util/function/Consumer<-TU;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ForEachTransformedValueTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$Function*,$Consumer*)>(&ConcurrentHashMap$ForEachTransformedValueTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ForEachTransformedValueTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ForEachTransformedValueTask", "java.util.concurrent.ConcurrentHashMap", "ForEachTransformedValueTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ForEachTransformedValueTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ForEachTransformedValueTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ForEachTransformedValueTask_FieldInfo_,
	_ConcurrentHashMap$ForEachTransformedValueTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Void;>;",
	nullptr,
	_ConcurrentHashMap$ForEachTransformedValueTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ForEachTransformedValueTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ForEachTransformedValueTask));
}

void ConcurrentHashMap$ForEachTransformedValueTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Function* transformer, $Consumer* action) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, transformer, transformer);
	$set(this, action, action);
}

void ConcurrentHashMap$ForEachTransformedValueTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Function, transformer, nullptr);
	$var($Consumer, action, nullptr);
	if (($assign(transformer, this->transformer)) != nullptr && ($assign(action, this->action)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$$new(ConcurrentHashMap$ForEachTransformedValueTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, transformer, action)->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$var($Object, u, nullptr);
				if (($assign(u, $nc(transformer)->apply($nc(p)->val))) != nullptr) {
					$nc(action)->accept(u);
				}
			}
		}
		propagateCompletion();
	}
}

ConcurrentHashMap$ForEachTransformedValueTask::ConcurrentHashMap$ForEachTransformedValueTask() {
}

$Class* ConcurrentHashMap$ForEachTransformedValueTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ForEachTransformedValueTask, name, initialize, &_ConcurrentHashMap$ForEachTransformedValueTask_ClassInfo_, allocate$ConcurrentHashMap$ForEachTransformedValueTask);
	return class$;
}

$Class* ConcurrentHashMap$ForEachTransformedValueTask::class$ = nullptr;

		} // concurrent
	} // util
} // java