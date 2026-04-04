#include <Unicode4File.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t Unicode4File::fail$ = 0;

void Unicode4File::init$() {
}

void Unicode4File::fail($String* msg) {
	$init(Unicode4File);
	++Unicode4File::fail$;
	$nc($System::err)->println(msg);
}

bool Unicode4File::creat($File* f) {
	$init(Unicode4File);
	$useLocalObjectStack();
	try {
		$var($FileOutputStream, out, $new($FileOutputStream, f));
		out->write($$new($bytes, {
			(int8_t)u'a',
			(int8_t)u'b',
			(int8_t)u'c'
		}));
		out->close();
		return find(f);
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool Unicode4File::find($File* f) {
	$init(Unicode4File);
	$useLocalObjectStack();
	$var($String, fn, $nc(f)->getPath());
	$var($StringArray, fns, $$new($File, "."_s)->list());
	for (int32_t i = 0; i < $nc(fns)->length; ++i) {
		if ($nc(fns->get(i))->equals(fn)) {
			return true;
		}
	}
	return false;
}

void Unicode4File::sanityCheck($File* f) {
	$init(Unicode4File);
	if (!$nc(f)->exists()) {
		fail("! f.exists()"_s);
	}
	if (f->length() != 3) {
		fail("  f.length() != 3"_s);
	}
	if (f->isAbsolute()) {
		fail("  f.isAbsolute()"_s);
	}
	if (!f->canRead()) {
		fail("! f.canRead()"_s);
	}
	if (!f->canWrite()) {
		fail("! f.canWrite()"_s);
	}
	if (f->isHidden()) {
		fail("  f.isHidden()"_s);
	}
	if (!f->isFile()) {
		fail("! f.isFile()"_s);
	}
	if (f->isDirectory()) {
		fail("  f.isDirectory()"_s);
	}
}

void Unicode4File::main($StringArray* args) {
	$init(Unicode4File);
	$useLocalObjectStack();
	$var($File, f1, $new($File, u"Б.tst"_s));
	$var($File, f2, $new($File, u"В.tst"_s));
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		if (!creat(f1)) {
			return$1 = true;
			goto $finally;
		}
		$nc($System::out)->println("This system supports Unicode filenames!"_s);
		sanityCheck(f1);
		f1->renameTo(f2);
		sanityCheck(f2);
		if (!f2->delete$()) {
			fail("! f2.delete()"_s);
		}
		if (f2->exists()) {
			fail("  f2.exists()"_s);
		}
		if (f1->exists()) {
			fail("  f1.exists()"_s);
		}
		if (f1->delete$()) {
			fail("  f1.delete()"_s);
		}
		if (Unicode4File::fail$ != 0) {
			$throwNew($Exception, $$str({$$str(Unicode4File::fail$), " failures"_s}));
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		f1->delete$();
		f2->delete$();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

void Unicode4File::clinit$($Class* clazz) {
	Unicode4File::fail$ = 0;
}

Unicode4File::Unicode4File() {
}

$Class* Unicode4File::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fail", "I", nullptr, $STATIC, $staticField(Unicode4File, fail$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unicode4File, init$, void)},
		{"creat", "(Ljava/io/File;)Z", nullptr, $STATIC, $staticMethod(Unicode4File, creat, bool, $File*), "java.lang.Exception"},
		{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Unicode4File, fail, void, $String*)},
		{"find", "(Ljava/io/File;)Z", nullptr, $STATIC, $staticMethod(Unicode4File, find, bool, $File*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Unicode4File, main, void, $StringArray*), "java.lang.Exception"},
		{"sanityCheck", "(Ljava/io/File;)V", nullptr, $STATIC, $staticMethod(Unicode4File, sanityCheck, void, $File*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unicode4File",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Unicode4File, name, initialize, &classInfo$$, Unicode4File::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Unicode4File);
	});
	return class$;
}

$Class* Unicode4File::class$ = nullptr;