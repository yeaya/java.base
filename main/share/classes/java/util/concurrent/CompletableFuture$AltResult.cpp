#include <java/util/concurrent/CompletableFuture$AltResult.h>

#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$AltResult_FieldInfo_[] = {
	{"ex", "Ljava/lang/Throwable;", nullptr, $FINAL, $field(CompletableFuture$AltResult, ex)},
	{}
};

$MethodInfo _CompletableFuture$AltResult_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(CompletableFuture$AltResult::*)($Throwable*)>(&CompletableFuture$AltResult::init$))},
	{}
};

$InnerClassInfo _CompletableFuture$AltResult_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$AltResult", "java.util.concurrent.CompletableFuture", "AltResult", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$AltResult_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$AltResult",
	"java.lang.Object",
	nullptr,
	_CompletableFuture$AltResult_FieldInfo_,
	_CompletableFuture$AltResult_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$AltResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$AltResult($Class* clazz) {
	return $of($alloc(CompletableFuture$AltResult));
}

void CompletableFuture$AltResult::init$($Throwable* x) {
	$set(this, ex, x);
}

CompletableFuture$AltResult::CompletableFuture$AltResult() {
}

$Class* CompletableFuture$AltResult::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$AltResult, name, initialize, &_CompletableFuture$AltResult_ClassInfo_, allocate$CompletableFuture$AltResult);
	return class$;
}

$Class* CompletableFuture$AltResult::class$ = nullptr;

		} // concurrent
	} // util
} // java