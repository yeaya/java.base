#include <CaseConvertSameInstance.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CaseConvertSameInstance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CaseConvertSameInstance::*)()>(&CaseConvertSameInstance::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CaseConvertSameInstance::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CaseConvertSameInstance_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CaseConvertSameInstance",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CaseConvertSameInstance_MethodInfo_
};

$Object* allocate$CaseConvertSameInstance($Class* clazz) {
	return $of($alloc(CaseConvertSameInstance));
}

void CaseConvertSameInstance::init$() {
}

void CaseConvertSameInstance::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ("foobar"_s->toLowerCase() != "foobar"_s) {
		$throwNew($Exception, "toLowerCase returned different object"_s);
	}
	if ("FOOBAR"_s->toUpperCase() != "FOOBAR"_s) {
		$throwNew($Exception, "toUpperCase returned different object"_s);
	}
	if (!($("FooBar"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("fooBar"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("foobaR"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("FOOBAR"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("FooBar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("fooBar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("foobaR"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("foobar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
}

CaseConvertSameInstance::CaseConvertSameInstance() {
}

$Class* CaseConvertSameInstance::load$($String* name, bool initialize) {
	$loadClass(CaseConvertSameInstance, name, initialize, &_CaseConvertSameInstance_ClassInfo_, allocate$CaseConvertSameInstance);
	return class$;
}

$Class* CaseConvertSameInstance::class$ = nullptr;