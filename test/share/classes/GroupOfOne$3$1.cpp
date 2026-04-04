#include <GroupOfOne$3$1.h>
#include <GroupOfOne$3.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $GroupOfOne$3 = ::GroupOfOne$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;

void GroupOfOne$3$1::init$($GroupOfOne$3* this$0) {
	$set(this, this$0, this$0);
}

void GroupOfOne$3$1::completed($Integer* bytesRead, $Void* att) {
	$throwNew($RuntimeException);
}

void GroupOfOne$3$1::failed($Throwable* exc, $Void* att) {
	if (!($instanceOf($AsynchronousCloseException, exc))) {
		$throwNew($RuntimeException, exc);
	}
	$nc($System::out)->println("Read failed (expected)"_s);
	$nc(this->this$0->val$latch)->countDown();
}

void GroupOfOne$3$1::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void GroupOfOne$3$1::completed(Object$* bytesRead, Object$* att) {
	this->completed($cast($Integer, bytesRead), $cast($Void, att));
}

GroupOfOne$3$1::GroupOfOne$3$1() {
}

$Class* GroupOfOne$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGroupOfOne$3;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGroupOfOne$3;)V", nullptr, 0, $method(GroupOfOne$3$1, init$, void, $GroupOfOne$3*)},
		{"completed", "(Ljava/lang/Integer;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$3$1, completed, void, $Integer*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$3$1, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$3$1, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$3$1, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GroupOfOne$3",
		"completed",
		"(Ljava/lang/Void;Ljava/lang/Void;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GroupOfOne$3", nullptr, nullptr, 0},
		{"GroupOfOne$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GroupOfOne$3$1",
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
		"GroupOfOne"
	};
	$loadClass(GroupOfOne$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupOfOne$3$1);
	});
	return class$;
}

$Class* GroupOfOne$3$1::class$ = nullptr;