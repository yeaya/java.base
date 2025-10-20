#include <T4992170.h>

#include <A_0.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $A_0 = ::A_0;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$MethodInfo _T4992170_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T4992170::*)()>(&T4992170::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&T4992170::main)), "java.lang.NoSuchFieldException"},
	{}
};

$ClassInfo _T4992170_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"T4992170",
	"java.lang.Object",
	nullptr,
	nullptr,
	_T4992170_MethodInfo_
};

$Object* allocate$T4992170($Class* clazz) {
	return $of($alloc(T4992170));
}

void T4992170::init$() {
}

void T4992170::main($StringArray* args) {
	$load(T4992170);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Type, t, $nc($($nc($of($$new($A_0)->o))->getClass()->getField("t"_s)))->getGenericType());
	if (!($instanceOf($TypeVariable, t))) {
		$throwNew($Error, $$str({""_s, t}));
	}
}

T4992170::T4992170() {
}

$Class* T4992170::load$($String* name, bool initialize) {
	$loadClass(T4992170, name, initialize, &_T4992170_ClassInfo_, allocate$T4992170);
	return class$;
}

$Class* T4992170::class$ = nullptr;