#include <StackStreamTest$K$Caller.h>

#include <StackStreamTest$K.h>
#include <StackStreamTest.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $StackStreamTest$K = ::StackStreamTest$K;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

$FieldInfo _StackStreamTest$K$Caller_FieldInfo_[] = {
	{"this$0", "LStackStreamTest$K;", nullptr, $FINAL | $SYNTHETIC, $field(StackStreamTest$K$Caller, this$0)},
	{}
};

$MethodInfo _StackStreamTest$K$Caller_MethodInfo_[] = {
	{"<init>", "(LStackStreamTest$K;)V", nullptr, 0, $method(StackStreamTest$K$Caller, init$, void, $StackStreamTest$K*)},
	{"test", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K$Caller, test, void)},
	{}
};

$InnerClassInfo _StackStreamTest$K$Caller_InnerClassesInfo_[] = {
	{"StackStreamTest$K", "StackStreamTest", "K", $STATIC},
	{"StackStreamTest$K$Caller", "StackStreamTest$K", "Caller", 0},
	{}
};

$ClassInfo _StackStreamTest$K$Caller_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$K$Caller",
	"java.lang.Object",
	nullptr,
	_StackStreamTest$K$Caller_FieldInfo_,
	_StackStreamTest$K$Caller_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$K$Caller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$K$Caller($Class* clazz) {
	return $of($alloc(StackStreamTest$K$Caller));
}

void StackStreamTest$K$Caller::init$($StackStreamTest$K* this$0) {
	$set(this, this$0, this$0);
}

void StackStreamTest$K$Caller::test() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($StackWalker$Option);
	$Class* c = $nc($($StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE)))->getCallerClass();
	$nc($System::out)->println($$str({"\nTesting K class : "_s, c}));
	$Thread::dumpStack();
	$load($StackStreamTest$K);
	if (c != $StackStreamTest$K::class$) {
		$throwNew($RuntimeException, $$str({"Unexpected caller class "_s, c}));
	}
}

StackStreamTest$K$Caller::StackStreamTest$K$Caller() {
}

$Class* StackStreamTest$K$Caller::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$K$Caller, name, initialize, &_StackStreamTest$K$Caller_ClassInfo_, allocate$StackStreamTest$K$Caller);
	return class$;
}

$Class* StackStreamTest$K$Caller::class$ = nullptr;