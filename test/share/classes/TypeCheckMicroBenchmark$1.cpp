#include <TypeCheckMicroBenchmark$1.h>

#include <TypeCheckMicroBenchmark.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _TypeCheckMicroBenchmark$1_FieldInfo_[] = {
	{"val$drained", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$1, val$drained)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$1::*)($CountDownLatch*)>(&TypeCheckMicroBenchmark$1::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$1_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"collectAllGarbage",
	"()V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$1_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$1_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$1",
	"java.lang.Object",
	nullptr,
	_TypeCheckMicroBenchmark$1_FieldInfo_,
	_TypeCheckMicroBenchmark$1_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$1_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$1($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$1));
}

void TypeCheckMicroBenchmark$1::init$($CountDownLatch* val$drained) {
	$set(this, val$drained, val$drained);
}

void TypeCheckMicroBenchmark$1::finalize() {
	$nc(this->val$drained)->countDown();
}

TypeCheckMicroBenchmark$1::TypeCheckMicroBenchmark$1() {
}

$Class* TypeCheckMicroBenchmark$1::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$1, name, initialize, &_TypeCheckMicroBenchmark$1_ClassInfo_, allocate$TypeCheckMicroBenchmark$1);
	return class$;
}

$Class* TypeCheckMicroBenchmark$1::class$ = nullptr;