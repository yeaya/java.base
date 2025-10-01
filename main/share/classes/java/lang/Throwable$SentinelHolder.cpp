#include <java/lang/Throwable$SentinelHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef STACK_TRACE_SENTINEL
#undef STACK_TRACE_ELEMENT_SENTINEL

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;

namespace java {
	namespace lang {

$FieldInfo _Throwable$SentinelHolder_FieldInfo_[] = {
	{"STACK_TRACE_ELEMENT_SENTINEL", "Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Throwable$SentinelHolder, STACK_TRACE_ELEMENT_SENTINEL)},
	{"STACK_TRACE_SENTINEL", "[Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Throwable$SentinelHolder, STACK_TRACE_SENTINEL)},
	{}
};

$MethodInfo _Throwable$SentinelHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Throwable$SentinelHolder::*)()>(&Throwable$SentinelHolder::init$))},
	{}
};

$InnerClassInfo _Throwable$SentinelHolder_InnerClassesInfo_[] = {
	{"java.lang.Throwable$SentinelHolder", "java.lang.Throwable", "SentinelHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Throwable$SentinelHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Throwable$SentinelHolder",
	"java.lang.Object",
	nullptr,
	_Throwable$SentinelHolder_FieldInfo_,
	_Throwable$SentinelHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Throwable$SentinelHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Throwable"
};

$Object* allocate$Throwable$SentinelHolder($Class* clazz) {
	return $of($alloc(Throwable$SentinelHolder));
}


$StackTraceElement* Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL = nullptr;

$StackTraceElementArray* Throwable$SentinelHolder::STACK_TRACE_SENTINEL = nullptr;

void Throwable$SentinelHolder::init$() {
}

void clinit$Throwable$SentinelHolder($Class* class$) {
	$assignStatic(Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL, $new($StackTraceElement, ""_s, ""_s, nullptr, $Integer::MIN_VALUE));
	$assignStatic(Throwable$SentinelHolder::STACK_TRACE_SENTINEL, $new($StackTraceElementArray, {Throwable$SentinelHolder::STACK_TRACE_ELEMENT_SENTINEL}));
}

Throwable$SentinelHolder::Throwable$SentinelHolder() {
}

$Class* Throwable$SentinelHolder::load$($String* name, bool initialize) {
	$loadClass(Throwable$SentinelHolder, name, initialize, &_Throwable$SentinelHolder_ClassInfo_, clinit$Throwable$SentinelHolder, allocate$Throwable$SentinelHolder);
	return class$;
}

$Class* Throwable$SentinelHolder::class$ = nullptr;

	} // lang
} // java