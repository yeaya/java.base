#include <sun/nio/ch/AsynchronousChannelGroupImpl$4$1.h>
#include <java/lang/Runnable.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl$4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelGroupImpl$4 = ::sun::nio::ch::AsynchronousChannelGroupImpl$4;

namespace sun {
	namespace nio {
		namespace ch {

void AsynchronousChannelGroupImpl$4$1::init$($AsynchronousChannelGroupImpl$4* this$1) {
	$set(this, this$1, this$1);
}

$Object* AsynchronousChannelGroupImpl$4$1::run() {
	$nc(this->this$1->val$delegate)->run();
	return nullptr;
}

AsynchronousChannelGroupImpl$4$1::AsynchronousChannelGroupImpl$4$1() {
}

$Class* AsynchronousChannelGroupImpl$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/nio/ch/AsynchronousChannelGroupImpl$4;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl$4;)V", nullptr, 0, $method(AsynchronousChannelGroupImpl$4$1, init$, void, $AsynchronousChannelGroupImpl$4*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelGroupImpl$4$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.AsynchronousChannelGroupImpl$4",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousChannelGroupImpl$4", nullptr, nullptr, 0},
		{"sun.nio.ch.AsynchronousChannelGroupImpl$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousChannelGroupImpl$4$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.AsynchronousChannelGroupImpl"
	};
	$loadClass(AsynchronousChannelGroupImpl$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannelGroupImpl$4$1);
	});
	return class$;
}

$Class* AsynchronousChannelGroupImpl$4$1::class$ = nullptr;

		} // ch
	} // nio
} // sun