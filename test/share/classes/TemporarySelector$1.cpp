#include <TemporarySelector$1.h>

#include <TemporarySelector.h>
#include <jcpp.h>

using $TemporarySelector = ::TemporarySelector;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TemporarySelector$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TemporarySelector$1, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TemporarySelector$1, run, void)},
	{}
};

$EnclosingMethodInfo _TemporarySelector$1_EnclosingMethodInfo_ = {
	"TemporarySelector",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TemporarySelector$1_InnerClassesInfo_[] = {
	{"TemporarySelector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporarySelector$1_ClassInfo_ = {
	$ACC_SUPER,
	"TemporarySelector$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TemporarySelector$1_MethodInfo_,
	nullptr,
	&_TemporarySelector$1_EnclosingMethodInfo_,
	_TemporarySelector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TemporarySelector"
};

$Object* allocate$TemporarySelector$1($Class* clazz) {
	return $of($alloc(TemporarySelector$1));
}

void TemporarySelector$1::init$() {
}

void TemporarySelector$1::run() {
	$init($TemporarySelector);
	while (!$TemporarySelector::done) {
		$System::gc();
		try {
			$Thread::sleep(1000);
		} catch ($Exception& e) {
		}
	}
}

TemporarySelector$1::TemporarySelector$1() {
}

$Class* TemporarySelector$1::load$($String* name, bool initialize) {
	$loadClass(TemporarySelector$1, name, initialize, &_TemporarySelector$1_ClassInfo_, allocate$TemporarySelector$1);
	return class$;
}

$Class* TemporarySelector$1::class$ = nullptr;