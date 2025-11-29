#include <VerifyStackTrace$Recorder.h>

#include <VerifyStackTrace.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <jcpp.h>

using $VerifyStackTrace = ::VerifyStackTrace;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;

$FieldInfo _VerifyStackTrace$Recorder_FieldInfo_[] = {
	{"found", "Z", nullptr, 0, $field(VerifyStackTrace$Recorder, found)},
	{}
};

$MethodInfo _VerifyStackTrace$Recorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VerifyStackTrace$Recorder::*)()>(&VerifyStackTrace$Recorder::init$))},
	{"recordSTE", "(JLjava/lang/StringBuilder;Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(VerifyStackTrace$Recorder::*)(int64_t,$StringBuilder*,$StackWalker$StackFrame*)>(&VerifyStackTrace$Recorder::recordSTE))},
	{}
};

$InnerClassInfo _VerifyStackTrace$Recorder_InnerClassesInfo_[] = {
	{"VerifyStackTrace$Recorder", "VerifyStackTrace", "Recorder", $STATIC | $FINAL},
	{}
};

$ClassInfo _VerifyStackTrace$Recorder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"VerifyStackTrace$Recorder",
	"java.lang.Object",
	nullptr,
	_VerifyStackTrace$Recorder_FieldInfo_,
	_VerifyStackTrace$Recorder_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyStackTrace$Recorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"VerifyStackTrace"
};

$Object* allocate$VerifyStackTrace$Recorder($Class* clazz) {
	return $of($alloc(VerifyStackTrace$Recorder));
}

void VerifyStackTrace$Recorder::init$() {
}

void VerifyStackTrace$Recorder::recordSTE(int64_t counter, $StringBuilder* s, $StackWalker$StackFrame* f) {
	$useLocalCurrentObjectStackCache();
	if (this->found) {
		return;
	}
	$load($VerifyStackTrace);
	bool var$0 = $of($VerifyStackTrace::class$)->equals($nc(f)->getDeclaringClass());
	this->found = var$0 && "main"_s->equals($($nc(f)->getMethodName()));
	$var($String, line, $String::format("%d: %s"_s, $$new($ObjectArray, {
		$($of($Long::valueOf(counter))),
		$($of($nc(f)->toStackTraceElement()))
	})));
	$nc(s)->append(line)->append(u'\n');
	$nc($System::out)->println(line);
}

VerifyStackTrace$Recorder::VerifyStackTrace$Recorder() {
}

$Class* VerifyStackTrace$Recorder::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$Recorder, name, initialize, &_VerifyStackTrace$Recorder_ClassInfo_, allocate$VerifyStackTrace$Recorder);
	return class$;
}

$Class* VerifyStackTrace$Recorder::class$ = nullptr;