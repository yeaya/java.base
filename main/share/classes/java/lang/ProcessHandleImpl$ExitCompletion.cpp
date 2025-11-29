#include <java/lang/ProcessHandleImpl$ExitCompletion.h>

#include <java/lang/ProcessHandleImpl.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

namespace java {
	namespace lang {

$FieldInfo _ProcessHandleImpl$ExitCompletion_FieldInfo_[] = {
	{"isReaping", "Z", nullptr, $FINAL, $field(ProcessHandleImpl$ExitCompletion, isReaping)},
	{}
};

$MethodInfo _ProcessHandleImpl$ExitCompletion_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(ProcessHandleImpl$ExitCompletion::*)(bool)>(&ProcessHandleImpl$ExitCompletion::init$))},
	{}
};

$InnerClassInfo _ProcessHandleImpl$ExitCompletion_InnerClassesInfo_[] = {
	{"java.lang.ProcessHandleImpl$ExitCompletion", "java.lang.ProcessHandleImpl", "ExitCompletion", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessHandleImpl$ExitCompletion_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessHandleImpl$ExitCompletion",
	"java.util.concurrent.CompletableFuture",
	nullptr,
	_ProcessHandleImpl$ExitCompletion_FieldInfo_,
	_ProcessHandleImpl$ExitCompletion_MethodInfo_,
	"Ljava/util/concurrent/CompletableFuture<Ljava/lang/Integer;>;",
	nullptr,
	_ProcessHandleImpl$ExitCompletion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessHandleImpl"
};

$Object* allocate$ProcessHandleImpl$ExitCompletion($Class* clazz) {
	return $of($alloc(ProcessHandleImpl$ExitCompletion));
}

void ProcessHandleImpl$ExitCompletion::init$(bool isReaping) {
	$CompletableFuture::init$();
	this->isReaping = isReaping;
}

ProcessHandleImpl$ExitCompletion::ProcessHandleImpl$ExitCompletion() {
}

$Class* ProcessHandleImpl$ExitCompletion::load$($String* name, bool initialize) {
	$loadClass(ProcessHandleImpl$ExitCompletion, name, initialize, &_ProcessHandleImpl$ExitCompletion_ClassInfo_, allocate$ProcessHandleImpl$ExitCompletion);
	return class$;
}

$Class* ProcessHandleImpl$ExitCompletion::class$ = nullptr;

	} // lang
} // java