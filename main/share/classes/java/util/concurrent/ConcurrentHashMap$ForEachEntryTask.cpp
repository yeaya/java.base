#include <java/util/concurrent/ConcurrentHashMap$ForEachEntryTask.h>

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
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ForEachEntryTask_FieldInfo_[] = {
	{"action", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;", $FINAL, $field(ConcurrentHashMap$ForEachEntryTask, action)},
	{}
};

$MethodInfo _ConcurrentHashMap$ForEachEntryTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ForEachEntryTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$Consumer*)>(&ConcurrentHashMap$ForEachEntryTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ForEachEntryTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ForEachEntryTask", "java.util.concurrent.ConcurrentHashMap", "ForEachEntryTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ForEachEntryTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ForEachEntryTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ForEachEntryTask_FieldInfo_,
	_ConcurrentHashMap$ForEachEntryTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Void;>;",
	nullptr,
	_ConcurrentHashMap$ForEachEntryTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ForEachEntryTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ForEachEntryTask));
}

void ConcurrentHashMap$ForEachEntryTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $Consumer* action) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, action, action);
}

void ConcurrentHashMap$ForEachEntryTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Consumer, action, nullptr);
	if (($assign(action, this->action)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$$new(ConcurrentHashMap$ForEachEntryTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, action)->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$nc(action)->accept(p);
			}
		}
		propagateCompletion();
	}
}

ConcurrentHashMap$ForEachEntryTask::ConcurrentHashMap$ForEachEntryTask() {
}

$Class* ConcurrentHashMap$ForEachEntryTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ForEachEntryTask, name, initialize, &_ConcurrentHashMap$ForEachEntryTask_ClassInfo_, allocate$ConcurrentHashMap$ForEachEntryTask);
	return class$;
}

$Class* ConcurrentHashMap$ForEachEntryTask::class$ = nullptr;

		} // concurrent
	} // util
} // java