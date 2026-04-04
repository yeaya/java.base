#include <FileMethods.h>
#include <FileMethods$1.h>
#include <FileMethods$2.h>
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FilenameFilter.h>
#include <jcpp.h>

using $FileMethods$1 = ::FileMethods$1;
using $FileMethods$2 = ::FileMethods$2;
using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileFilter = ::java::io::FileFilter;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FileMethods::init$() {
}

void FileMethods::ck($String* op, $File* got, $File* ans) {
	if (!$nc(got)->equals(ans)) {
		$throwNew($Exception, $$str({op, " incorrect"_s}));
	}
}

void FileMethods::ck($String* op, $File* f, $StringArray* ls, $FileArray* lf) {
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"--- "_s, op}));
	int32_t n = $nc(lf)->length;
	if ($nc(ls)->length != n) {
		$throwNew($Exception, "listFiles returned incorrect count"_s);
	}
	for (int32_t i = 0; i < n; ++i) {
		bool var$0 = $nc(ls->get(i))->equals($($nc(lf->get(i))->getName()));
		if (var$0 && $$nc($nc(lf->get(i))->getParentFile())->equals(f)) {
			$System::err->println($$str({ls->get(i), " ==> "_s, lf->get(i)}));
		} else {
			$throwNew($Exception, $$str({"list mismatch: "_s, ls->get(i), ", "_s, lf->get(i)}));
		}
	}
}

void FileMethods::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, f, nullptr);
	$assign(f, $new($File, "foo/bar"_s));
	$var($String, var$0, "getParentFile"_s);
	$var($File, var$1, f->getParentFile());
	ck(var$0, var$1, $$new($File, $(f->getParent())));
	$assign(f, $new($File, "."_s));
	$var($String, var$2, "getAbsoluteFile"_s);
	$var($File, var$3, f->getAbsoluteFile());
	ck(var$2, var$3, $$new($File, $(f->getAbsolutePath())));
	$var($String, var$4, "getCanonicalFile"_s);
	$var($File, var$5, f->getCanonicalFile());
	ck(var$4, var$5, $$new($File, $(f->getCanonicalPath())));
	$assign(f, f->getCanonicalFile());
	$var($String, var$6, "listFiles"_s);
	$var($StringArray, var$7, $nc(f)->list());
	ck(var$6, f, var$7, $(f->listFiles()));
	$var($FilenameFilter, ff, $new($FileMethods$1));
	$var($String, var$8, "listFiles/filtered"_s);
	$var($StringArray, var$9, f->list(ff));
	ck(var$8, f, var$9, $(f->listFiles(ff)));
	$var($FileFilter, ff2, $new($FileMethods$2));
	$var($String, var$10, "listFiles/filtered2"_s);
	$var($StringArray, var$11, f->list(ff));
	ck(var$10, f, var$11, $(f->listFiles(ff2)));
}

FileMethods::FileMethods() {
}

$Class* FileMethods::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileMethods, init$, void)},
		{"ck", "(Ljava/lang/String;Ljava/io/File;Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileMethods, ck, void, $String*, $File*, $File*), "java.lang.Exception"},
		{"ck", "(Ljava/lang/String;Ljava/io/File;[Ljava/lang/String;[Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileMethods, ck, void, $String*, $File*, $StringArray*, $FileArray*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileMethods, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileMethods$2", nullptr, nullptr, 0},
		{"FileMethods$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FileMethods",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FileMethods$2,FileMethods$1"
	};
	$loadClass(FileMethods, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileMethods);
	});
	return class$;
}

$Class* FileMethods::class$ = nullptr;