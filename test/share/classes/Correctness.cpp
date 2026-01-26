#include <Correctness.h>

#include <java/io/FilePermission.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Permission = ::java::security::Permission;

$FieldInfo _Correctness_FieldInfo_[] = {
	{"err", "Z", nullptr, $STATIC, $staticField(Correctness, err)},
	{"containsMethod", "Ljava/lang/reflect/Method;", nullptr, $STATIC, $staticField(Correctness, containsMethod)},
	{"isWindows", "Z", nullptr, $STATIC, $staticField(Correctness, isWindows)},
	{}
};

$MethodInfo _Correctness_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Correctness, init$, void)},
	{"check", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $STATIC, $staticMethod(Correctness, check, void, $String*, $String*, bool)},
	{"check", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Correctness, check, void, $String*, $String*)},
	{"check0", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $STATIC, $staticMethod(Correctness, check0, void, $String*, $String*, bool)},
	{"checkNo", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Correctness, checkNo, void, $String*, $String*)},
	{"contains", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(Correctness, contains, void, $String*, $String*, int32_t), "java.lang.Exception"},
	{"contains0", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(Correctness, contains0, void, $String*, $String*, int32_t), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Correctness, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Correctness_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Correctness",
	"java.lang.Object",
	nullptr,
	_Correctness_FieldInfo_,
	_Correctness_MethodInfo_
};

$Object* allocate$Correctness($Class* clazz) {
	return $of($alloc(Correctness));
}

bool Correctness::err = false;
$Method* Correctness::containsMethod = nullptr;
bool Correctness::isWindows = false;

void Correctness::init$() {
}

void Correctness::main($StringArray* args) {
	$init(Correctness);
	$beforeCallerSensitive();
	check("/"_s, "/"_s);
	checkNo("/"_s, "/x"_s);
	checkNo("/"_s, "/../x"_s);
	checkNo("/"_s, "x"_s);
	check("/-"_s, "/*"_s);
	checkNo("/*"_s, "/-"_s);
	check("/*"_s, "/x"_s);
	check("/-"_s, "/x"_s);
	check("/-"_s, "/x/*"_s);
	check("/-"_s, "/x/-"_s);
	check("/-"_s, "/x/y"_s);
	checkNo("/*"_s, "/x/y"_s);
	check("/x/*"_s, "/x/x"_s);
	checkNo("/x/-"_s, "/x"_s);
	checkNo("/x/*"_s, "/x"_s);
	check("/x/-"_s, "/x/x"_s);
	check("/x/-"_s, "/x/x/y"_s);
	checkNo("/x/*"_s, "/x/x/y"_s);
	checkNo("/x/*"_s, "/x"_s);
	check("*"_s, "x"_s);
	checkNo(""_s, "x"_s);
	check("-"_s, "x"_s);
	check("-"_s, "*"_s);
	check("-"_s, "a/-"_s);
	check("-"_s, "a/*"_s);
	checkNo("*"_s, "a/b"_s);
	check("a/*"_s, "a/b"_s);
	check("a/-"_s, "a/*"_s);
	check("a/-"_s, "a/b/c"_s);
	checkNo("a/*"_s, "a/b/c"_s);
	check("../"_s, "../"_s);
	check("../-"_s, "../*"_s);
	check("../../*"_s, "../../a"_s);
	check("../-"_s, "a"_s);
	check("../../-"_s, "-"_s);
	checkNo("../../*"_s, "a"_s);
	try {
		$load($FilePermission);
		$load($Path);
		$assignStatic(Correctness::containsMethod, $FilePermission::class$->getDeclaredMethod("containsPath"_s, $$new($ClassArray, {
			$Path::class$,
			$Path::class$
		})));
		$nc(Correctness::containsMethod)->setAccessible(true);
		$nc($System::out)->println();
		contains("x"_s, "x"_s, 0);
		contains("x"_s, "x/y"_s, 1);
		contains("x"_s, "x/y/z"_s, 2);
		contains("x"_s, "y"_s, -1);
		contains("x"_s, ""_s, -1);
		contains(""_s, ""_s, 0);
		contains(""_s, "x"_s, 1);
		contains(""_s, "x/y"_s, 2);
		contains("/"_s, "/"_s, 0);
		contains("/"_s, "/x"_s, 1);
		contains("/"_s, "/x/y"_s, 2);
		contains("/x"_s, "/x/y"_s, 1);
		contains("/x"_s, "/y"_s, -1);
		contains("/x"_s, "y"_s, -1);
		contains("x"_s, "/y"_s, -1);
		contains(""_s, ".."_s, -1);
		contains(""_s, "../x"_s, -1);
		contains(".."_s, ""_s, 1);
		contains(".."_s, "x"_s, 2);
		contains(".."_s, "x/y"_s, 3);
		contains("../x"_s, "x"_s, -1);
		contains("../x"_s, "y"_s, -1);
		contains("../x"_s, "../x/y"_s, 1);
		contains("../../x"_s, "../../x/y"_s, 1);
		contains("../../../x"_s, "../../../x/y"_s, 1);
		contains("../x"_s, "../y"_s, -1);
	} catch ($NoSuchMethodException& e) {
	}
	if (Correctness::err) {
		$throwNew($Exception, "Failed."_s);
	}
}

