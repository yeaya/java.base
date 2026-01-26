#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>

#include <java/util/concurrent/ConcurrentHashMap$ForwardingNode.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$TableStack.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeBin.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeNode.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
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

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$Traverser_FieldInfo_[] = {
	{"tab", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$Traverser, tab)},
	{"next", "Ljava/util/concurrent/ConcurrentHashMap$Node;", "Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$Traverser, next)},
	{"stack", "Ljava/util/concurrent/ConcurrentHashMap$TableStack;", "Ljava/util/concurrent/ConcurrentHashMap$TableStack<TK;TV;>;", 0, $field(ConcurrentHashMap$Traverser, stack)},
	{"spare", "Ljava/util/concurrent/ConcurrentHashMap$TableStack;", "Ljava/util/concurrent/ConcurrentHashMap$TableStack<TK;TV;>;", 0, $field(ConcurrentHashMap$Traverser, spare)},
	{"index", "I", nullptr, 0, $field(ConcurrentHashMap$Traverser, index)},
	{"baseIndex", "I", nullptr, 0, $field(ConcurrentHashMap$Traverser, baseIndex)},
	{"baseLimit", "I", nullptr, 0, $field(ConcurrentHashMap$Traverser, baseLimit)},
	{"baseSize", "I", nullptr, $FINAL, $field(ConcurrentHashMap$Traverser, baseSize)},
	{}
};

$MethodInfo _ConcurrentHashMap$Traverser_MethodInfo_[] = {
	{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;III)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;III)V", 0, $method(ConcurrentHashMap$Traverser, init$, void, $ConcurrentHashMap$NodeArray*, int32_t, int32_t, int32_t)},
	{"advance", "()Ljava/util/concurrent/ConcurrentHashMap$Node;", "()Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $FINAL, $method(ConcurrentHashMap$Traverser, advance, $ConcurrentHashMap$Node*)},
	{"pushState", "([Ljava/util/concurrent/ConcurrentHashMap$Node;II)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;II)V", $PRIVATE, $method(ConcurrentHashMap$Traverser, pushState, void, $ConcurrentHashMap$NodeArray*, int32_t, int32_t)},
	{"recoverState", "(I)V", nullptr, $PRIVATE, $method(ConcurrentHashMap$Traverser, recoverState, void, int32_t)},
	{}
};

$InnerClassInfo _ConcurrentHashMap$Traverser_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$Traverser_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$Traverser",
	"java.lang.Object",
	nullptr,
	_ConcurrentHashMap$Traverser_FieldInfo_,
	_ConcurrentHashMap$Traverser_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentHashMap$Traverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$Traverser($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$Traverser));
}

void ConcurrentHashMap$Traverser::init$($ConcurrentHashMap$NodeArray* tab, int32_t size, int32_t index, int32_t limit) {
	$set(this, tab, tab);
	this->baseSize = size;
	this->baseIndex = (this->index = index);
	this->baseLimit = limit;
	$set(this, next, nullptr);
}

$ConcurrentHashMap$Node* ConcurrentHashMap$Traverser::advance() {
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
			return $set(this, next, e);
		}
		bool var$1 = this->baseIndex >= this->baseLimit || ($assign(t, this->tab)) == nullptr;
		bool var$0 = var$1 || (n = $nc(t)->length) <= (i = this->index);
		if (var$0 || i < 0) {
			return $set(this, next, nullptr);
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

void ConcurrentHashMap$Traverser::pushState($ConcurrentHashMap$NodeArray* t, int32_t i, int32_t n) {
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

void ConcurrentHashMap$Traverser::recoverState(int32_t n) {
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

ConcurrentHashMap$Traverser::ConcurrentHashMap$Traverser() {
}

$Class* ConcurrentHashMap$Traverser::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$Traverser, name, initialize, &_ConcurrentHashMap$Traverser_ClassInfo_, allocate$ConcurrentHashMap$Traverser);
	return class$;
}

$Class* ConcurrentHashMap$Traverser::class$ = nullptr;

		} // concurrent
	} // util
} // java