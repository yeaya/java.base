#include <java/util/concurrent/CompletableFuture$Canceller.h>

#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Future = ::java::util::concurrent::Future;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$Canceller_FieldInfo_[] = {
	{"f", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<*>;", $FINAL, $field(CompletableFuture$Canceller, f)},
	{}
};

$MethodInfo _CompletableFuture$Canceller_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Future;)V", "(Ljava/util/concurrent/Future<*>;)V", 0, $method(static_cast<void(CompletableFuture$Canceller::*)($Future*)>(&CompletableFuture$Canceller::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CompletableFuture$Canceller::*)(Object$*,$Throwable*)>(&CompletableFuture$Canceller::accept))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _CompletableFuture$Canceller_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$Canceller", "java.util.concurrent.CompletableFuture", "Canceller", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$Canceller_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$Canceller",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	_CompletableFuture$Canceller_FieldInfo_,
	_CompletableFuture$Canceller_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiConsumer<Ljava/lang/Object;Ljava/lang/Throwable;>;",
	nullptr,
	_CompletableFuture$Canceller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$Canceller($Class* clazz) {
	return $of($alloc(CompletableFuture$Canceller));
}

void CompletableFuture$Canceller::init$($Future* f) {
	$set(this, f, f);
}

void CompletableFuture$Canceller::accept(Object$* ignore, $Throwable* ex) {
	if (ex == nullptr && this->f != nullptr && !$nc(this->f)->isDone()) {
		$nc(this->f)->cancel(false);
	}
}

void CompletableFuture$Canceller::accept(Object$* ignore, Object$* ex) {
	this->accept(ignore, $cast($Throwable, ex));
}

CompletableFuture$Canceller::CompletableFuture$Canceller() {
}

$Class* CompletableFuture$Canceller::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$Canceller, name, initialize, &_CompletableFuture$Canceller_ClassInfo_, allocate$CompletableFuture$Canceller);
	return class$;
}

$Class* CompletableFuture$Canceller::class$ = nullptr;

		} // concurrent
	} // util
} // java