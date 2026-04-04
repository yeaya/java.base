#include <java/util/concurrent/LinkedBlockingDeque$DescendingItr.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/LinkedBlockingDeque;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingDeque$DescendingItr, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/LinkedBlockingDeque;)V", nullptr, 0, $method(LinkedBlockingDeque$DescendingItr, init$, void, $LinkedBlockingDeque*)},
		{"firstNode", "()Ljava/util/concurrent/LinkedBlockingDeque$Node;", "()Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $virtualMethod(LinkedBlockingDeque$DescendingItr, firstNode, $LinkedBlockingDeque$Node*)},
		{"nextNode", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Ljava/util/concurrent/LinkedBlockingDeque$Node;", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $virtualMethod(LinkedBlockingDeque$DescendingItr, nextNode, $LinkedBlockingDeque$Node*, $LinkedBlockingDeque$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.LinkedBlockingDeque$DescendingItr", "java.util.concurrent.LinkedBlockingDeque", "DescendingItr", $PRIVATE},
		{"java.util.concurrent.LinkedBlockingDeque$AbstractItr", "java.util.concurrent.LinkedBlockingDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.LinkedBlockingDeque$DescendingItr",
		"java.util.concurrent.LinkedBlockingDeque$AbstractItr",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/LinkedBlockingDeque<TE;>.AbstractItr;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.LinkedBlockingDeque"
	};
	$loadClass(LinkedBlockingDeque$DescendingItr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedBlockingDeque$DescendingItr);
	});
	return class$;
}

$Class* LinkedBlockingDeque$DescendingItr::class$ = nullptr;

		} // concurrent
	} // util
} // java