#include <DriveRelativePath.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void DriveRelativePath::init$() {
}

void DriveRelativePath::fail($String* s) {
	$throwNew($RuntimeException, s);
}

void DriveRelativePath::main($StringArray* args) {
	$useLocalObjectStack();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($File, f, $new($File, "foo"_s));
	$var($String, c, f->getCanonicalPath());
	$nc($System::err)->println(c);
	int32_t di = $nc(c)->indexOf(u':');
	if (di == -1) {
		fail("No drive in canonical path"_s);
	}
	$var($String, drive, c->substring(0, di + 1));
	$var($File, f2, $new($File, $$str({drive, "foo"_s})));
	$System::err->println(f2);
	$var($String, c2, f2->getCanonicalPath());
	$System::err->println(c2);
	if (!$nc(c2)->equals(c)) {
		fail($$str({"Canonical path mismatch: \""_s, f2, "\" maps to \""_s, c2, "\"; it should map to \""_s, c, "\""_s}));
	}
}

DriveRelativePath::DriveRelativePath() {
}

$Class* DriveRelativePath::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DriveRelativePath, init$, void)},
		{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(DriveRelativePath, fail, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DriveRelativePath, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DriveRelativePath",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DriveRelativePath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriveRelativePath);
	});
	return class$;
}

$Class* DriveRelativePath::class$ = nullptr;