#include <Cons.h>

#include <Cons$F.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $Cons$F = ::Cons$F;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

$FieldInfo _Cons_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, debug)},
	{"old", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, old)},
	{"win32", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, win32)},
	{}
};

$MethodInfo _Cons_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Cons::*)()>(&Cons::init$))},
	{"ck", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Cons::ck)), "java.lang.Exception"},
	{"ck1", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*,$String*)>(&Cons::ck1)), "java.lang.Exception"},
	{"ck2", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*,$String*,$String*)>(&Cons::ck2)), "java.lang.Exception"},
	{"ck2f", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*,$String*,$String*)>(&Cons::ck2f)), "java.lang.Exception"},
	{"ckpnp", "(LCons$F;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Cons$F*,$String*,$String*,$String*)>(&Cons::ckpnp)), "java.lang.Exception"},
	{"cons", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Cons::cons))},
	{"cons", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Cons::cons))},
	{"cons", "(LCons$F;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Cons$F*,$String*)>(&Cons::cons))},
	{"cvt", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Cons::cvt))},
	{"err", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Cons::err)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Cons::main)), "java.lang.Exception"},
	{"nos", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Cons::nos))},
	{"ok", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Cons::ok))},
	{"op", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Cons::op))},
	{"slashPerms", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&Cons::slashPerms))},
	{"testBoth", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Cons::testBoth)), "java.lang.Exception"},
	{"testUnix", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Cons::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Cons::testWin32)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Cons_InnerClassesInfo_[] = {
	{"Cons$F", "Cons", "F", $STATIC},
	{}
};

$ClassInfo _Cons_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Cons",
	"java.lang.Object",
	nullptr,
	_Cons_FieldInfo_,
	_Cons_MethodInfo_,
	nullptr,
	nullptr,
	_Cons_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Cons$F"
};

$Object* allocate$Cons($Class* clazz) {
	return $of($alloc(Cons));
}

bool Cons::debug = false;
bool Cons::old = false;
bool Cons::win32 = false;

void Cons::init$() {
}

$String* Cons::cvt($String* s) {
	$init(Cons);
	if (s == nullptr) {
		return s;
	}
	if (Cons::win32) {
		return $nc(s)->replace(u'/', u'\\');
	}
	return s;
}

$StringArray* Cons::slashPerms($String* s) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	if (!Cons::win32) {
		return $new($StringArray, {s});
	}
	if (s == nullptr) {
		return $new($StringArray, {s});
	}
	int32_t i = $nc(s)->indexOf((int32_t)u'/');
	if (i < 0) {
		return $new($StringArray, {s});
	}
	$var($ArrayList, a, $new($ArrayList));
	$var($String, p1, s->substring(0, i));
	$var($StringArray, p2, slashPerms($(s->substring(i + 1))));
	for (int32_t j = 0; j < $nc(p2)->length; ++j) {
		a->add($$str({p1, $$str(u'/'), p2->get(j)}));
	}
	for (int32_t j = 0; j < $nc(p2)->length; ++j) {
		a->add($$str({p1, $$str(u'\\'), p2->get(j)}));
	}
	return ($fcast($StringArray, a->toArray($$new($StringArray, a->size()))));
}

$String* Cons::nos($String* s) {
	$init(Cons);
	if (s == nullptr) {
		return "null"_s;
	} else {
		return $str({"\""_s, s, "\""_s});
	}
}

void Cons::ok($String* ans, $String* exp) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({$(nos(ans)), " <== "_s, exp}));
}

void Cons::err($String* ans, $String* exp, $String* got) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(nos(ans)), " <-- "_s, exp, " ==> "_s}));
	$nc($System::err)->println($$concat(var$0, $(nos(got))));
	if (!Cons::debug) {
		$var($String, var$1, $$str({"Mismatch: "_s, exp, " ==> "_s, $(nos(got)), ", should be "_s}));
		$throwNew($Exception, $$concat(var$1, $(nos(ans))));
	}
}

void Cons::ck($String* ans, $String* exp, $String* got) {
	$init(Cons);
	if ((got == ans) || ((got != nullptr) && got->equals(ans))) {
		ok(ans, exp);
	} else {
		err(ans, exp, got);
	}
}

