#include <java/util/concurrent/ConcurrentSkipListMap$Index.h>

#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentSkipListMap$Index_FieldInfo_[] = {
	{"node", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", $FINAL, $field(ConcurrentSkipListMap$Index, node)},
	{"down", "Ljava/util/concurrent/ConcurrentSkipListMap$Index;", "Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;", $FINAL, $field(ConcurrentSkipListMap$Index, down)},
	{"right", "Ljava/util/concurrent/ConcurrentSkipListMap$Index;", "Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;", 0, $field(ConcurrentSkipListMap$Index, right)},
	{}
};

$MethodInfo _ConcurrentSkipListMap$Index_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentSkipListMap$Node;Ljava/util/concurrent/ConcurrentSkipListMap$Index;Ljava/util/concurrent/ConcurrentSkipListMap$Index;)V", "(Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentSkipListMap$Index::*)($ConcurrentSkipListMap$Node*,ConcurrentSkipListMap$Index*,ConcurrentSkipListMap$Index*)>(&ConcurrentSkipListMap$Index::init$))},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$Index_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$Index", "java.util.concurrent.ConcurrentSkipListMap", "Index", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentSkipListMap$Index_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$Index",
	"java.lang.Object",
	nullptr,
	_ConcurrentSkipListMap$Index_FieldInfo_,
	_ConcurrentSkipListMap$Index_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ConcurrentSkipListMap$Index_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$Index($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$Index));
}

void ConcurrentSkipListMap$Index::init$($ConcurrentSkipListMap$Node* node, ConcurrentSkipListMap$Index* down, ConcurrentSkipListMap$Index* right) {
	$set(this, node, node);
	$set(this, down, down);
	$set(this, right, right);
}

ConcurrentSkipListMap$Index::ConcurrentSkipListMap$Index() {
}

$Class* ConcurrentSkipListMap$Index::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$Index, name, initialize, &_ConcurrentSkipListMap$Index_ClassInfo_, allocate$ConcurrentSkipListMap$Index);
	return class$;
}

$Class* ConcurrentSkipListMap$Index::class$ = nullptr;

		} // concurrent
	} // util
} // java