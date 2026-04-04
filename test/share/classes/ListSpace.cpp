#include <ListSpace.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ListSpace::init$() {
}

void ListSpace::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, d, $new($File, "."_s));
	$assign(d, $new($File, $$str({$(d->getCanonicalPath()), " "_s})));
	if (!d->isDirectory()) {
		return;
	}
	if (d->list() == nullptr) {
		$throwNew($RuntimeException, "list is null"_s);
	}
}

ListSpace::ListSpace() {
}

$Class* ListSpace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ListSpace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ListSpace, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ListSpace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ListSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSpace);
	});
	return class$;
}

$Class* ListSpace::class$ = nullptr;