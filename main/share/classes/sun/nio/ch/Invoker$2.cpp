#include <sun/nio/ch/Invoker$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/CompletionHandler.h>
#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>
#include <sun/nio/ch/Invoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $Invoker = ::sun::nio::ch::Invoker;
using $Invoker$GroupAndInvokeCount = ::sun::nio::ch::Invoker$GroupAndInvokeCount;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Invoker$2_FieldInfo_[] = {
	{"val$exc", "Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$2, val$exc)},
	{"val$result", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$2, val$result)},
	{"val$attachment", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$2, val$attachment)},
	{"val$handler", "Ljava/nio/channels/CompletionHandler;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$2, val$handler)},
	{}
};

$MethodInfo _Invoker$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "()V", 0, $method(static_cast<void(Invoker$2::*)($CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Invoker$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.Invoker",
	"invokeIndirectly",
	"(Ljava/nio/channels/AsynchronousChannel;Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V"
};

$InnerClassInfo _Invoker$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.Invoker$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Invoker$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Invoker$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Invoker$2_FieldInfo_,
	_Invoker$2_MethodInfo_,
	nullptr,
	&_Invoker$2_EnclosingMethodInfo_,
	_Invoker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Invoker"
};

$Object* allocate$Invoker$2($Class* clazz) {
	return $of($alloc(Invoker$2));
}

void Invoker$2::init$($CompletionHandler* val$handler, Object$* val$attachment, Object$* val$result, $Throwable* val$exc) {
	$set(this, val$handler, val$handler);
	$set(this, val$attachment, val$attachment);
	$set(this, val$result, val$result);
	$set(this, val$exc, val$exc);
}

void Invoker$2::run() {
	$init($Invoker);
	$var($Invoker$GroupAndInvokeCount, thisGroupAndInvokeCount, $cast($Invoker$GroupAndInvokeCount, $nc($Invoker::myGroupAndInvokeCount)->get()));
	if (thisGroupAndInvokeCount != nullptr) {
		thisGroupAndInvokeCount->setInvokeCount(1);
	}
	$Invoker::invokeUnchecked(this->val$handler, this->val$attachment, this->val$result, this->val$exc);
}

Invoker$2::Invoker$2() {
}

$Class* Invoker$2::load$($String* name, bool initialize) {
	$loadClass(Invoker$2, name, initialize, &_Invoker$2_ClassInfo_, allocate$Invoker$2);
	return class$;
}

$Class* Invoker$2::class$ = nullptr;

		} // ch
	} // nio
} // sun