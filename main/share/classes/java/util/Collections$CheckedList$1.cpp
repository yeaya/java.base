#include <java/util/Collections$CheckedList$1.h>

#include <java/util/Collections$CheckedList.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$CheckedList = ::java::util::Collections$CheckedList;
using $ListIterator = ::java::util::ListIterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedList$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$CheckedList;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedList$1, this$0)},
	{"val$i", "Ljava/util/ListIterator;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedList$1, val$i)},
	{}
};

$MethodInfo _Collections$CheckedList$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$CheckedList;Ljava/util/ListIterator;)V", "()V", 0, $method(Collections$CheckedList$1, init$, void, $Collections$CheckedList*, $ListIterator*)},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(Collections$CheckedList$1, add, void, Object$*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$CheckedList$1, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$1, hasNext, bool)},
	{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$1, hasPrevious, bool)},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedList$1, next, $Object*)},
	{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$1, nextIndex, int32_t)},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedList$1, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$1, previousIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedList$1, remove, void)},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(Collections$CheckedList$1, set, void, Object$*)},
	{}
};

$EnclosingMethodInfo _Collections$CheckedList$1_EnclosingMethodInfo_ = {
	"java.util.Collections$CheckedList",
	"listIterator",
	"(I)Ljava/util/ListIterator;"
};

$InnerClassInfo _Collections$CheckedList$1_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedList", "java.util.Collections", "CheckedList", $STATIC},
	{"java.util.Collections$CheckedList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$CheckedList$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedList$1",
	"java.lang.Object",
	"java.util.ListIterator",
	_Collections$CheckedList$1_FieldInfo_,
	_Collections$CheckedList$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	&_Collections$CheckedList$1_EnclosingMethodInfo_,
	_Collections$CheckedList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedList$1($Class* clazz) {
	return $of($alloc(Collections$CheckedList$1));
}

void Collections$CheckedList$1::init$($Collections$CheckedList* this$0, $ListIterator* val$i) {
	$set(this, this$0, this$0);
	$set(this, val$i, val$i);
}

bool Collections$CheckedList$1::hasNext() {
	return $nc(this->val$i)->hasNext();
}

$Object* Collections$CheckedList$1::next() {
	return $of($nc(this->val$i)->next());
}

bool Collections$CheckedList$1::hasPrevious() {
	return $nc(this->val$i)->hasPrevious();
}

$Object* Collections$CheckedList$1::previous() {
	return $of($nc(this->val$i)->previous());
}

int32_t Collections$CheckedList$1::nextIndex() {
	return $nc(this->val$i)->nextIndex();
}

int32_t Collections$CheckedList$1::previousIndex() {
	return $nc(this->val$i)->previousIndex();
}

void Collections$CheckedList$1::remove() {
	$nc(this->val$i)->remove();
}

void Collections$CheckedList$1::set(Object$* e) {
	$nc(this->val$i)->set($(this->this$0->typeCheck(e)));
}

void Collections$CheckedList$1::add(Object$* e) {
	$nc(this->val$i)->add($(this->this$0->typeCheck(e)));
}

void Collections$CheckedList$1::forEachRemaining($Consumer* action) {
	$nc(this->val$i)->forEachRemaining(action);
}

Collections$CheckedList$1::Collections$CheckedList$1() {
}

$Class* Collections$CheckedList$1::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedList$1, name, initialize, &_Collections$CheckedList$1_ClassInfo_, allocate$Collections$CheckedList$1);
	return class$;
}

$Class* Collections$CheckedList$1::class$ = nullptr;

	} // util
} // java