#include <java/util/concurrent/CompletableFuture$BiCompletion.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$BiCompletion_FieldInfo_[] = {
	{"snd", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TU;>;", 0, $field(CompletableFuture$BiCompletion, snd)},
	{}
};

$MethodInfo _CompletableFuture$BiCompletion_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;)V", 0, $method(static_cast<void(CompletableFuture$BiCompletion::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$CompletableFuture*)>(&CompletableFuture$BiCompletion::init$))},
	{}
};

$InnerClassInfo _CompletableFuture$BiCompletion_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$BiCompletion_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.CompletableFuture$BiCompletion",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$BiCompletion_FieldInfo_,
	_CompletableFuture$BiCompletion_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TV;>;",
	nullptr,
	_CompletableFuture$BiCompletion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$BiCompletion($Class* clazz) {
	return $of($alloc(CompletableFuture$BiCompletion));
}

void CompletableFuture$BiCompletion::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, snd, snd);
}

CompletableFuture$BiCompletion::CompletableFuture$BiCompletion() {
}

$Class* CompletableFuture$BiCompletion::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$BiCompletion, name, initialize, &_CompletableFuture$BiCompletion_ClassInfo_, allocate$CompletableFuture$BiCompletion);
	return class$;
}

$Class* CompletableFuture$BiCompletion::class$ = nullptr;

		} // concurrent
	} // util
} // java