#include <java/util/concurrent/ConcurrentLinkedDeque$DescendingItr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $ConcurrentLinkedDeque$AbstractItr = ::java::util::concurrent::ConcurrentLinkedDeque$AbstractItr;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedDeque$DescendingItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$DescendingItr, this$0)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque$DescendingItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedDeque$DescendingItr::*)($ConcurrentLinkedDeque*)>(&ConcurrentLinkedDeque$DescendingItr::init$))},
	{"nextNode", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{"startNode", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque$DescendingItr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$DescendingItr", "java.util.concurrent.ConcurrentLinkedDeque", "DescendingItr", $PRIVATE},
	{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentLinkedDeque$DescendingItr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedDeque$DescendingItr",
	"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr",
	nullptr,
	_ConcurrentLinkedDeque$DescendingItr_FieldInfo_,
	_ConcurrentLinkedDeque$DescendingItr_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentLinkedDeque<TE;>.AbstractItr;",
	nullptr,
	_ConcurrentLinkedDeque$DescendingItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque"
};

$Object* allocate$ConcurrentLinkedDeque$DescendingItr($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque$DescendingItr));
}

void ConcurrentLinkedDeque$DescendingItr::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentLinkedDeque$AbstractItr::init$(this$0);
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$DescendingItr::startNode() {
	return this->this$0->last();
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$DescendingItr::nextNode($ConcurrentLinkedDeque$Node* p) {
	return this->this$0->pred(p);
}

ConcurrentLinkedDeque$DescendingItr::ConcurrentLinkedDeque$DescendingItr() {
}

$Class* ConcurrentLinkedDeque$DescendingItr::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$DescendingItr, name, initialize, &_ConcurrentLinkedDeque$DescendingItr_ClassInfo_, allocate$ConcurrentLinkedDeque$DescendingItr);
	return class$;
}

$Class* ConcurrentLinkedDeque$DescendingItr::class$ = nullptr;

		} // concurrent
	} // util
} // java