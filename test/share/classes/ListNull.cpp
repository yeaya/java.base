#include <ListNull.h>
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FilenameFilter.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileFilter = ::java::io::FileFilter;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ListNull::init$() {
}

void ListNull::go($String* what, $ObjectArray* fs) {
	$useLocalObjectStack();
	if (fs == nullptr) {
		$throwNew($Exception, $$str({what, " returned null"_s}));
	}
	$nc($System::err)->println($$str({"-- "_s, what}));
	for (int32_t i = 0; i < $nc(fs)->length; ++i) {
		$System::err->println(fs->get(i));
	}
}

void ListNull::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, d, $new($File, "."_s));
	go("list()"_s, $(d->list()));
	go("listFiles()"_s, $(d->listFiles()));
	go("list(null)"_s, $(d->list(nullptr)));
	go("listFiles((FilenameFilter)null)"_s, $(d->listFiles(($FilenameFilter*)nullptr)));
	go("listFiles((FileFilter)null)"_s, $(d->listFiles(($FileFilter*)nullptr)));
}

ListNull::ListNull() {
}

$Class* ListNull::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ListNull, init$, void)},
		{"go", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(ListNull, go, void, $String*, $ObjectArray*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ListNull, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ListNull",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ListNull, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListNull);
	});
	return class$;
}

$Class* ListNull::class$ = nullptr;