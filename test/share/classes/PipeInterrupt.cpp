#include <PipeInterrupt.h>

#include <PipeInterrupt$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PipeInterrupt$1 = ::PipeInterrupt$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _PipeInterrupt_FieldInfo_[] = {
	{"exc", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(PipeInterrupt, exc)},
	{}
};

$MethodInfo _PipeInterrupt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PipeInterrupt::*)()>(&PipeInterrupt::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PipeInterrupt::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
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