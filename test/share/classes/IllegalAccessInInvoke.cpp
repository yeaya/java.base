#include <IllegalAccessInInvoke.h>

#include <Foo.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Foo = ::Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _IllegalAccessInInvoke_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalAccessInInvoke::*)()>(&IllegalAccessInInvoke::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IllegalAccessInInvoke::main))},
	{}
};

$ClassInfo _IllegalAccessInInvoke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IllegalAccessInInvoke",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IllegalAccessInInvoke_MethodInfo_
};

$Object* allocate$IllegalAccessInInvoke($Class* clazz) {
	return $of($alloc(IllegalAccessInInvoke));
}

void IllegalAccessInInvoke::init$() {
}

void IllegalAccessInInvoke::main($StringArray* argv) {
	$load(IllegalAccessInInvoke);
	$beforeCallerSensitive();
	$var($ClassArray, argTypes, $new($ClassArray, 0));
	$var($ObjectArray, args, $new($ObjectArray, 0));
	$var($Method, pm, nullptr);
	try {
		$load($Foo);
		$assign(pm, $Foo::class$->getDeclaredMethod("privateMethod"_s, argTypes));
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, nsme, $catch());
		$throwNew($RuntimeException, "Bizzare: privateMethod *must* be there"_s);
	}
	bool ethrown = false;
	try {
		$nc(pm)->invoke($$new($Foo), args);
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, iae, $catch());
		ethrown = true;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, $$str({"Unexpected "_s, $(e->toString())}));
	}
	if (!ethrown) {
		$throwNew($RuntimeException, "Reflection access checks are disabled"_s);
	}
}

IllegalAccessInInvoke::IllegalAccessInInvoke() {
}

$Class* IllegalAccessInInvoke::load$($String* name, bool initialize) {
	$loadClass(IllegalAccessInInvoke, name, initialize, &_IllegalAccessInInvoke_ClassInfo_, allocate$IllegalAccessInInvoke);
	return class$;
}

$Class* IllegalAccessInInvoke::class$ = nullptr;