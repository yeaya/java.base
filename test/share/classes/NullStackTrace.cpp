#include <NullStackTrace.h>

#include <java/lang/StackTraceElement.h>
#include <jcpp.h>

#undef TIMES

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;

$FieldInfo _NullStackTrace_FieldInfo_[] = {
	{"TIMES", "I", nullptr, $STATIC | $FINAL, $constField(NullStackTrace, TIMES)},
	{}
};

$MethodInfo _NullStackTrace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullStackTrace::*)()>(&NullStackTrace::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullStackTrace::main))},
	{}
};

$ClassInfo _NullStackTrace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullStackTrace",
	"java.lang.Object",
	nullptr,
	_NullStackTrace_FieldInfo_,
	_NullStackTrace_MethodInfo_
};

$Object* allocate$NullStackTrace($Class* clazz) {
	return $of($alloc(NullStackTrace));
}

void NullStackTrace::init$() {
}

void NullStackTrace::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < NullStackTrace::TIMES; ++i) {
		$var($Thread, t, $new($Thread));
		t->start();
		$var($StackTraceElementArray, ste, t->getStackTrace());
		if (ste == nullptr) {
			$throwNew($RuntimeException, "Failed: Thread.getStackTrace should not return null"_s);
		}
	}
}

NullStackTrace::NullStackTrace() {
}

$Class* NullStackTrace::load$($String* name, bool initialize) {
	$loadClass(NullStackTrace, name, initialize, &_NullStackTrace_ClassInfo_, allocate$NullStackTrace);
	return class$;
}

$Class* NullStackTrace::class$ = nullptr;