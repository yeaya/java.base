#include <java/util/concurrent/LinkedBlockingDeque$DescendingItr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/LinkedBlockingDeque$AbstractItr.h>
#include <java/util/concurrent/LinkedBlockingDeque$Node.h>
#include <java/util/concurrent/LinkedBlockingDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedBlockingDeque = ::java::util::concurrent::LinkedBlockingDeque;
using $LinkedBlockingDeque$AbstractItr = ::java::util::concurrent::LinkedBlockingDeque$AbstractItr;
using $LinkedBlockingDeque$Node = ::java::util::concurrent::LinkedBlockingDeque$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingDeque$DescendingItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedBlockingDeque;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingDeque$DescendingItr, this$0)},
	{}
};

$MethodInfo _LinkedBlockingDeque$DescendingItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingDeque;)V", nullptr, 0, $method(static_cast<void(LinkedBlockingDeque$DescendingItr::*)($LinkedBlockingDeque*)>(&LinkedBlockingDeque$DescendingItr::init$))},
	{"firstNode", "()Ljava/util/concurrent/LinkedBlockingDeque$Node;", "()Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0},
	{"nextNode", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Ljava/util/concurrent/LinkedBlockingDeque$Node;", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0},
	{}
};

$InnerClassInfo _LinkedBlockingDeque$DescendingItr_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingDeque$DescendingItr", "java.util.concurrent.LinkedBlockingDeque", "DescendingItr", $PRIVATE},
	{"java.util.concurrent.LinkedBlockingDeque$AbstractItr", "java.util.concurrent.LinkedBlockingDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _LinkedBlockingDeque$DescendingItr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.LinkedBlockingDeque$DescendingItr",
	"java.util.concurrent.LinkedBlockingDeque$AbstractItr",
	nullptr,
	_LinkedBlockingDeque$DescendingItr_FieldInfo_,
	_LinkedBlockingDeque$DescendingItr_MethodInfo_,
	"Ljava/util/concurrent/LinkedBlockingDeque<TE;>.AbstractItr;",
	nullptr,
	_LinkedBlockingDeque$DescendingItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingDeque"
};

$Object* allocate$LinkedBlockingDeque$DescendingItr($Class* clazz) {
	return $of($alloc(LinkedBlockingDeque$DescendingItr));
}

void LinkedBlockingDeque$DescendingItr::init$($LinkedBlockingDeque* this$0) {
	$set(this, this$0, this$0);
	$LinkedBlockingDeque$AbstractItr::init$(this$0);
}

$LinkedBlockingDeque$Node* LinkedBlockingDeque$DescendingItr::firstNode() {
	return this->this$0->last;
}

$LinkedBlockingDeque$Node* LinkedBlockingDeque$DescendingItr::nextNode($LinkedBlockingDeque$Node* n) {
	return $nc(n)->prev;
}

LinkedBlockingDeque$DescendingItr::LinkedBlockingDeque$DescendingItr() {
}

$Class* LinkedBlockingDeque$DescendingItr::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$DescendingItr, name, initialize, &_LinkedBlockingDeque$DescendingItr_ClassInfo_, allocate$LinkedBlockingDeque$DescendingItr);
	return class$;
}

$Class* LinkedBlockingDeque$DescendingItr::class$ = nullptr;

		} // concurrent
	} // util
} // java