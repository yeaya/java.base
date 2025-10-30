#include <WakeupEmpty.h>

#include <WakeupEmpty$1.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef SLEEP_TIME

using $WakeupEmpty$1 = ::WakeupEmpty$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _WakeupEmpty_FieldInfo_[] = {
	{"SLEEP_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WakeupEmpty, SLEEP_TIME)},
	{}
};

$MethodInfo _WakeupEmpty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WakeupEmpty::*)()>(&WakeupEmpty::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WakeupEmpty::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _WakeupEmpty_InnerClassesInfo_[] = {
	{"WakeupEmpty$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WakeupEmpty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WakeupEmpty",
	"java.lang.Object",
	nullptr,
	_WakeupEmpty_FieldInfo_,
	_WakeupEmpty_MethodInfo_,
	nullptr,
	nullptr,
	_WakeupEmpty_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WakeupEmpty$1"
};

$Object* allocate$WakeupEmpty($Class* clazz) {
	return $of($alloc(WakeupEmpty));
}

void WakeupEmpty::init$() {
}

void WakeupEmpty::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $Selector::open());
	$var($Thread, thread, $new($WakeupEmpty$1, sel));
	thread->start();
	if ($nc(sel)->select() != 0) {
		$throwNew($Exception, "Zero expected"_s);
	}
}

WakeupEmpty::WakeupEmpty() {
}

$Class* WakeupEmpty::load$($String* name, bool initialize) {
	$loadClass(WakeupEmpty, name, initialize, &_WakeupEmpty_ClassInfo_, allocate$WakeupEmpty);
	return class$;
}

$Class* WakeupEmpty::class$ = nullptr;