$String* Cons::cons($String* arg) {
	$init(Cons);
	return $str({"new File("_s, $(nos(arg)), ")"_s});
}

$String* Cons::cons($String* arg1, $String* arg2) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"new File("_s, $(nos(arg1)), ", "_s}));
	$var($String, var$0, $$concat(var$1, $(nos(arg2))));
	return $concat(var$0, ")");
}

$String* Cons::cons($Cons$F* arg1, $String* arg2) {
	$init(Cons);
	return $str({"new File("_s, $nc(arg1)->exp, ", "_s, $(nos(arg2)), ")"_s});
}

$String* Cons::op($String* exp, $String* opname) {
	$init(Cons);
	return $str({exp, "."_s, opname, "()"_s});
}

void Cons::ckpnp($Cons$F* f, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, cvt(path));
	$var($String, var$1, op($nc(f)->exp, "getPath"_s));
	ck(var$0, var$1, $($nc(f)->getPath()));
	$var($String, var$2, cvt(parent));
	$var($String, var$3, op($nc(f)->exp, "getParent"_s));
	ck(var$2, var$3, $($nc(f)->getParent()));
	$var($String, var$4, cvt(name));
	$var($String, var$5, op($nc(f)->exp, "getName"_s));
	ck(var$4, var$5, $($nc(f)->getName()));
}

void Cons::ck1($String* arg, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, parg, slashPerms(arg));
	for (int32_t i = 0; i < $nc(parg)->length; ++i) {
		ckpnp($$new($Cons$F, parg->get(i)), parent, name, path);
	}
}

void Cons::ck2($String* arg1, $String* arg2, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, parg1, slashPerms(arg1));
	$var($StringArray, parg2, slashPerms(arg2));
	for (int32_t i = 0; i < $nc(parg1)->length; ++i) {
		for (int32_t j = 0; j < $nc(parg2)->length; ++j) {
			ckpnp($$new($Cons$F, parg1->get(i), parg2->get(j)), parent, name, path);
		}
	}
}

void Cons::ck2f($String* arg1, $String* arg2, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, parg1, slashPerms(arg1));
	$var($StringArray, parg2, slashPerms(arg2));
	for (int32_t i = 0; i < $nc(parg1)->length; ++i) {
		for (int32_t j = 0; j < $nc(parg2)->length; ++j) {
			$var($Cons$F, p, (parg1->get(i) == nullptr) ? ($Cons$F*)nullptr : $new($Cons$F, parg1->get(i)));
			ckpnp($$new($Cons$F, p, parg2->get(j)), parent, name, path);
		}
	}
}

