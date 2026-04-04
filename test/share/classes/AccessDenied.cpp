#include <AccessDenied.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void AccessDenied::init$() {
}

void AccessDenied::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, dir, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "hugo"_s));
	dir->deleteOnExit();
	if (!dir->mkdir()) {
		$throwNew($Exception, $$str({"Could not create directory:"_s, dir}));
	}
	$nc($System::out)->println($$str({"Created directory:"_s, dir}));
	$var($File, file, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "hugo"_s));
	bool result = file->createNewFile();
	$System::out->println($$str({"CreateNewFile() for:"_s, file, " returned:"_s, $$str(result)}));
	if (result) {
		$throwNew($Exception, "Expected createNewFile() to return false but it returned true"_s);
	}
}

AccessDenied::AccessDenied() {
}

$Class* AccessDenied::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccessDenied, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AccessDenied, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AccessDenied",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessDenied, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessDenied);
	});
	return class$;
}

$Class* AccessDenied::class$ = nullptr;