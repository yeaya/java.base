#include <java/util/concurrent/ConcurrentLinkedDeque$Itr.h>

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

$FieldInfo _ConcurrentLinkedDeque$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$Itr, this$0)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedDeque$Itr::*)($ConcurrentLinkedDeque*)>(&ConcurrentLinkedDeque$Itr::init$))},
	{"nextNode", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{"startNode", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$Itr", "java.util.concurrent.ConcurrentLinkedDeque", "Itr", $PRIVATE},
	{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentLinkedDeque$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedDeque$Itr",
	"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr",
	nullptr,
	_ConcurrentLinkedDeque$Itr_FieldInfo_,
	_ConcurrentLinkedDeque$Itr_MethodInfo_,
	"Ljava/util/concurrent/ConcurrentLinkedDeque<TE;>.AbstractItr;",
	nullptr,
	_ConcurrentLinkedDeque$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque"
};

$Object* allocate$ConcurrentLinkedDeque$Itr($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque$Itr));
}

void ConcurrentLinkedDeque$Itr::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentLinkedDeque$AbstractItr::init$(this$0);
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$Itr::startNode() {
	return this->this$0->first();
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$Itr::nextNode($ConcurrentLinkedDeque$Node* p) {
	return this->this$0->succ(p);
}

ConcurrentLinkedDeque$Itr::ConcurrentLinkedDeque$Itr() {
}

$Class* ConcurrentLinkedDeque$Itr::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$Itr, name, initialize, &_ConcurrentLinkedDeque$Itr_ClassInfo_, allocate$ConcurrentLinkedDeque$Itr);
	return class$;
}

$Class* ConcurrentLinkedDeque$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java