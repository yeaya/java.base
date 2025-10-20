#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap$ForwardingNode.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$TableStack.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeBin.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeNode.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$ForwardingNode = ::java::util::concurrent::ConcurrentHashMap$ForwardingNode;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$TableStack = ::java::util::concurrent::ConcurrentHashMap$TableStack;
using $ConcurrentHashMap$TreeBin = ::java::util::concurrent::ConcurrentHashMap$TreeBin;
using $ConcurrentHashMap$TreeNode = ::java::util::concurrent::ConcurrentHashMap$TreeNode;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$BulkTask_FieldInfo_[] = {
	{"tab", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$BulkTask, tab)},
	{"next", "Ljava/util/concurrent/ConcurrentHashMap$Node;", "Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$BulkTask, next)},
	{"stack", "Ljava/util/concurrent/ConcurrentHashMap$TableStack;", "Ljava/util/concurrent/ConcurrentHashMap$TableStack<TK;TV;>;", 0, $field(ConcurrentHashMap$BulkTask, stack)},
	{"spare", "Ljava/util/concurrent/ConcurrentHashMap$TableStack;", "Ljava/util/concurrent/ConcurrentHashMap$TableStack<TK;TV;>;", 0, $field(ConcurrentHashMap$BulkTask, spare)},
	{"index", "I", nullptr, 0, $field(ConcurrentHashMap$BulkTask, index)},
	{"baseIndex", "I", nullptr, 0, $field(ConcurrentHashMap$BulkTask, baseIndex)},
	{"baseLimit", "I", nullptr, 0, $field(ConcurrentHashMap$BulkTask, baseLimit)},
	{"baseSize", "I", nullptr, $FINAL, $field(ConcurrentHashMap$BulkTask, baseSize)},
	{"batch", "I", nullptr, 0, $field(ConcurrentHashMap$BulkTask, batch)},
	{}
};

$MethodInfo _ConcurrentHashMap$BulkTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask;III[Ljava/util/concurrent/ConcurrentHashMap$Node;)V", "(Ljava/util/concurrent/ConcurrentHashMap$BulkTask<TK;TV;*>;III[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$BulkTask::*)(ConcurrentHashMap$BulkTask*,int32_t,int32_t,int32_t,$ConcurrentHashMap$NodeArray*)>(&ConcurrentHashMap$BulkTask::init$))},
	{"advance", "()Ljava/util/concurrent/ConcurrentHashMap$Node;", "()Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $FINAL, $method(static_cast<$ConcurrentHashMap$Node*(ConcurrentHashMap$BulkTask::*)()>(&ConcurrentHashMap$BulkTask::advance))},
	{"pushState", "([Ljava/util/concurrent/ConcurrentHashMap$Node;II)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;II)V", $PRIVATE, $method(static_cast<void(ConcurrentHashMap$BulkTask::*)($ConcurrentHashMap$NodeArray*,int32_t,int32_t)>(&ConcurrentHashMap$BulkTask::pushState))},
	{"recoverState", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentHashMap$BulkTask::*)(int32_t)>(&ConcurrentHashMap$BulkTask::recoverState))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$BulkTask_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$BulkTask_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentHashMap$BulkTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ConcurrentHashMap$BulkTask_FieldInfo_,
	_ConcurrentHashMap$BulkTask_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<TR;>;",
	nullptr,
	_ConcurrentHashMap$BulkTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$BulkTask($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$BulkTask));
}

void ConcurrentHashMap$BulkTask::init$(ConcurrentHashMap$BulkTask* par, int32_t b, int32_t i, int32_t f, $ConcurrentHashMap$NodeArray* t) {
	$CountedCompleter::init$(par);
	this->batch = b;
	this->index = (this->baseIndex = i);
	if (($assignField(this, tab, t)) == nullptr) {
		this->baseSize = (this->baseLimit = 0);
	} else if (par == nullptr) {
		this->baseSize = (this->baseLimit = $nc(t)->length);
	} else {
		this->baseLimit = f;
		this->baseSize = $nc(par)->baseSize;
	}
}

$ConcurrentHashMap$Node* ConcurrentHashMap$BulkTask::advance() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, e, nullptr);
	if (($assign(e, this->next)) != nullptr) {
		$assign(e, $nc(e)->next);
	}
	for (;;) {
		$var($ConcurrentHashMap$NodeArray, t, nullptr);
		int32_t i = 0;
		int32_t n = 0;
		if (e != nullptr) {
			return $assignField(this, next, e);
		}
		bool var$1 = this->baseIndex >= this->baseLimit || ($assign(t, this->tab)) == nullptr;
		bool var$0 = var$1 || (n = $nc(t)->length) <= (i = this->index);
		if (var$0 || i < 0) {
			return $assignField(this, next, nullptr);
		}
		if (($assign(e, $ConcurrentHashMap::tabAt(t, i))) != nullptr && $nc(e)->hash < 0) {
			if ($instanceOf($ConcurrentHashMap$ForwardingNode, e)) {
				$set(this, tab, $nc(($cast($ConcurrentHashMap$ForwardingNode, e)))->nextTable);
				$assign(e, nullptr);
				pushState(t, i, n);
				continue;
			} else if ($instanceOf($ConcurrentHashMap$TreeBin, e)) {
				$assign(e, $nc(($cast($ConcurrentHashMap$TreeBin, e)))->first);
			} else {
				$assign(e, nullptr);
			}
		}
		if (this->stack != nullptr) {
			recoverState(n);
		} else if ((this->index = i + this->baseSize) >= n) {
			this->index = ++this->baseIndex;
		}
	}
}

void ConcurrentHashMap$BulkTask::pushState($ConcurrentHashMap$NodeArray* t, int32_t i, int32_t n) {
	$var($ConcurrentHashMap$TableStack, s, this->spare);
	if (s != nullptr) {
		$set(this, spare, s->next);
	} else {
		$assign(s, $new($ConcurrentHashMap$TableStack));
	}
	$set($nc(s), tab, t);
	s->length = n;
	s->index = i;
	$set(s, next, this->stack);
	$set(this, stack, s);
}

void ConcurrentHashMap$BulkTask::recoverState(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$TableStack, s, nullptr);
	int32_t len = 0;
	while (true) {
		bool var$0 = ($assign(s, this->stack)) != nullptr;
		if (!(var$0 && (this->index += (len = $nc(s)->length)) >= n)) {
			break;
		}
		{
			n = len;
			this->index = s->index;
			$set(this, tab, s->tab);
			$set(s, tab, nullptr);
			$var($ConcurrentHashMap$TableStack, next, s->next);
			$set(s, next, this->spare);
			$set(this, stack, next);
			$set(this, spare, s);
		}
	}
	if (s == nullptr && (this->index += this->baseSize) >= n) {
		this->index = ++this->baseIndex;
	}
}

ConcurrentHashMap$BulkTask::ConcurrentHashMap$BulkTask() {
}

$Class* ConcurrentHashMap$BulkTask::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$BulkTask, name, initialize, &_ConcurrentHashMap$BulkTask_ClassInfo_, allocate$ConcurrentHashMap$BulkTask);
	return class$;
}

$Class* ConcurrentHashMap$BulkTask::class$ = nullptr;

		} // concurrent
	} // util
} // java