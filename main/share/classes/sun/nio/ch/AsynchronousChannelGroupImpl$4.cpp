#include <sun/nio/ch/AsynchronousChannelGroupImpl$4.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl$4$1.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $AsynchronousChannelGroupImpl$4$1 = ::sun::nio::ch::AsynchronousChannelGroupImpl$4$1;

namespace sun {
	namespace nio {
		namespace ch {

void AsynchronousChannelGroupImpl$4::init$($AsynchronousChannelGroupImpl* this$0, $Runnable* val$delegate, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$delegate, val$delegate);
	$set(this, val$acc, val$acc);
}

void AsynchronousChannelGroupImpl$4::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($AsynchronousChannelGroupImpl$4$1, this), this->val$acc);
}

AsynchronousChannelGroupImpl$4::AsynchronousChannelGroupImpl$4() {
}

$Class* AsynchronousChannelGroupImpl$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, this$0)},
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, val$acc)},
		{"val$delegate", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, val$delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;Ljava/lang/Runnable;Ljava/security/AccessControlContext;)V", "()V", 0, $method(AsynchronousChannelGroupImpl$4, init$, void, $AsynchronousChannelGroupImpl*, $Runnable*, $AccessControlContext*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelGroupImpl$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.AsynchronousChannelGroupImpl",
		"execute",
		"(Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousChannelGroupImpl$4", nullptr, nullptr, 0},
		{"sun.nio.ch.AsynchronousChannelGroupImpl$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousChannelGroupImpl$4",
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
		"sun.nio.ch.AsynchronousChannelGroupImpl"
	};
	$loadClass(AsynchronousChannelGroupImpl$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannelGroupImpl$4);
	});
	return class$;
}

$Class* AsynchronousChannelGroupImpl$4::class$ = nullptr;

		} // ch
	} // nio
} // sun