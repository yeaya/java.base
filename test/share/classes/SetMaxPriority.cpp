#include <SetMaxPriority.h>

#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

#undef MAX_PRIORITY
#undef MIN_PRIORITY

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$MethodInfo _SetMaxPriority_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SetMaxPriority, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetMaxPriority, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SetMaxPriority_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetMaxPriority",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetMaxPriority_MethodInfo_
};

$Object* allocate$SetMaxPriority($Class* clazz) {
	return $of($alloc(SetMaxPriority));
}

void SetMaxPriority::init$() {
}

void SetMaxPriority::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $new($ThreadGroup, "foo"_s));
	$var($ThreadGroup, ptg, tg->getParent());
	int32_t currentMaxPriority = tg->getMaxPriority();
	int32_t halfMaxPriority = $nc(ptg)->getMaxPriority() / 2;
	if (halfMaxPriority - $Thread::MIN_PRIORITY < 2) {
		$throwNew($RuntimeException, "SetMaxPriority test no longer valid: starting parent max priority too close to Thread.MIN_PRIORITY"_s);
	}
	tg->setMaxPriority(halfMaxPriority - 2);
	currentMaxPriority = tg->getMaxPriority();
	if (currentMaxPriority != halfMaxPriority - 2) {
		$throwNew($RuntimeException, "SetMaxPriority failed: max priority not changed"_s);
	}
	tg->setMaxPriority(currentMaxPriority + 1);
	int32_t newMaxPriority = tg->getMaxPriority();
	if (newMaxPriority != currentMaxPriority + 1) {
		$throwNew($RuntimeException, "SetMaxPriority failed: defect 6497629 present"_s);
	}
	{
		$var($ints, arr$, $new($ints, {
			$Thread::MIN_PRIORITY - 1,
			$Thread::MAX_PRIORITY + 1
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t badPriority = arr$->get(i$);
			{
				int32_t oldPriority = tg->getMaxPriority();
				tg->setMaxPriority(badPriority);
				if (oldPriority != tg->getMaxPriority()) {
					$throwNew($RuntimeException, "setMaxPriority bad arg not ignored as specified"_s);
				}
			}
		}
	}
	$nc($System::out)->println("SetMaxPriority passed"_s);
}

SetMaxPriority::SetMaxPriority() {
}

$Class* SetMaxPriority::load$($String* name, bool initialize) {
	$loadClass(SetMaxPriority, name, initialize, &_SetMaxPriority_ClassInfo_, allocate$SetMaxPriority);
	return class$;
}

$Class* SetMaxPriority::class$ = nullptr;