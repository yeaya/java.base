#include <Patterns.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$File* Patterns::dir = nullptr;

void Patterns::init$() {
}

void Patterns::ckn($String* prefix, $String* suffix) {
	$init(Patterns);
	$useLocalObjectStack();
	try {
		$var($File, f, $File::createTempFile(prefix, suffix, Patterns::dir));
		$nc(f)->deleteOnExit();
	} catch ($Exception& x) {
		if (($instanceOf($IOException, x)) || ($instanceOf($NullPointerException, x)) || ($instanceOf($IllegalArgumentException, x))) {
			$nc($System::err)->println($$str({"\""_s, prefix, "\", \""_s, suffix, "\" failed as expected: "_s, $(x->getMessage())}));
			return;
		}
		$throw(x);
	}
	$throwNew($Exception, $$str({"\""_s, prefix, "\", \""_s, suffix, "\" should have failed"_s}));
}

void Patterns::cky($String* prefix, $String* suffix) {
	$init(Patterns);
	$useLocalObjectStack();
	$var($File, f, $File::createTempFile(prefix, suffix, Patterns::dir));
	$nc(f)->deleteOnExit();
	$nc($System::err)->println($$str({"\""_s, prefix, "\", \""_s, suffix, "\" --> "_s, $(f->getPath())}));
}

void Patterns::main($StringArray* args) {
	$init(Patterns);
	$useLocalObjectStack();
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

void Patterns::clinit$($Class* clazz) {
	$assignStatic(Patterns::dir, $new($File, "."_s));
}

Patterns::Patterns() {
}

$Class* Patterns::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/io/File;", nullptr, $STATIC, $staticField(Patterns, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Patterns, init$, void)},
		{"ckn", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Patterns, ckn, void, $String*, $String*), "java.lang.Exception"},
		{"cky", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Patterns, cky, void, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Patterns, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Patterns",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Patterns, name, initialize, &classInfo$$, Patterns::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Patterns);
	});
	return class$;
}

$Class* Patterns::class$ = nullptr;