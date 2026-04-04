#include <java/lang/Throwable$SentinelHolder.h>
#include <java/lang/StackTraceElement.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef STACK_TRACE_ELEMENT_SENTINEL
#undef STACK_TRACE_SENTINEL

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;

namespace java {
	namespace lang {

$StackTraceElement* Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL = nullptr;
$StackTraceElementArray* Throwable$SentinelHolder::STACK_TRACE_SENTINEL = nullptr;

void Throwable$SentinelHolder::init$() {
}

void Throwable$SentinelHolder::clinit$($Class* clazz) {
	$assignStatic(Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL, $new($StackTraceElement, ""_s, ""_s, nullptr, $Integer::MIN_VALUE));
	$assignStatic(Throwable$SentinelHolder::STACK_TRACE_SENTINEL, $new($StackTraceElementArray, {Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL}));
}

Throwable$SentinelHolder::Throwable$SentinelHolder() {
}

$Class* Throwable$SentinelHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"STACK_TRACE_ELEMENT_SENTINEL", "Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Throwable$SentinelHolder, STACK_TRACE_ELEMENT_SENTINEL)},
		{"STACK_TRACE_SENTINEL", "[Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Throwable$SentinelHolder, STACK_TRACE_SENTINEL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Throwable$SentinelHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Throwable$SentinelHolder", "java.lang.Throwable", "SentinelHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Throwable$SentinelHolder",
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
		"java.lang.Throwable"
	};
	$loadClass(Throwable$SentinelHolder, name, initialize, &classInfo$$, Throwable$SentinelHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Throwable$SentinelHolder);
	});
	return class$;
}

$Class* Throwable$SentinelHolder::class$ = nullptr;

	} // lang
} // java