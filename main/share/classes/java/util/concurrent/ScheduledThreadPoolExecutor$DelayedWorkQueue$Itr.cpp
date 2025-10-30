#include <java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/RunnableScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue.h>
#include <jcpp.h>

using $RunnableScheduledFutureArray = $Array<::java::util::concurrent::RunnableScheduledFuture>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $RunnableScheduledFuture = ::java::util::concurrent::RunnableScheduledFuture;
using $ScheduledThreadPoolExecutor$DelayedWorkQueue = ::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, this$0)},
	{"array", "[Ljava/util/concurrent/RunnableScheduledFuture;", "[Ljava/util/concurrent/RunnableScheduledFuture<*>;", $FINAL, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, array)},
	{"cursor", "I", nullptr, 0, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, cursor)},
	{"lastRet", "I", nullptr, 0, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, lastRet)},
	{}
};

$MethodInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue;[Ljava/util/concurrent/RunnableScheduledFuture;)V", "([Ljava/util/concurrent/RunnableScheduledFuture<*>;)V", 0, $method(static_cast<void(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::*)($ScheduledThreadPoolExecutor$DelayedWorkQueue*,$RunnableScheduledFutureArray*)>(&ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Runnable;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue", "java.util.concurrent.ScheduledThreadPoolExecutor", "DelayedWorkQueue", $STATIC},
	{"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr", "java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_FieldInfo_,
	_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Runnable;>;",
	nullptr,
	_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ScheduledThreadPoolExecutor"
};

$Object* allocate$ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr($Class* clazz) {
	return $of($alloc(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr));
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::init$($ScheduledThreadPoolExecutor$DelayedWorkQueue* this$0, $RunnableScheduledFutureArray* array) {
	$set(this, this$0, this$0);
	this->lastRet = -1;
	$set(this, array, array);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::hasNext() {
	return this->cursor < $nc(this->array)->length;
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::next() {
	if (this->cursor >= $nc(this->array)->length) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc(this->array)->get(this->lastRet = this->cursor++));
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	this->this$0->remove($nc(this->array)->get(this->lastRet));
	this->lastRet = -1;
}

ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr() {
}

$Class* ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, name, initialize, &_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_ClassInfo_, allocate$ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr);
	return class$;
}

$Class* ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java