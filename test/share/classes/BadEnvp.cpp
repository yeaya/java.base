#include <BadEnvp.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$MethodInfo _BadEnvp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BadEnvp::*)()>(&BadEnvp::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BadEnvp::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _BadEnvp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BadEnvp",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BadEnvp_MethodInfo_
};

$Object* allocate$BadEnvp($Class* clazz) {
	return $of($alloc(BadEnvp));
}

void BadEnvp::init$() {
}

void BadEnvp::main($StringArray* args) {
	$var($Runtime, r, $Runtime::getRuntime());
	$var($File, dir, $new($File, "."_s));
	$var($StringArray, envpWithNull, $new($StringArray, {
		"FOO=BAR"_s,
		($String*)nullptr
	}));
	try {
		$nc(r)->exec("echo"_s, envpWithNull);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$nc(r)->exec("echo"_s, envpWithNull, dir);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$nc(r)->exec($$new($StringArray, {"echo"_s}), envpWithNull);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$nc(r)->exec($$new($StringArray, {"echo"_s}), envpWithNull, dir);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
}

BadEnvp::BadEnvp() {
}

$Class* BadEnvp::load$($String* name, bool initialize) {
	$loadClass(BadEnvp, name, initialize, &_BadEnvp_ClassInfo_, allocate$BadEnvp);
	return class$;
}

$Class* BadEnvp::class$ = nullptr;