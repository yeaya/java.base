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
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ForEachMappingTask_FieldInfo_[] = {
	{"action", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<-TK;-TV;>;", $FINAL, $field(ConcurrentHashMap$ForEachMappingTask, action)},
	{}
};

$MethodInfo _ConcurrentHashMap$ForEachMappingTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/function/BiConsumer;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/function/BiConsumer<-TK;-TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ForEachMappingTask::*)($ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*,$BiConsumer*)>(&ConcurrentHashMap$ForEachMappingTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ForEachMappingTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ForEachMappingTask", "java.util.concurrent.ConcurrentHashMap", "ForEachMappingTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ForEachMappingTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ForEachMappingTask",
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	nullptr,
	_ConcurrentHashMap$ForEachMappingTask_FieldInfo_,
	_ConcurrentHashMap$ForEachMappingTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;Ljava/lang/Void;>;",
	nullptr,
	_ConcurrentHashMap$ForEachMappingTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ForEachMappingTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ForEachMappingTask));
}

void ConcurrentHashMap$ForEachMappingTask::init$($ConcurrentHashMap$BulkTask* p, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t, $BiConsumer* action) {
	$ConcurrentHashMap$BulkTask::init$(p, b, i, f, t);
	$set(this, action, action);
}

void ConcurrentHashMap$ForEachMappingTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($BiConsumer, action, nullptr);
	if (($assign(action, this->action)) != nullptr) {
		{
			int32_t i = this->baseIndex;
			int32_t f = 0;
			int32_t h = 0;
			for (; this->batch > 0 && (h = (int32_t)((uint32_t)((f = this->baseLimit) + i) >> 1)) > i;) {
				addToPendingCount(1);
				$$new(ConcurrentHashMap$ForEachMappingTask, this, $usrAssign(this->batch, 1), this->baseLimit = h, f, this->tab, action)->fork();
			}
		}
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, advance())) != nullptr;) {
				$nc(action)->accept($nc(p)->key, p->val);
			}
		}
		propagateCompletion();
	}
}

ConcurrentHashMap$ForEachMappingTask::ConcurrentHashMap$ForEachMappingTask() {
}

$Class* ConcurrentHashMap$ForEachMappingTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ForEachMappingTask, name, initialize, &_ConcurrentHashMap$ForEachMappingTask_ClassInfo_, allocate$ConcurrentHashMap$ForEachMappingTask);
	return class$;
}

$Class* ConcurrentHashMap$ForEachMappingTask::class$ = nullptr;

		} // concurrent
	} // util
} // java