void Cons::testBoth() {
	$init(Cons);
	ck1(""_s, nullptr, ""_s, ""_s);
	ck2(nullptr, ""_s, nullptr, ""_s, ""_s);
	ck2(""_s, ""_s, nullptr, ""_s, "/"_s);
	ck2f(""_s, ""_s, nullptr, ""_s, "/"_s);
	if (!Cons::old) {
		ck2f(nullptr, ""_s, nullptr, ""_s, ""_s);
	}
	ck1("/"_s, nullptr, ""_s, "/"_s);
	ck2f("/"_s, ""_s, nullptr, ""_s, "/"_s);
	ck1("foo"_s, nullptr, "foo"_s, "foo"_s);
	ck1("/foo"_s, "/"_s, "foo"_s, "/foo"_s);
	ck1("/foo/bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	ck1("foo/bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	if (!Cons::old) {
		ck1("foo/"_s, nullptr, "foo"_s, "foo"_s);
		ck1("/foo/"_s, "/"_s, "foo"_s, "/foo"_s);
		ck1("/foo//"_s, "/"_s, "foo"_s, "/foo"_s);
		ck1("/foo///"_s, "/"_s, "foo"_s, "/foo"_s);
		ck1("/foo//bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck1("/foo/bar//"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck1("foo//bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck1("foo/bar/"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck1("foo/bar//"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	}
	ck2("foo"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	ck2("foo/"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	ck2("/foo"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	ck2("/foo/"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	if (!Cons::old) {
		ck2("foo//"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2("foo"_s, "bar/"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2("foo"_s, "bar//"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2("/foo//"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2("/foo"_s, "bar/"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2("/foo"_s, "bar//"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2("foo"_s, "/bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2("foo"_s, "//bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2("/"_s, "bar"_s, "/"_s, "bar"_s, "/bar"_s);
		ck2("/"_s, "/bar"_s, "/"_s, "bar"_s, "/bar"_s);
	}
	ck2f("foo"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	ck2f("foo/"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	ck2f("/foo"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	ck2f("/foo/"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	if (!Cons::old) {
		ck2f("foo//"_s, "bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2f("foo"_s, "bar/"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2f("foo"_s, "bar//"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2f("/foo//"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2f("/foo"_s, "bar/"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2f("/foo"_s, "bar//"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
		ck2f("foo"_s, "/bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
		ck2f("foo"_s, "//bar"_s, "foo"_s, "bar"_s, "foo/bar"_s);
	}
}

void Cons::testUnix() {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	if (!Cons::old) {
		ck1("//"_s, nullptr, ""_s, "/"_s);
	}
	if (!Cons::old) {
		ck1("//foo"_s, "/"_s, "foo"_s, "/foo"_s);
		ck1("///foo"_s, "/"_s, "foo"_s, "/foo"_s);
		ck1("//foo/bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	}
	if (!Cons::old) {
		ck2("//foo"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	}
	if (!Cons::old) {
		ck2f("//foo"_s, "bar"_s, "/foo"_s, "bar"_s, "/foo/bar"_s);
	}
	$var($File, f, $new($File, "/foo"_s));
	if (!f->isAbsolute()) {
		$throwNew($Exception, $$str({f, " should be absolute"_s}));
	}
	$assign(f, $new($File, "foo"_s));
	if (f->isAbsolute()) {
		$throwNew($Exception, $$str({f, " should not be absolute"_s}));
	}
}

void Cons::testWin32() {
	$init(Cons);
	if (!Cons::old) {
		ck1("//"_s, nullptr, ""_s, "//"_s);
		ck1("//foo"_s, "//"_s, "foo"_s, "//foo"_s);
		ck1("///foo"_s, "//"_s, "foo"_s, "//foo"_s);
		ck1("//foo/bar"_s, "//foo"_s, "bar"_s, "//foo/bar"_s);
		ck1("z:"_s, nullptr, ""_s, "z:"_s);
		ck1("z:/"_s, nullptr, ""_s, "z:/"_s);
		ck1("z://"_s, nullptr, ""_s, "z:/"_s);
		ck1("z:/foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck1("z:/foo/"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck1("/z:/foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck1("//z:/foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck1("z:/foo/bar"_s, "z:/foo"_s, "bar"_s, "z:/foo/bar"_s);
		ck1("z:foo"_s, "z:"_s, "foo"_s, "z:foo"_s);
		ck2("z:"_s, "/"_s, nullptr, ""_s, "z:/"_s);
		ck2("z:"_s, "/foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("z:/"_s, "foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("z://"_s, "foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("z:/"_s, "/foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("z:/"_s, "//foo"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("z:/"_s, "foo/"_s, "z:/"_s, "foo"_s, "z:/foo"_s);
		ck2("//foo"_s, "bar"_s, "//foo"_s, "bar"_s, "//foo/bar"_s);
		ck2f("//foo"_s, "bar"_s, "//foo"_s, "bar"_s, "//foo/bar"_s);
	}
}

void Cons::main($StringArray* args) {
	$init(Cons);
	$useLocalCurrentObjectStackCache();
	Cons::old = $nc($($$new($File, "foo/"_s)->getPath()))->equals("foo/"_s);
	if (Cons::old) {
		$nc($System::err)->println("** Testing old java.io.File class"_s);
	}
	testBoth();
	if (Cons::win32) {
		testWin32();
	} else {
		testUnix();
	}
}

void clinit$Cons($Class* class$) {
	Cons::debug = false;
	Cons::old = false;
	$init($File);
	Cons::win32 = ($File::separatorChar == u'\\');
}

Cons::Cons() {
}

$Class* Cons::load$($String* name, bool initialize) {
	$loadClass(Cons, name, initialize, &_Cons_ClassInfo_, clinit$Cons, allocate$Cons);
	return class$;
}

$Class* Cons::class$ = nullptr;