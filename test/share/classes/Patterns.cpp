#include <Patterns.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _Patterns_FieldInfo_[] = {
	{"dir", "Ljava/io/File;", nullptr, $STATIC, $staticField(Patterns, dir)},
	{}
};

$MethodInfo _Patterns_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Patterns::*)()>(&Patterns::init$))},
	{"ckn", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Patterns::ckn)), "java.lang.Exception"},
	{"cky", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Patterns::cky)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Patterns::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Patterns_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Patterns",
	"java.lang.Object",
	nullptr,
	_Patterns_FieldInfo_,
	_Patterns_MethodInfo_
};

$Object* allocate$Patterns($Class* clazz) {
	return $of($alloc(Patterns));
}

$File* Patterns::dir = nullptr;

void Patterns::init$() {
}

void Patterns::ckn($String* prefix, $String* suffix) {
	$init(Patterns);
	try {
		$var($File, f, $File::createTempFile(prefix, suffix, Patterns::dir));
		$nc(f)->deleteOnExit();
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		if (($instanceOf($IOException, x)) || ($instanceOf($NullPointerException, x)) || ($instanceOf($IllegalArgumentException, x))) {
			$init($System);
			$nc($System::err)->println($$str({"\""_s, prefix, "\", \""_s, suffix, "\" failed as expected: "_s, $(x->getMessage())}));
			return;
		}
		$throw(x);
	}
	$throwNew($Exception, $$str({"\""_s, prefix, "\", \""_s, suffix, "\" should have failed"_s}));
}

void Patterns::cky($String* prefix, $String* suffix) {
	$init(Patterns);
	$var($File, f, $File::createTempFile(prefix, suffix, Patterns::dir));
	$nc(f)->deleteOnExit();
	$init($System);
	$nc($System::err)->println($$str({"\""_s, prefix, "\", \""_s, suffix, "\" --> "_s, $(f->getPath())}));
}

void Patterns::main($StringArray* args) {
	$init(Patterns);
	ckn(nullptr, nullptr);
	ckn(""_s, nullptr);
	ckn("x"_s, nullptr);
	ckn("xx"_s, nullptr);
	cky("xxx"_s, nullptr);
	cky("xxx"_s, ""_s);
	cky("xxx"_s, "y"_s);
	cky("xxx"_s, ".y"_s);
	cky("xyz"_s, $$str({"Directory"_s, $($System::getProperty("file.separator"_s))}));
}

void clinit$Patterns($Class* class$) {
	$assignStatic(Patterns::dir, $new($File, "."_s));
}

Patterns::Patterns() {
}

$Class* Patterns::load$($String* name, bool initialize) {
	$loadClass(Patterns, name, initialize, &_Patterns_ClassInfo_, clinit$Patterns, allocate$Patterns);
	return class$;
}

$Class* Patterns::class$ = nullptr;