void Correctness::contains($String* s1, $String* s2, int32_t expected) {
	$init(Correctness);
	$useLocalCurrentObjectStackCache();
	contains0(s1, s2, expected);
	if (Correctness::isWindows) {
		contains0($$str({"C:"_s, s1}), s2, -1);
		contains0(s1, $$str({"C:"_s, s2}), -1);
		contains0($$str({"C:"_s, s1}), $$str({"D:"_s, s2}), -1);
		contains0($$str({"C:"_s, s1}), $$str({"C:"_s, s2}), expected);
	}
}

void Correctness::contains0($String* s1, $String* s2, int32_t expected) {
	$init(Correctness);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Path, p1, $Paths::get(s1, $$new($StringArray, 0)));
	$var($Path, p2, $Paths::get(s2, $$new($StringArray, 0)));
	int32_t d = $nc(($cast($Integer, $($nc(Correctness::containsMethod)->invoke(nullptr, $$new($ObjectArray, {
		$of(p1),
		$of(p2)
	}))))))->intValue();
	$var($Path, p, nullptr);
	try {
		$assign(p, $nc(p2)->relativize(p1));
	} catch ($Exception& e) {
		$assign(p, nullptr);
	}
	$nc($System::out)->printf("%-20s -> %-20s: %20s %5d %5d %s\n"_s, $$new($ObjectArray, {
		$of(s1),
		$of(s2),
		$of(p),
		$($of($Integer::valueOf(d))),
		$($of($Integer::valueOf(expected))),
		d == expected ? $of(""_s) : $of(" WRONG"_s)
	}));
	if (d != expected) {
		Correctness::err = true;
	}
}

void Correctness::check0($String* s1, $String* s2, bool expected) {
	$init(Correctness);
	$useLocalCurrentObjectStackCache();
	$var($FilePermission, fp1, $new($FilePermission, s1, "read"_s));
	$var($FilePermission, fp2, $new($FilePermission, s2, "read"_s));
	bool b = fp1->implies(fp2);
	$nc($System::out)->printf("%-30s -> %-30s: %5b %s\n"_s, $$new($ObjectArray, {
		$of(s1),
		$of(s2),
		$($of($Boolean::valueOf(b))),
		b == expected ? $of(""_s) : $of(" WRONG"_s)
	}));
	if (b != expected) {
		Correctness::err = true;
		$nc($System::out)->println($of(fp1));
		$nc($System::out)->println($of(fp2));
	}
}

void Correctness::check($String* s1, $String* s2, bool expected) {
	$init(Correctness);
	$useLocalCurrentObjectStackCache();
	check0(s1, s2, expected);
	if (Correctness::isWindows) {
		check0($$str({"C:"_s, s1}), s2, false);
		check0(s1, $$str({"C:"_s, s2}), false);
		check0($$str({"C:"_s, s1}), $$str({"D:"_s, s2}), false);
		check0($$str({"C:"_s, s1}), $$str({"C:"_s, s2}), expected);
	}
}

void Correctness::check($String* s1, $String* s2) {
	$init(Correctness);
	check(s1, s2, true);
}

void Correctness::checkNo($String* s1, $String* s2) {
	$init(Correctness);
	check(s1, s2, false);
}

void clinit$Correctness($Class* class$) {
	Correctness::err = false;
	Correctness::isWindows = $nc($($System::getProperty("os.name"_s)))->contains("Windows"_s);
}

Correctness::Correctness() {
}

$Class* Correctness::load$($String* name, bool initialize) {
	$loadClass(Correctness, name, initialize, &_Correctness_ClassInfo_, clinit$Correctness, allocate$Correctness);
	return class$;
}

$Class* Correctness::class$ = nullptr;