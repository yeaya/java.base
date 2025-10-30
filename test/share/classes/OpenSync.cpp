#include <OpenSync.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _OpenSync_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(OpenSync, log)},
	{}
};

$MethodInfo _OpenSync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OpenSync::*)()>(&OpenSync::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OpenSync::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _OpenSync_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpenSync",
	"java.lang.Object",
	nullptr,
	_OpenSync_FieldInfo_,
	_OpenSync_MethodInfo_
};

$Object* allocate$OpenSync($Class* clazz) {
	return $of($alloc(OpenSync));
}

$PrintStream* OpenSync::log = nullptr;

void OpenSync::init$() {
}

void OpenSync::main($StringArray* args) {
	$init(OpenSync);
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("OpenSync"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($StringArray, badModes, $new($StringArray, {
		"d"_s,
		"s"_s,
		"rd"_s,
		"rs"_s,
		"rwx"_s,
		"foo"_s
	}));
	for (int32_t i = 0; i < badModes->length; ++i) {
		$var($String, mode, badModes->get(i));
		try {
			$new($RandomAccessFile, blah, mode);
		} catch ($IllegalArgumentException& x) {
			$nc(OpenSync::log)->println($$str({"Mode \""_s, mode, "\": Thrown as expected: "_s, $($of(x)->getClass()->getName())}));
			$nc(OpenSync::log)->println($$str({"  "_s, $(x->getMessage())}));
			continue;
		}
		$throwNew($Exception, $$str({"Exception not thrown for illegal mode "_s, mode}));
	}
	$$new($RandomAccessFile, blah, "rw"_s)->close();
	$$new($RandomAccessFile, blah, "r"_s)->close();
	$var($String, hi, "Hello, world!"_s);
	$var($RandomAccessFile, raf, $new($RandomAccessFile, blah, "rws"_s));
	raf->writeUTF(hi);
	raf->close();
	$assign(raf, $new($RandomAccessFile, blah, "rwd"_s));
	if (!$nc($(raf->readUTF()))->equals(hi)) {
		$throwNew($Exception, "File content mismatch"_s);
	}
	raf->close();
}

void clinit$OpenSync($Class* class$) {
	$assignStatic(OpenSync::log, $System::err);
}

OpenSync::OpenSync() {
}

$Class* OpenSync::load$($String* name, bool initialize) {
	$loadClass(OpenSync, name, initialize, &_OpenSync_ClassInfo_, clinit$OpenSync, allocate$OpenSync);
	return class$;
}

$Class* OpenSync::class$ = nullptr;