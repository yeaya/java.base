#include <GetAbsolutePath.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

bool GetAbsolutePath::ignoreCase = false;

void GetAbsolutePath::init$() {
}

void GetAbsolutePath::ck($String* path, $String* ans) {
	$init(GetAbsolutePath);
	$useLocalObjectStack();
	$var($File, f, $new($File, path));
	$var($String, p, f->getAbsolutePath());
	bool var$0 = GetAbsolutePath::ignoreCase && $nc(p)->equalsIgnoreCase(ans);
	if (var$0 || $nc(p)->equals(ans)) {
		$nc($System::err)->println($$str({path, " ==> "_s, p}));
	} else {
		$throwNew($Exception, $$str({path, ": expected "_s, ans, ", got "_s, p}));
	}
}

void GetAbsolutePath::testWin32() {
	$init(GetAbsolutePath);
	$useLocalObjectStack();
	$var($String, wd, $System::getProperty("user.dir"_s));
	char16_t d = 0;
	bool var$1 = $nc(wd)->length() > 2;
	bool var$0 = var$1 && (wd->charAt(1) == u':');
	if (var$0 && (wd->charAt(2) == u'\\')) {
		d = wd->charAt(0);
	} else {
		$throwNew($Exception, "Current directory has no drive"_s);
	}
	ck("/foo/bar"_s, $$str({$$str(d), ":\\foo\\bar"_s}));
	ck("\\foo\\bar"_s, $$str({$$str(d), ":\\foo\\bar"_s}));
	ck("c:\\foo\\bar"_s, "c:\\foo\\bar"_s);
	ck("c:/foo/bar"_s, "c:\\foo\\bar"_s);
	ck("\\\\foo\\bar"_s, "\\\\foo\\bar"_s);
	d = $Character::toLowerCase(d);
	char16_t z = 0;
	if (d != u'c') {
		z = u'c';
	} else if (d != u'd') {
		z = u'd';
	}
	if (z != 0) {
		$var($File, f, $new($File, $$str({$$str(z), ":."_s})));
		if (f->exists()) {
			$var($String, zwd, f->getCanonicalPath());
			ck($$str({$$str(z), ":foo"_s}), $$str({zwd, "\\foo"_s}));
		}
	}
	ck(""_s, wd);
}

void GetAbsolutePath::testUnix() {
	$init(GetAbsolutePath);
	$useLocalObjectStack();
	$var($String, wd, $System::getProperty("user.dir"_s));
	ck("foo"_s, $$str({wd, "/foo"_s}));
	ck("foo/bar"_s, $$str({wd, "/foo/bar"_s}));
	ck("/foo"_s, "/foo"_s);
	ck("/foo/bar"_s, "/foo/bar"_s);
	ck(""_s, wd);
}

void GetAbsolutePath::main($StringArray* args) {
	$init(GetAbsolutePath);
	$init($File);
	if ($File::separatorChar == u'\\') {
		GetAbsolutePath::ignoreCase = true;
		testWin32();
	}
	if ($File::separatorChar == u'/') {
		testUnix();
	}
}

void GetAbsolutePath::clinit$($Class* clazz) {
	GetAbsolutePath::ignoreCase = false;
}

GetAbsolutePath::GetAbsolutePath() {
}

$Class* GetAbsolutePath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ignoreCase", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GetAbsolutePath, ignoreCase)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetAbsolutePath, init$, void)},
		{"ck", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAbsolutePath, ck, void, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAbsolutePath, main, void, $StringArray*), "java.lang.Exception"},
		{"testUnix", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAbsolutePath, testUnix, void), "java.lang.Exception"},
		{"testWin32", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAbsolutePath, testWin32, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAbsolutePath",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetAbsolutePath, name, initialize, &classInfo$$, GetAbsolutePath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetAbsolutePath);
	});
	return class$;
}

$Class* GetAbsolutePath::class$ = nullptr;