#include <KeySets$Catch.h>

#include <KeySets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _KeySets$Catch_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(KeySets$Catch, init$, void, $Class*), "java.lang.Exception"},
	{"go", "()V", nullptr, $ABSTRACT, $virtualMethod(KeySets$Catch, go, void), "java.lang.Exception"},
	{}
};

$InnerClassInfo _KeySets$Catch_InnerClassesInfo_[] = {
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$Catch_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"KeySets$Catch",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeySets$Catch_MethodInfo_,
	nullptr,
	nullptr,
	_KeySets$Catch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$Catch($Class* clazz) {
	return $of($alloc(KeySets$Catch));
}

void KeySets$Catch::init$($Class* xc) {
	$useLocalCurrentObjectStackCache();
	try {
		go();
	} catch ($Exception& x) {
		if ($nc(xc)->isInstance(x)) {
			return;
		}
		$throwNew($Exception, "Wrong exception"_s, x);
	}
	$throwNew($Exception, $$str({"Not thrown as expected: "_s, $($nc(xc)->getName())}));
}

KeySets$Catch::KeySets$Catch() {
}

$Class* KeySets$Catch::load$($String* name, bool initialize) {
	$loadClass(KeySets$Catch, name, initialize, &_KeySets$Catch_ClassInfo_, allocate$KeySets$Catch);
	return class$;
}

$Class* KeySets$Catch::class$ = nullptr;