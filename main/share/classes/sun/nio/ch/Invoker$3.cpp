#include <sun/nio/ch/Invoker$3.h>

#include <java/nio/channels/CompletionHandler.h>
#include <sun/nio/ch/Invoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $Invoker = ::sun::nio::ch::Invoker;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Invoker$3_FieldInfo_[] = {
	{"val$exc", "Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$exc)},
	{"val$value", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$value)},
	{"val$attachment", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$attachment)},
	{"val$handler", "Ljava/nio/channels/CompletionHandler;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$handler)},
	{}
};

$MethodInfo _Invoker$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "()V", 0, $method(static_cast<void(Invoker$3::*)($CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Invoker$3_EnclosingMethodInfo_ = {
	"sun.nio.ch.Invoker",
	"invokeIndirectly",
	"(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;Ljava/util/concurrent/Executor;)V"
};

$InnerClassInfo _Invoker$3_InnerClassesInfo_[] = {
	{"sun.nio.ch.Invoker$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Invoker$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Invoker$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_Invoker$3_FieldInfo_,
	_Invoker$3_MethodInfo_,
	nullptr,
	&_Invoker$3_EnclosingMethodInfo_,
	_Invoker$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Invoker"
};

$Object* allocate$Invoker$3($Class* clazz) {
	return $of($alloc(Invoker$3));
}

void Invoker$3::init$($CompletionHandler* val$handler, Object$* val$attachment, Object$* val$value, $Throwable* val$exc) {
	$set(this, val$handler, val$handler);
	$set(this, val$attachment, val$attachment);
	$set(this, val$value, val$value);
	$set(this, val$exc, val$exc);
}

void Invoker$3::run() {
	$Invoker::invokeUnchecked(this->val$handler, this->val$attachment, this->val$value, this->val$exc);
}

Invoker$3::Invoker$3() {
}

$Class* Invoker$3::load$($String* name, bool initialize) {
	$loadClass(Invoker$3, name, initialize, &_Invoker$3_ClassInfo_, allocate$Invoker$3);
	return class$;
}

$Class* Invoker$3::class$ = nullptr;

		} // ch
	} // nio
} // sun