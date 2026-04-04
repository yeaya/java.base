#include <SiblingIOEHandle$ProcessC.h>
#include <SiblingIOEHandle$APP.h>
#include <SiblingIOEHandle.h>
#include <java/io/IOException.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

#undef C

using $SiblingIOEHandle = ::SiblingIOEHandle;
using $SiblingIOEHandle$APP = ::SiblingIOEHandle$APP;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

void SiblingIOEHandle$ProcessC::init$($CyclicBarrier* barrier) {
	$set(this, barrier, barrier);
}

void SiblingIOEHandle$ProcessC::run() {
	$useLocalObjectStack();
	try {
		if ($SiblingIOEHandle::waitBarrier(this->barrier)) {
			$SiblingIOEHandle::waitAbit();
			$init($SiblingIOEHandle$APP);
			$var($ProcessBuilder, builderC, $new($ProcessBuilder, $($SiblingIOEHandle::getCommandArray($($SiblingIOEHandle$APP::C->name())))));
			$set(this, processC, builderC->start());
			$SiblingIOEHandle::procClaunched = true;
		}
	} catch ($IOException& ex) {
		ex->printStackTrace();
	}
}

void SiblingIOEHandle$ProcessC::waitFor() {
	$nc(this->processC)->waitFor();
}

SiblingIOEHandle$ProcessC::SiblingIOEHandle$ProcessC() {
}

$Class* SiblingIOEHandle$ProcessC::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $PRIVATE, $field(SiblingIOEHandle$ProcessC, barrier)},
		{"processC", "Ljava/lang/Process;", nullptr, $PRIVATE, $field(SiblingIOEHandle$ProcessC, processC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CyclicBarrier;)V", nullptr, $PUBLIC, $method(SiblingIOEHandle$ProcessC, init$, void, $CyclicBarrier*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SiblingIOEHandle$ProcessC, run, void)},
		{"waitFor", "()V", nullptr, $PUBLIC, $virtualMethod(SiblingIOEHandle$ProcessC, waitFor, void), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SiblingIOEHandle$ProcessC", "SiblingIOEHandle", "ProcessC", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SiblingIOEHandle$ProcessC",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SiblingIOEHandle"
	};
	$loadClass(SiblingIOEHandle$ProcessC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SiblingIOEHandle$ProcessC);
	});
	return class$;
}

$Class* SiblingIOEHandle$ProcessC::class$ = nullptr;