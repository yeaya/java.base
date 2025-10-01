#include <SwapMicroBenchmark$Job.h>

#include <SwapMicroBenchmark.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SwapMicroBenchmark = ::SwapMicroBenchmark;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SwapMicroBenchmark$Job_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SwapMicroBenchmark$Job, name$)},
	{}
};

$MethodInfo _SwapMicroBenchmark$Job_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SwapMicroBenchmark$Job::*)($String*)>(&SwapMicroBenchmark$Job::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"work", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _SwapMicroBenchmark$Job_InnerClassesInfo_[] = {
	{"SwapMicroBenchmark$Job", "SwapMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SwapMicroBenchmark$Job_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"SwapMicroBenchmark$Job",
	"java.lang.Object",
	nullptr,
	_SwapMicroBenchmark$Job_FieldInfo_,
	_SwapMicroBenchmark$Job_MethodInfo_,
	nullptr,
	nullptr,
	_SwapMicroBenchmark$Job_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwapMicroBenchmark"
};

$Object* allocate$SwapMicroBenchmark$Job($Class* clazz) {
	return $of($alloc(SwapMicroBenchmark$Job));
}

void SwapMicroBenchmark$Job::init$($String* name) {
	$set(this, name$, name);
}

$String* SwapMicroBenchmark$Job::name() {
	return this->name$;
}

SwapMicroBenchmark$Job::SwapMicroBenchmark$Job() {
}

$Class* SwapMicroBenchmark$Job::load$($String* name, bool initialize) {
	$loadClass(SwapMicroBenchmark$Job, name, initialize, &_SwapMicroBenchmark$Job_ClassInfo_, allocate$SwapMicroBenchmark$Job);
	return class$;
}

$Class* SwapMicroBenchmark$Job::class$ = nullptr;