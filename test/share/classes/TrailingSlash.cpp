#include <TrailingSlash.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TrailingSlash_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(TrailingSlash, log)},
	{"failures", "I", nullptr, $STATIC, $staticField(TrailingSlash, failures)},
	{}
};

$MethodInfo _TrailingSlash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TrailingSlash::*)()>(&TrailingSlash::init$))},
	{"check", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,bool,bool)>(&TrailingSlash::check))},
	{"go", "(Ljava/lang/String;ZZZ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,bool,bool,bool)>(&TrailingSlash::go)), "java.io.IOException"},
	{"go", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&TrailingSlash::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TrailingSlash::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TrailingSlash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TrailingSlash",
	"java.lang.Object",
	nullptr,
	_TrailingSlash_FieldInfo_,
	_TrailingSlash_MethodInfo_
};

$Object* allocate$TrailingSlash($Class* clazz) {
	return $of($alloc(TrailingSlash));
}

$PrintStream* TrailingSlash::log = nullptr;
int32_t TrailingSlash::failures = 0;

void TrailingSlash::init$() {
}

void TrailingSlash::check($String* what, $String* fns, bool expected, bool threw) {
	$init(TrailingSlash);
	if (expected == threw) {
		$nc(TrailingSlash::log)->println($$str({"    FAIL: new "_s, what, "(\""_s, fns, "\") "_s, (expected ? "failed"_s : "succeeded"_s)}));
		++TrailingSlash::failures;
	}
}

void TrailingSlash::go($String* fns, bool fis, bool raf, bool fos) {
	$init(TrailingSlash);
	$useLocalCurrentObjectStackCache();
	bool threw = false;
	threw = false;
	try {
		$$new($FileInputStream, fns)->close();
		$nc(TrailingSlash::log)->println("    FileInputStream okay"_s);
	} catch ($IOException& x) {
		$nc(TrailingSlash::log)->println($$str({"    FileInputStream: "_s, x}));
		threw = true;
	}
	check("FileInputStream"_s, fns, fis, threw);
	threw = false;
	try {
		$$new($RandomAccessFile, fns, "r"_s)->close();
		$nc(TrailingSlash::log)->println("    RandomAccessFile okay"_s);
	} catch ($IOException& x) {
		$nc(TrailingSlash::log)->println($$str({"    RandomAccessFile: "_s, x}));
		threw = true;
	}
	check("RandomAccessFile"_s, fns, raf, threw);
	threw = false;
	try {
		$$new($FileOutputStream, fns)->close();
		$nc(TrailingSlash::log)->println("    FileOutputStream okay"_s);
	} catch ($IOException& x) {
		$nc(TrailingSlash::log)->println($$str({"    FileOutputStream: "_s, x}));
		threw = true;
	}
	check("FileOutputStream"_s, fns, fos, threw);
}

void TrailingSlash::go($String* fn, $String* fns) {
	$init(TrailingSlash);
	$useLocalCurrentObjectStackCache();
	$nc(TrailingSlash::log)->println($$str({"Test case: "_s, fns}));
	$var($File, f, $new($File, fn));
	f->delete$();
	if (f->exists()) {
		$throwNew($Exception, $$str({"Can\'t delete "_s, f}));
	}
	$nc(TrailingSlash::log)->println($$str({"  "_s, fn, " does not exist"_s}));
	go(fns, false, false, true);
	f->delete$();
	f->mkdir();
	$nc(TrailingSlash::log)->println($$str({"  "_s, fn, " is a directory"_s}));
	go(fns, false, false, false);
	f->delete$();
	f->createNewFile();
	$nc(TrailingSlash::log)->println($$str({"  "_s, fn, " is a file"_s}));
	go(fns, true, true, true);
}

void TrailingSlash::main($StringArray* args) {
	$init(TrailingSlash);
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar != u'/') {
		return;
	}
	go("xyzzy"_s, "xyzzy"_s);
	go("xyzzy"_s, "xyzzy/"_s);
	go("xyzzy"_s, "xyzzy//"_s);
	if (TrailingSlash::failures > 0) {
		$throwNew($Exception, $$str({$$str(TrailingSlash::failures), " failures"_s}));
	}
}

void clinit$TrailingSlash($Class* class$) {
	$assignStatic(TrailingSlash::log, $System::err);
	TrailingSlash::failures = 0;
}

TrailingSlash::TrailingSlash() {
}

$Class* TrailingSlash::load$($String* name, bool initialize) {
	$loadClass(TrailingSlash, name, initialize, &_TrailingSlash_ClassInfo_, clinit$TrailingSlash, allocate$TrailingSlash);
	return class$;
}

$Class* TrailingSlash::class$ = nullptr;