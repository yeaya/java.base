#include <Unicode4File.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Unicode4File_FieldInfo_[] = {
	{"fail", "I", nullptr, $STATIC, $staticField(Unicode4File, fail$)},
	{}
};

$MethodInfo _Unicode4File_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unicode4File::*)()>(&Unicode4File::init$))},
	{"creat", "(Ljava/io/File;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($File*)>(&Unicode4File::creat)), "java.lang.Exception"},
	{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&Unicode4File::fail))},
	{"find", "(Ljava/io/File;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($File*)>(&Unicode4File::find)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Unicode4File::main)), "java.lang.Exception"},
	{"sanityCheck", "(Ljava/io/File;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*)>(&Unicode4File::sanityCheck)), "java.lang.Exception"},
	{}
};

$ClassInfo _Unicode4File_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unicode4File",
	"java.lang.Object",
	nullptr,
	_Unicode4File_FieldInfo_,
	_Unicode4File_MethodInfo_
};

$Object* allocate$Unicode4File($Class* clazz) {
	return $of($alloc(Unicode4File));
}

int32_t Unicode4File::fail$ = 0;

void Unicode4File::init$() {
}

void Unicode4File::fail($String* msg) {
	$init(Unicode4File);
	++Unicode4File::fail$;
	$init($System);
	$nc($System::err)->println(msg);
}

bool Unicode4File::creat($File* f) {
	$init(Unicode4File);
	$useLocalCurrentObjectStackCache();
	try {
		$var($FileOutputStream, out, $new($FileOutputStream, f));
		out->write($$new($bytes, {
			(int8_t)u'a',
			(int8_t)u'b',
			(int8_t)u'c'
		}));
		out->close();
		return find(f);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Unicode4File::find($File* f) {
	$init(Unicode4File);
	$useLocalCurrentObjectStackCache();
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
	if ($nc(f)->length() != 3) {
		fail("  f.length() != 3"_s);
	}
	if ($nc(f)->isAbsolute()) {
		fail("  f.isAbsolute()"_s);
	}
	if (!$nc(f)->canRead()) {
		fail("! f.canRead()"_s);
	}
	if (!$nc(f)->canWrite()) {
		fail("! f.canWrite()"_s);
	}
	if ($nc(f)->isHidden()) {
		fail("  f.isHidden()"_s);
	}
	if (!$nc(f)->isFile()) {
		fail("! f.isFile()"_s);
	}
	if ($nc(f)->isDirectory()) {
		fail("  f.isDirectory()"_s);
	}
}

void Unicode4File::main($StringArray* args) {
	$init(Unicode4File);
	$useLocalCurrentObjectStackCache();
	$var($File, f1, $new($File, u"\u0411.tst"_s));
	$var($File, f2, $new($File, u"\u0412.tst"_s));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!creat(f1)) {
				return$1 = true;
				goto $finally;
			}
			$init($System);
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
}

void clinit$Unicode4File($Class* class$) {
	Unicode4File::fail$ = 0;
}

Unicode4File::Unicode4File() {
}

$Class* Unicode4File::load$($String* name, bool initialize) {
	$loadClass(Unicode4File, name, initialize, &_Unicode4File_ClassInfo_, clinit$Unicode4File, allocate$Unicode4File);
	return class$;
}

$Class* Unicode4File::class$ = nullptr;