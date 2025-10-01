#include <java/util/concurrent/CompletableFuture$AnyOf.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $CompletableFutureArray = $Array<::java::util::concurrent::CompletableFuture>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$AnyOf_FieldInfo_[] = {
	{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;", 0, $field(CompletableFuture$AnyOf, dep)},
	{"src", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", 0, $field(CompletableFuture$AnyOf, src)},
	{"srcs", "[Ljava/util/concurrent/CompletableFuture;", "[Ljava/util/concurrent/CompletableFuture<*>;", 0, $field(CompletableFuture$AnyOf, srcs)},
	{}
};

$MethodInfo _CompletableFuture$AnyOf_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;[Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;Ljava/util/concurrent/CompletableFuture<*>;[Ljava/util/concurrent/CompletableFuture<*>;)V", 0, $method(static_cast<void(CompletableFuture$AnyOf::*)($CompletableFuture*,$CompletableFuture*,$CompletableFutureArray*)>(&CompletableFuture$AnyOf::init$))},
	{"isLive", "()Z", nullptr, $FINAL},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Object;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$AnyOf_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$AnyOf", "java.util.concurrent.CompletableFuture", "AnyOf", $STATIC},
	{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$AnyOf_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.CompletableFuture$AnyOf",
	"java.util.concurrent.CompletableFuture$Completion",
	nullptr,
	_CompletableFuture$AnyOf_FieldInfo_,
	_CompletableFuture$AnyOf_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$AnyOf_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$AnyOf($Class* clazz) {
	return $of($alloc(CompletableFuture$AnyOf));
}

void CompletableFuture$AnyOf::init$($CompletableFuture* dep, $CompletableFuture* src, $CompletableFutureArray* srcs) {
	$CompletableFuture$Completion::init$();
	$set(this, dep, dep);
	$set(this, src, src);
	$set(this, srcs, srcs);
}

$CompletableFuture* CompletableFuture$AnyOf::tryFire(int32_t mode) {
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFutureArray, as, nullptr);
	$var($Object, r, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(as, this->srcs)) == nullptr) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, srcs, nullptr);
	if ($nc(d)->completeRelay(r)) {
		{
			$var($CompletableFutureArray, arr$, as);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($CompletableFuture, b, arr$->get(i$));
				if (b != a) {
					$nc(b)->cleanStack();
				}
			}
		}
		if (mode < 0) {
			return d;
		} else {
			d->postComplete();
		}
	}
	return nullptr;
}

bool CompletableFuture$AnyOf::isLive() {
	$var($CompletableFuture, d, nullptr);
	bool var$0 = ($assign(d, this->dep)) != nullptr;
	return var$0 && $nc(d)->result == nullptr;
}

CompletableFuture$AnyOf::CompletableFuture$AnyOf() {
}

$Class* CompletableFuture$AnyOf::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$AnyOf, name, initialize, &_CompletableFuture$AnyOf_ClassInfo_, allocate$CompletableFuture$AnyOf);
	return class$;
}

$Class* CompletableFuture$AnyOf::class$ = nullptr;

		} // concurrent
	} // util
} // java