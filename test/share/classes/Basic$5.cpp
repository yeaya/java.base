#include <Basic$5.h>
#include <Basic.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void Basic$5::init$($CountDownLatch* val$latch) {
	$set(this, val$latch, val$latch);
}

void Basic$5::completed($Integer* result, $Void* att) {
	$nc(this->val$latch)->countDown();
}

void Basic$5::failed($Throwable* exc, $Void* att) {
}

void Basic$5::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void Basic$5::completed(Object$* result, Object$* att) {
	this->completed($cast($Integer, result), $cast($Void, att));
}

Basic$5::Basic$5() {
}

$Class* Basic$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$5, val$latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(Basic$5, init$, void, $CountDownLatch*)},
		{"completed", "(Ljava/lang/Integer;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Basic$5, completed, void, $Integer*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Basic$5, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Basic$5, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Basic$5, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic",
		"testCustomThreadPool",
		"(Ljava/nio/file/Path;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic$5",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic"
	};
	$loadClass(Basic$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic$5);
	});
	return class$;
}

$Class* Basic$5::class$ = nullptr;