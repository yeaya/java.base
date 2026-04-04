#include <Cons.h>
#include <Cons$F.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $Cons$F = ::Cons$F;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

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
	$useLocalObjectStack();
	if (!Cons::win32) {
		return $new($StringArray, {s});
	}
	if (s == nullptr) {
		return $new($StringArray, {s});
	}
	int32_t i = $nc(s)->indexOf(u'/');
	if (i < 0) {
		return $new($StringArray, {s});
	}
	$var($ArrayList, a, $new($ArrayList));
	$var($String, p1, s->substring(0, i));
	$var($StringArray, p2, slashPerms($(s->substring(i + 1))));
	for (int32_t j = 0; j < $nc(p2)->length; ++j) {
		a->add($$str({p1, $$str(u'/'), p2->get(j)}));
	}
	for (int32_t j = 0; j < p2->length; ++j) {
		a->add($$str({p1, $$str(u'\\'), p2->get(j)}));
	}
	return $cast($StringArray, a->toArray($$new($StringArray, a->size())));
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
	$useLocalObjectStack();
	$nc($System::err)->println($$str({$(nos(ans)), " <== "_s, exp}));
}

void Cons::err($String* ans, $String* exp, $String* got) {
	$init(Cons);
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(nos(ans)));
	var$0->append(" <-- "_s);
	var$0->append(exp);
	var$0->append(" ==> "_s);
	var$0->append($(nos(got)));
	$nc($System::err)->println($$str(var$0));
	if (!Cons::debug) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Mismatch: "_s);
		var$1->append(exp);
		var$1->append(" ==> "_s);
		var$1->append($(nos(got)));
		var$1->append(", should be "_s);
		var$1->append($(nos(ans)));
		$throwNew($Exception, $$str(var$1));
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("new File("_s);
	var$0->append($(nos(arg1)));
	var$0->append(", "_s);
	var$0->append($(nos(arg2)));
	var$0->append(")"_s);
	return $str(var$0);
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
	$useLocalObjectStack();
	$var($String, var$0, cvt(path));
	$var($String, var$1, op($nc(f)->exp, "getPath"_s));
	ck(var$0, var$1, $(f->getPath()));
	$var($String, var$2, cvt(parent));
	$var($String, var$3, op(f->exp, "getParent"_s));
	ck(var$2, var$3, $(f->getParent()));
	$var($String, var$4, cvt(name));
	$var($String, var$5, op(f->exp, "getName"_s));
	ck(var$4, var$5, $(f->getName()));
}

void Cons::ck1($String* arg, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalObjectStack();
	$var($StringArray, parg, slashPerms(arg));
	for (int32_t i = 0; i < $nc(parg)->length; ++i) {
		ckpnp($$new($Cons$F, parg->get(i)), parent, name, path);
	}
}

void Cons::ck2($String* arg1, $String* arg2, $String* parent, $String* name, $String* path) {
	$init(Cons);
	$useLocalObjectStack();
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	Cons::old = $$nc($$new($File, "foo/"_s)->getPath())->equals("foo/"_s);
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

void Cons::clinit$($Class* clazz) {
	Cons::debug = false;
	Cons::old = false;
	$init($File);
	Cons::win32 = ($File::separatorChar == u'\\');
}

Cons::Cons() {
}

$Class* Cons::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, debug)},
		{"old", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, old)},
		{"win32", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Cons, win32)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Cons, init$, void)},
		{"ck", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ck, void, $String*, $String*, $String*), "java.lang.Exception"},
		{"ck1", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ck1, void, $String*, $String*, $String*, $String*), "java.lang.Exception"},
		{"ck2", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ck2, void, $String*, $String*, $String*, $String*, $String*), "java.lang.Exception"},
		{"ck2f", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ck2f, void, $String*, $String*, $String*, $String*, $String*), "java.lang.Exception"},
		{"ckpnp", "(LCons$F;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ckpnp, void, $Cons$F*, $String*, $String*, $String*), "java.lang.Exception"},
		{"cons", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, cons, $String*, $String*)},
		{"cons", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, cons, $String*, $String*, $String*)},
		{"cons", "(LCons$F;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, cons, $String*, $Cons$F*, $String*)},
		{"cvt", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, cvt, $String*, $String*)},
		{"err", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, err, void, $String*, $String*, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Cons, main, void, $StringArray*), "java.lang.Exception"},
		{"nos", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, nos, $String*, $String*)},
		{"ok", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, ok, void, $String*, $String*)},
		{"op", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, op, $String*, $String*, $String*)},
		{"slashPerms", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Cons, slashPerms, $StringArray*, $String*)},
		{"testBoth", "()V", nullptr, $STATIC, $staticMethod(Cons, testBoth, void), "java.lang.Exception"},
		{"testUnix", "()V", nullptr, $STATIC, $staticMethod(Cons, testUnix, void), "java.lang.Exception"},
		{"testWin32", "()V", nullptr, $STATIC, $staticMethod(Cons, testWin32, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Cons$F", "Cons", "F", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Cons",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Cons$F"
	};
	$loadClass(Cons, name, initialize, &classInfo$$, Cons::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Cons);
	});
	return class$;
}

$Class* Cons::class$ = nullptr;