#include <PipeInterrupt.h>

#include <PipeInterrupt$1.h>
#include <jcpp.h>

using $PipeInterrupt$1 = ::PipeInterrupt$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _PipeInterrupt_FieldInfo_[] = {
	{"exc", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(PipeInterrupt, exc)},
	{}
};

$MethodInfo _PipeInterrupt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PipeInterrupt, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PipeInterrupt, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC, $virtualMethod(PipeInterrupt, test, void), "java.lang.Exception"},
	{}
};

$InnerClassInfo _PipeInterrupt_InnerClassesInfo_[] = {
	{"PipeInterrupt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PipeInterrupt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PipeInterrupt",
	"java.lang.Object",
	nullptr,
	_PipeInterrupt_FieldInfo_,
	_PipeInterrupt_MethodInfo_,
	nullptr,
	nullptr,
	_PipeInterrupt_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PipeInterrupt$1"
};

$Object* allocate$PipeInterrupt($Class* clazz) {
	return $of($alloc(PipeInterrupt));
}

void PipeInterrupt::init$() {
	$set(this, exc, nullptr);
}

void PipeInterrupt::main($StringArray* args) {
	$var(PipeInterrupt, instance, $new(PipeInterrupt));
	instance->test();
}

void PipeInterrupt::test() {
	$var($Thread, tester, $new($PipeInterrupt$1, this, "PipeTester"_s));
	tester->start();
	$Thread::sleep(200);
	tester->interrupt();
	tester->join();
	if (this->exc != nullptr) {
		$throw(this->exc);
	}
}

PipeInterrupt::PipeInterrupt() {
}

$Class* PipeInterrupt::load$($String* name, bool initialize) {
	$loadClass(PipeInterrupt, name, initialize, &_PipeInterrupt_ClassInfo_, allocate$PipeInterrupt);
	return class$;
}

$Class* PipeInterrupt::class$ = nullptr;