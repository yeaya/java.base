#include <java/util/LinkedList$DescendingIterator.h>

#include <java/util/LinkedList$ListItr.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $LinkedList$ListItr = ::java::util::LinkedList$ListItr;

namespace java {
	namespace util {

$FieldInfo _LinkedList$DescendingIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedList$DescendingIterator, this$0)},
	{"itr", "Ljava/util/LinkedList$ListItr;", "Ljava/util/LinkedList<TE;>.ListItr;", $PRIVATE | $FINAL, $field(LinkedList$DescendingIterator, itr)},
	{}
};

$MethodInfo _LinkedList$DescendingIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedList;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedList$DescendingIterator::*)($LinkedList*)>(&LinkedList$DescendingIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LinkedList$DescendingIterator_InnerClassesInfo_[] = {
	{"java.util.LinkedList$DescendingIterator", "java.util.LinkedList", "DescendingIterator", $PRIVATE},
	{}
};

$ClassInfo _LinkedList$DescendingIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.LinkedList$DescendingIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_LinkedList$DescendingIterator_FieldInfo_,
	_LinkedList$DescendingIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_LinkedList$DescendingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedList"
};

$Object* allocate$LinkedList$DescendingIterator($Class* clazz) {
	return $of($alloc(LinkedList$DescendingIterator));
}

void LinkedList$DescendingIterator::init$($LinkedList* this$0) {
	$set(this, this$0, this$0);
	$set(this, itr, $new($LinkedList$ListItr, this->this$0, this->this$0->size()));
}

bool LinkedList$DescendingIterator::hasNext() {
	return $nc(this->itr)->hasPrevious();
}

$Object* LinkedList$DescendingIterator::next() {
	return $of($nc(this->itr)->previous());
}

void LinkedList$DescendingIterator::remove() {
	$nc(this->itr)->remove();
}

LinkedList$DescendingIterator::LinkedList$DescendingIterator() {
}

$Class* LinkedList$DescendingIterator::load$($String* name, bool initialize) {
	$loadClass(LinkedList$DescendingIterator, name, initialize, &_LinkedList$DescendingIterator_ClassInfo_, allocate$LinkedList$DescendingIterator);
	return class$;
}

$Class* LinkedList$DescendingIterator::class$ = nullptr;

	} // util
} // java