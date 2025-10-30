#include <java/util/concurrent/CompletableFuture$CoCompletion.h>

#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$CoCompletion_FieldInfo_[] = {
	{"base", "Ljava/util/concurrent/CompletableFuture$BiCompletion;", "Ljava/util/concurrent/CompletableFuture$BiCompletion<***>;", 0, $field(CompletableFuture$CoCompletion, base)},
	{}
};

$MethodInfo _CompletableFuture$CoCompletion_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture$BiCompletion;)V", "(Ljava/util/concurrent/CompletableFuture$BiCompletion<***>;)V", 0, $method(static_cast<void(CompletableFuture$CoCompletion::*)($CompletableFuture$BiCompletion*)>(&CompletableFuture$CoCompletion::init$))},
	{"isLive", "()Z", nullptr, $FINAL},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<*>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$CoCompletion_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$CoCompletion", "java.util.concurrent.CompletableFuture", "CoCompletion", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$CoCompletion_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$CoCompletion",
	"java.util.concurrent.CompletableFuture$Completion",
	nullptr,
	_CompletableFuture$CoCompletion_FieldInfo_,
	_CompletableFuture$CoCompletion_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$CoCompletion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$CoCompletion($Class* clazz) {
	return $of($alloc(CompletableFuture$CoCompletion));
}

void CompletableFuture$CoCompletion::init$($CompletableFuture$BiCompletion* base) {
	$CompletableFuture$Completion::init$();
	$set(this, base, base);
}

$CompletableFuture* CompletableFuture$CoCompletion::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture$BiCompletion, c, nullptr);
	$var($CompletableFuture, d, nullptr);
	bool var$0 = ($assign(c, this->base)) == nullptr;
	if (var$0 || ($assign(d, $nc(c)->tryFire(mode))) == nullptr) {
		return nullptr;
	}
	$set(this, base, nullptr);
	return d;
}

bool CompletableFuture$CoCompletion::isLive() {
	$var($CompletableFuture$BiCompletion, c, nullptr);
	bool var$0 = ($assign(c, this->base)) != nullptr;
	return var$0 && $nc(c)->dep != nullptr;
}

CompletableFuture$CoCompletion::CompletableFuture$CoCompletion() {
}

$Class* CompletableFuture$CoCompletion::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$CoCompletion, name, initialize, &_CompletableFuture$CoCompletion_ClassInfo_, allocate$CompletableFuture$CoCompletion);
	return class$;
}

$Class* CompletableFuture$CoCompletion::class$ = nullptr;

		} // concurrent
	} // util
} // java