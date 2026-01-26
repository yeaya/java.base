#include <EnqueuePollRace.h>

#include <EnqueuePollRace$WeakRef.h>
#include <jcpp.h>

using $EnqueuePollRace$WeakRef = ::EnqueuePollRace$WeakRef;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EnqueuePollRace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EnqueuePollRace, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnqueuePollRace, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _EnqueuePollRace_InnerClassesInfo_[] = {
	{"EnqueuePollRace$WeakRef", "EnqueuePollRace", "WeakRef", $STATIC},
	{}
};

$ClassInfo _EnqueuePollRace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnqueuePollRace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnqueuePollRace_MethodInfo_,
	nullptr,
	nullptr,
	_EnqueuePollRace_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EnqueuePollRace$WeakRef"
};

$Object* allocate$EnqueuePollRace($Class* clazz) {
	return $of($alloc(EnqueuePollRace));
}

void EnqueuePollRace::init$() {
}

void EnqueuePollRace::main($StringArray* args) {
	$$new($EnqueuePollRace$WeakRef)->run();
	$nc($System::out)->println("Test passed."_s);
}

EnqueuePollRace::EnqueuePollRace() {
}

$Class* EnqueuePollRace::load$($String* name, bool initialize) {
	$loadClass(EnqueuePollRace, name, initialize, &_EnqueuePollRace_ClassInfo_, allocate$EnqueuePollRace);
	return class$;
}

$Class* EnqueuePollRace::class$ = nullptr;