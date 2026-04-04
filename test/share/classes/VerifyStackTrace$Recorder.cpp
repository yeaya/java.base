#include <VerifyStackTrace$Recorder.h>
#include <VerifyStackTrace.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <jcpp.h>

using $VerifyStackTrace = ::VerifyStackTrace;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;

void VerifyStackTrace$Recorder::init$() {
}

void VerifyStackTrace$Recorder::recordSTE(int64_t counter, $StringBuilder* s, $StackWalker$StackFrame* f) {
	$useLocalObjectStack();
	if (this->found) {
		return;
	}
	$load($VerifyStackTrace);
	bool var$0 = $VerifyStackTrace::class$->equals($nc(f)->getDeclaringClass());
	this->found = var$0 && "main"_s->equals($(f->getMethodName()));
	$var($String, line, $String::format("%d: %s"_s, $$new($ObjectArray, {
		$($Long::valueOf(counter)),
		$(f->toStackTraceElement())
	})));
	$nc(s)->append(line)->append(u'\n');
	$nc($System::out)->println(line);
}

VerifyStackTrace$Recorder::VerifyStackTrace$Recorder() {
}

$Class* VerifyStackTrace$Recorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"found", "Z", nullptr, 0, $field(VerifyStackTrace$Recorder, found)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VerifyStackTrace$Recorder, init$, void)},
		{"recordSTE", "(JLjava/lang/StringBuilder;Ljava/lang/StackWalker$StackFrame;)V", nullptr, $PUBLIC, $method(VerifyStackTrace$Recorder, recordSTE, void, int64_t, $StringBuilder*, $StackWalker$StackFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"VerifyStackTrace$Recorder", "VerifyStackTrace", "Recorder", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"VerifyStackTrace$Recorder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"VerifyStackTrace"
	};
	$loadClass(VerifyStackTrace$Recorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$Recorder);
	});
	return class$;
}

$Class* VerifyStackTrace$Recorder::class$ = nullptr;