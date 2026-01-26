#include <java/util/concurrent/ConcurrentHashMap$TableStack.h>

#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$TableStack_FieldInfo_[] = {
	{"length", "I", nullptr, 0, $field(ConcurrentHashMap$TableStack, length)},
	{"index", "I", nullptr, 0, $field(ConcurrentHashMap$TableStack, index)},
	{"tab", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $field(ConcurrentHashMap$TableStack, tab)},
	{"next", "Ljava/util/concurrent/ConcurrentHashMap$TableStack;", "Ljava/util/concurrent/ConcurrentHashMap$TableStack<TK;TV;>;", 0, $field(ConcurrentHashMap$TableStack, next)},
	{}
};

$MethodInfo _ConcurrentHashMap$TableStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ConcurrentHashMap$TableStack, init$, void)},
	{}
};

$InnerClassInfo _ConcurrentHashMap$TableStack_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$TableStack", "java.util.concurrent.ConcurrentHashMap", "TableStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentHashMap$TableStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$TableStack",
	"java.lang.Object",
	nullptr,
	_ConcurrentHashMap$TableStack_FieldInfo_,
	_ConcurrentHashMap$TableStack_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentHashMap$TableStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$TableStack($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$TableStack));
}

void ConcurrentHashMap$TableStack::init$() {
}

ConcurrentHashMap$TableStack::ConcurrentHashMap$TableStack() {
}

$Class* ConcurrentHashMap$TableStack::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$TableStack, name, initialize, &_ConcurrentHashMap$TableStack_ClassInfo_, allocate$ConcurrentHashMap$TableStack);
	return class$;
}

$Class* ConcurrentHashMap$TableStack::class$ = nullptr;

		} // concurrent
	} // util
} // java