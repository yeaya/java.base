#include <Factory.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TRUE
#undef FALSE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Factory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Factory::*)()>(&Factory::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Factory::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Factory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Factory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Factory_MethodInfo_
};

$Object* allocate$Factory($Class* clazz) {
	return $of($alloc(Factory));
}

void Factory::init$() {
}

void Factory::main($StringArray* args) {
	$init($Boolean);
	if ($Boolean::valueOf(true) != $Boolean::TRUE) {
		$throwNew($Exception, "Truth failure"_s);
	}
	if ($Boolean::valueOf(false) != $Boolean::FALSE) {
		$throwNew($Exception, "Major fallacy"_s);
	}
}

Factory::Factory() {
}

$Class* Factory::load$($String* name, bool initialize) {
	$loadClass(Factory, name, initialize, &_Factory_ClassInfo_, allocate$Factory);
	return class$;
}

$Class* Factory::class$ = nullptr;