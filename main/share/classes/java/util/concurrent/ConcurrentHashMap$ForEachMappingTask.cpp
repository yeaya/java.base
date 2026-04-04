#include <java/util/concurrent/ConcurrentHashMap$ForEachMappingTask.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$ForEachMappingTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $BiConsumer* action) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, action, action);
}

void ConcurrentHashMap$ForEachMappingTask::compute() {
	$useLocalObjectStack();
	$var($BiConsumer, action, nullptr);
	if (($assign(action, this->action)) != nullptr) {
		for (int32_t i = this->baseIndex, f = 0, h = 0; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
			addToPendingCount(1);
			$$new(ConcurrentHashMap$ForEachMappingTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, action)->fork();
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$nc(action)->accept($nc(p)->key, $nc(p)->val);
			}
		}
		propagateCompletion();
	}
}

ConcurrentHashMap$ForEachMappingTask::ConcurrentHashMap$ForEachMappingTask() {
}

$Class* ConcurrentHashMap$ForEachMappingTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"action", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<-TK;-TV;>;", $FINAL, $field(ConcurrentHashMap$ForEachMappingTask, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/BiConsumer;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/BiConsumer<-TK;-TV;>;)V", 0, $method(ConcurrentHashMap$ForEachMappingTask, init$, void, $ConcurrentHashMap$BulkTask*, int32_t, int32_t, int32_t, $ConcurrentHashMap$NodeArray*, $BiConsumer*)},
		{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$ForEachMappingTask, compute, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$ForEachMappingTask", "java.util.concurrent.ConcurrentHashMap", "ForEachMappingTask", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$ForEachMappingTask",
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
	$loadClass(ConcurrentHashMap$ForEachMappingTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentHashMap$ForEachMappingTask));
	});
	return class$;
}

$Class* ConcurrentHashMap$ForEachMappingTask::class$ = nullptr;

		} // concurrent
	} // util
} // java