#include <TypeCheckMicroBenchmark$Job.h>

#include <TypeCheckMicroBenchmark.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark = ::TypeCheckMicroBenchmark;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TypeCheckMicroBenchmark$Job_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TypeCheckMicroBenchmark$Job, name$)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$Job_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$Job::*)($String*)>(&TypeCheckMicroBenchmark$Job::init$))},
	{"name", "()Ljava/lang/String;", nullptr, 0},
	{"work", "()V", nullptr, $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TypeCheckMicroBenchmark$Job_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$Job_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TypeCheckMicroBenchmark$Job",
	"java.lang.Object",
	nullptr,
	_TypeCheckMicroBenchmark$Job_FieldInfo_,
	_TypeCheckMicroBenchmark$Job_MethodInfo_,
	nullptr,
	nullptr,
	_TypeCheckMicroBenchmark$Job_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$Job($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$Job));
}

void TypeCheckMicroBenchmark$Job::init$($String* name) {
	$set(this, name$, name);
}

$String* TypeCheckMicroBenchmark$Job::name() {
	return this->name$;
}

TypeCheckMicroBenchmark$Job::TypeCheckMicroBenchmark$Job() {
}

$Class* TypeCheckMicroBenchmark$Job::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$Job, name, initialize, &_TypeCheckMicroBenchmark$Job_ClassInfo_, allocate$TypeCheckMicroBenchmark$Job);
	return class$;
}

$Class* TypeCheckMicroBenchmark$Job::class$ = nullptr;