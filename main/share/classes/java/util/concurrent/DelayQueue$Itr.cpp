#include <java/util/concurrent/DelayQueue$Itr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/DelayQueue.h>
#include <java/util/concurrent/Delayed.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DelayQueue = ::java::util::concurrent::DelayQueue;
using $Delayed = ::java::util::concurrent::Delayed;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _DelayQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/DelayQueue;", nullptr, $FINAL | $SYNTHETIC, $field(DelayQueue$Itr, this$0)},
	{"array", "[Ljava/lang/Object;", nullptr, $FINAL, $field(DelayQueue$Itr, array)},
	{"cursor", "I", nullptr, 0, $field(DelayQueue$Itr, cursor)},
	{"lastRet", "I", nullptr, 0, $field(DelayQueue$Itr, lastRet)},
	{}
};

$MethodInfo _DelayQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/DelayQueue;[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(DelayQueue$Itr::*)($DelayQueue*,$ObjectArray*)>(&DelayQueue$Itr::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/concurrent/Delayed;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DelayQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.DelayQueue$Itr", "java.util.concurrent.DelayQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _DelayQueue$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.DelayQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_DelayQueue$Itr_FieldInfo_,
	_DelayQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_DelayQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.DelayQueue"
};

$Object* allocate$DelayQueue$Itr($Class* clazz) {
	return $of($alloc(DelayQueue$Itr));
}

void DelayQueue$Itr::init$($DelayQueue* this$0, $ObjectArray* array) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	$set(this, array, array);
}

bool DelayQueue$Itr::hasNext() {
	return this->cursor < $nc(this->array)->length;
}

$Object* DelayQueue$Itr::next() {
	if (this->cursor >= $nc(this->array)->length) {
		$throwNew($NoSuchElementException);
	}
	return $of($cast($Delayed, $nc(this->array)->get(this->lastRet = this->cursor++)));
}

void DelayQueue$Itr::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	this->this$0->removeEQ($nc(this->array)->get(this->lastRet));
	this->lastRet = -1;
}

DelayQueue$Itr::DelayQueue$Itr() {
}

$Class* DelayQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(DelayQueue$Itr, name, initialize, &_DelayQueue$Itr_ClassInfo_, allocate$DelayQueue$Itr);
	return class$;
}

$Class* DelayQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java