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
	$FieldInfo fieldInfos$$[] = {
		{"val$exc", "Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$exc)},
		{"val$value", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$value)},
		{"val$attachment", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$attachment)},
		{"val$handler", "Ljava/nio/channels/CompletionHandler;", nullptr, $FINAL | $SYNTHETIC, $field(Invoker$3, val$handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "()V", 0, $method(Invoker$3, init$, void, $CompletionHandler*, Object$*, Object$*, $Throwable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Invoker$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Invoker",
		"invokeIndirectly",
		"(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;Ljava/util/concurrent/Executor;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Invoker$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Invoker$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Invoker"
	};
	$loadClass(Invoker$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Invoker$3);
	});
	return class$;
}

$Class* Invoker$3::class$ = nullptr;

		} // ch
	} // nio
} // sun