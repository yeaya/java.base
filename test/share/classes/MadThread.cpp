#include <MadThread.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

void MadThread::init$($ThreadGroup* tg, $String* name) {
	$Thread::init$(tg, name);
	$set(this, name, name);
}

void MadThread::run() {
	$nc($System::out)->println($$str({"me run "_s, this->name}));
}

MadThread::MadThread() {
}

$Class* MadThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(MadThread, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, 0, $method(MadThread, init$, void, $ThreadGroup*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MadThread, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MadThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MadThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MadThread);
	});
	return class$;
}

$Class* MadThread::class$ = nullptr;