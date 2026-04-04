#include <java/util/concurrent/ConcurrentHashMap$ForEachValueTask.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$ForEachValueTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Consumer* action) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, action, action);
}

void ConcurrentHashMap$ForEachValueTask::compute() {
	$useLocalObjectStack();
	$var($Consumer, action, nullptr);
	if (($assign(action, this->action)) != nullptr) {
		for (int32_t i = this->baseIndex, f = 0, h = 0; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
			addToPendingCount(1);
			$$new(ConcurrentHashMap$ForEachValueTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, action)->fork();
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$nc(action)->accept($nc(p)->val);
			}
		}
		propagateCompletion();
	}
}

ConcurrentHashMap$ForEachValueTask::ConcurrentHashMap$ForEachValueTask() {
}

$Class* ConcurrentHashMap$ForEachValueTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"action", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TV;>;", $FINAL, $field(ConcurrentHashMap$ForEachValueTask, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Consumer<-TV;>;)V", 0, $method(ConcurrentHashMap$ForEachValueTask, init$, void, $ConcurrentHashMap$BulkTask*, int32_t, int32_t, int32_t, $ConcurrentHashMap$NodeArray*, $Consumer*)},
		{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$ForEachValueTask, compute, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$ForEachValueTask", "java.util.concurrent.ConcurrentHashMap", "ForEachValueTask", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$ForEachValueTask",
		"java.util.concurrent.ConcurrentHashMap$BulkTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$ForEachValueTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentHashMap$ForEachValueTask));
	});
	return class$;
}

$Class* ConcurrentHashMap$ForEachValueTask::class$ = nullptr;

		} // concurrent
	} // util
} // java