#include <InitialValue.h>

#include <InitialValue$MyLocal.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InitialValue$MyLocal = ::InitialValue$MyLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _InitialValue_FieldInfo_[] = {
	{"other", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/String;>;", $STATIC, $staticField(InitialValue, other)},
	{"passed", "Z", nullptr, $STATIC, $staticField(InitialValue, passed)},
	{}
};

$MethodInfo _InitialValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InitialValue::*)()>(&InitialValue::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InitialValue::main))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InitialValue_InnerClassesInfo_[] = {
	{"InitialValue$MyLocal", "InitialValue", "MyLocal", $PUBLIC},
	{}
};

$ClassInfo _InitialValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InitialValue",
	"java.lang.Object",
	"java.lang.Runnable",
	_InitialValue_FieldInfo_,
	_InitialValue_MethodInfo_,
	nullptr,
	nullptr,
	_InitialValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InitialValue$MyLocal"
};

$Object* allocate$InitialValue($Class* clazz) {
	return $of($alloc(InitialValue));
}

$ThreadLocal* InitialValue::other = nullptr;
bool InitialValue::passed = false;

void InitialValue::init$() {
}

void InitialValue::run() {
	$var($InitialValue$MyLocal, l, $new($InitialValue$MyLocal, this));
	$var($String, s1, $cast($String, l->get()));
	$var($String, s2, $cast($String, $nc(InitialValue::other)->get()));
	if ((s2 != nullptr) && s2->equals("Other"_s)) {
		InitialValue::passed = true;
	}
}

void InitialValue::main($StringArray* args) {
	$init(InitialValue);
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(InitialValue))));
	t->start();
	try {
		t->join();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($RuntimeException, "Test Interrupted: failed"_s);
	}
	if (!InitialValue::passed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

InitialValue::InitialValue() {
}

$Class* InitialValue::load$($String* name, bool initialize) {
	$loadClass(InitialValue, name, initialize, &_InitialValue_ClassInfo_, allocate$InitialValue);
	return class$;
}

$Class* InitialValue::class$ = nullptr;