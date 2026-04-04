#include <sun/nio/ch/PipeImpl$Initializer$1.h>
#include <java/lang/Runnable.h>
#include <sun/nio/ch/PipeImpl$Initializer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PipeImpl$Initializer = ::sun::nio::ch::PipeImpl$Initializer;

namespace sun {
	namespace nio {
		namespace ch {

void PipeImpl$Initializer$1::init$($PipeImpl$Initializer* this$0, $Runnable* target) {
	$set(this, this$0, this$0);
	$Thread::init$(target);
}

void PipeImpl$Initializer$1::interrupt() {
}

PipeImpl$Initializer$1::PipeImpl$Initializer$1() {
}

$Class* PipeImpl$Initializer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/PipeImpl$Initializer;", nullptr, $FINAL | $SYNTHETIC, $field(PipeImpl$Initializer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/PipeImpl$Initializer;Ljava/lang/Runnable;)V", nullptr, 0, $method(PipeImpl$Initializer$1, init$, void, $PipeImpl$Initializer*, $Runnable*)},
		{"interrupt", "()V", nullptr, $PUBLIC, $virtualMethod(PipeImpl$Initializer$1, interrupt, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.PipeImpl$Initializer",
		"run",
		"()Ljava/lang/Void;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.PipeImpl$Initializer", "sun.nio.ch.PipeImpl", "Initializer", $PRIVATE | $STATIC},
		{"sun.nio.ch.PipeImpl$Initializer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.PipeImpl$Initializer$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.PipeImpl"
	};
	$loadClass(PipeImpl$Initializer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PipeImpl$Initializer$1);
	});
	return class$;
}

$Class* PipeImpl$Initializer$1::class$ = nullptr;

		} // ch
	} // nio
} // sun