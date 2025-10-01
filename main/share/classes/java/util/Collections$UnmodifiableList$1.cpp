#include <java/util/Collections$UnmodifiableList$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections$UnmodifiableList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collections$UnmodifiableList = ::java::util::Collections$UnmodifiableList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableList$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$UnmodifiableList;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$UnmodifiableList$1, this$0)},
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(Collections$UnmodifiableList$1, val$index)},
	{"i", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<+TE;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableList$1, i)},
	{}
};

$MethodInfo _Collections$UnmodifiableList$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$UnmodifiableList;I)V", "()V", 0, $method(static_cast<void(Collections$UnmodifiableList$1::*)($Collections$UnmodifiableList*,int32_t)>(&Collections$UnmodifiableList$1::init$))},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$UnmodifiableList$1_EnclosingMethodInfo_ = {
	"java.util.Collections$UnmodifiableList",
	"listIterator",
	"(I)Ljava/util/ListIterator;"
};

$InnerClassInfo _Collections$UnmodifiableList$1_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableList", "java.util.Collections", "UnmodifiableList", $STATIC},
	{"java.util.Collections$UnmodifiableList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$UnmodifiableList$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableList$1",
	"java.lang.Object",
	"java.util.ListIterator",
	_Collections$UnmodifiableList$1_FieldInfo_,
	_Collections$UnmodifiableList$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	&_Collections$UnmodifiableList$1_EnclosingMethodInfo_,
	_Collections$UnmodifiableList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableList$1($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableList$1));
}

void Collections$UnmodifiableList$1::init$($Collections$UnmodifiableList* this$0, int32_t val$index) {
	$set(this, this$0, this$0);
	this->val$index = val$index;
	$set(this, i, $nc(this->this$0->list)->listIterator(this->val$index));
}

bool Collections$UnmodifiableList$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* Collections$UnmodifiableList$1::next() {
	return $of($nc(this->i)->next());
}

bool Collections$UnmodifiableList$1::hasPrevious() {
	return $nc(this->i)->hasPrevious();
}

$Object* Collections$UnmodifiableList$1::previous() {
	return $of($nc(this->i)->previous());
}

int32_t Collections$UnmodifiableList$1::nextIndex() {
	return $nc(this->i)->nextIndex();
}

int32_t Collections$UnmodifiableList$1::previousIndex() {
	return $nc(this->i)->previousIndex();
}

void Collections$UnmodifiableList$1::remove() {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableList$1::set(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableList$1::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableList$1::forEachRemaining($Consumer* action) {
	$nc(this->i)->forEachRemaining(action);
}

Collections$UnmodifiableList$1::Collections$UnmodifiableList$1() {
}

$Class* Collections$UnmodifiableList$1::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableList$1, name, initialize, &_Collections$UnmodifiableList$1_ClassInfo_, allocate$Collections$UnmodifiableList$1);
	return class$;
}

$Class* Collections$UnmodifiableList$1::class$ = nullptr;

	} // util
} // java