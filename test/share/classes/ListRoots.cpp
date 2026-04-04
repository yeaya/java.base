#include <ListRoots.h>
#include <java/io/File.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ListRoots::init$() {
}

void ListRoots::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileArray, rs, $File::listRoots());
	for (int32_t i = 0; i < $nc(rs)->length; ++i) {
		$nc($System::out)->println($$str({$$str(i), ": "_s, rs->get(i)}));
	}
	$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s)), "ListRoots.java"_s));
	$var($String, cp, f->getCanonicalPath());
	for (int32_t i = 0; i < rs->length; ++i) {
		if ($nc(cp)->startsWith($($nc(rs->get(i))->getPath()))) {
			break;
		}
		if (i == rs->length - 1) {
			$throwNew($Exception, $$str({cp, " does not have a recognized root"_s}));
		}
	}
}

ListRoots::ListRoots() {
}

$Class* ListRoots::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ListRoots, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ListRoots, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ListRoots",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ListRoots, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListRoots);
	});
	return class$;
}

$Class* ListRoots::class$ = nullptr;