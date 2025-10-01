#include <DeleteOnExit.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$FieldInfo _DeleteOnExit_FieldInfo_[] = {
	{"tmpdir", "Ljava/lang/String;", nullptr, $STATIC, $staticField(DeleteOnExit, tmpdir)},
	{"java", "Ljava/lang/String;", nullptr, $STATIC, $staticField(DeleteOnExit, java)},
	{"file1", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file1)},
	{"file2", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file2)},
	{"file3", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file3)},
	{"dir", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, dir)},
	{"file4", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file4)},
	{"file5", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file5)},
	{"file6", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file6)},
	{"file7", "Ljava/io/File;", nullptr, $STATIC, $staticField(DeleteOnExit, file7)},
	{}
};

$MethodInfo _DeleteOnExit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeleteOnExit::*)()>(&DeleteOnExit::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeleteOnExit::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DeleteOnExit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeleteOnExit",
	"java.lang.Object",
	nullptr,
	_DeleteOnExit_FieldInfo_,
	_DeleteOnExit_MethodInfo_
};

$Object* allocate$DeleteOnExit($Class* clazz) {
	return $of($alloc(DeleteOnExit));
}

$String* DeleteOnExit::tmpdir = nullptr;
$String* DeleteOnExit::java = nullptr;
$File* DeleteOnExit::file1 = nullptr;
$File* DeleteOnExit::file2 = nullptr;
$File* DeleteOnExit::file3 = nullptr;
$File* DeleteOnExit::dir = nullptr;
$File* DeleteOnExit::file4 = nullptr;
$File* DeleteOnExit::file5 = nullptr;
$File* DeleteOnExit::file6 = nullptr;
$File* DeleteOnExit::file7 = nullptr;

void DeleteOnExit::init$() {
}

void DeleteOnExit::main($StringArray* args) {
	$init(DeleteOnExit);
	if ($nc(args)->length == 0) {
		$var($String, cmd, $str({DeleteOnExit::java, " -classpath "_s, $($System::getProperty("test.classes"_s)), " DeleteOnExit -test"_s}));
		$nc($($nc($($Runtime::getRuntime()))->exec(cmd)))->waitFor();
		bool var$6 = $nc(DeleteOnExit::file1)->exists();
		bool var$5 = var$6 || $nc(DeleteOnExit::file2)->exists();
		bool var$4 = var$5 || $nc(DeleteOnExit::file3)->exists();
		bool var$3 = var$4 || $nc(DeleteOnExit::dir)->exists();
		bool var$2 = var$3 || $nc(DeleteOnExit::file4)->exists();
		bool var$1 = var$2 || $nc(DeleteOnExit::file5)->exists();
		bool var$0 = var$1 || $nc(DeleteOnExit::file6)->exists();
		if (var$0 || $nc(DeleteOnExit::file7)->exists()) {
			$var($String, var$7, $$str({DeleteOnExit::file1, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$7, $$str($nc(DeleteOnExit::file1)->exists())));
			$var($String, var$8, $$str({DeleteOnExit::file2, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$8, $$str($nc(DeleteOnExit::file2)->exists())));
			$var($String, var$9, $$str({DeleteOnExit::file3, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$9, $$str($nc(DeleteOnExit::file3)->exists())));
			$var($String, var$10, $$str({DeleteOnExit::dir, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$10, $$str($nc(DeleteOnExit::dir)->exists())));
			$var($String, var$11, $$str({DeleteOnExit::file4, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$11, $$str($nc(DeleteOnExit::file4)->exists())));
			$var($String, var$12, $$str({DeleteOnExit::file5, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$12, $$str($nc(DeleteOnExit::file5)->exists())));
			$var($String, var$13, $$str({DeleteOnExit::file6, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$13, $$str($nc(DeleteOnExit::file6)->exists())));
			$var($String, var$14, $$str({DeleteOnExit::file7, ", exists = "_s}));
			$nc($System::out)->println($$concat(var$14, $$str($nc(DeleteOnExit::file7)->exists())));
			$nc(DeleteOnExit::dir)->delete$();
			$throwNew($Exception, "File exists"_s);
		}
	} else {
		$nc(DeleteOnExit::file1)->createNewFile();
		$nc(DeleteOnExit::file2)->createNewFile();
		$nc(DeleteOnExit::file3)->createNewFile();
		$nc(DeleteOnExit::file1)->deleteOnExit();
		$nc(DeleteOnExit::file2)->deleteOnExit();
		$nc(DeleteOnExit::file3)->deleteOnExit();
		$nc(DeleteOnExit::file3)->delete$();
		$nc(DeleteOnExit::file2)->deleteOnExit();
		$nc(DeleteOnExit::file2)->deleteOnExit();
		$nc(DeleteOnExit::file2)->deleteOnExit();
		if ($nc(DeleteOnExit::dir)->mkdir()) {
			$nc(DeleteOnExit::dir)->deleteOnExit();
			$nc(DeleteOnExit::file4)->createNewFile();
			$nc(DeleteOnExit::file5)->createNewFile();
			$nc(DeleteOnExit::file6)->createNewFile();
			$nc(DeleteOnExit::file7)->createNewFile();
			$nc(DeleteOnExit::file4)->deleteOnExit();
			$nc(DeleteOnExit::file5)->deleteOnExit();
			$nc(DeleteOnExit::file6)->deleteOnExit();
			$nc(DeleteOnExit::file7)->deleteOnExit();
		}
	}
}

void clinit$DeleteOnExit($Class* class$) {
	$assignStatic(DeleteOnExit::tmpdir, $System::getProperty("java.io.tmpdir"_s));
	$init($File);
	$assignStatic(DeleteOnExit::java, $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	$assignStatic(DeleteOnExit::file1, $new($File, $$str({DeleteOnExit::tmpdir, "deletedOnExit1"_s})));
	$assignStatic(DeleteOnExit::file2, $new($File, $$str({DeleteOnExit::tmpdir, "deletedOnExit2"_s})));
	$assignStatic(DeleteOnExit::file3, $new($File, $$str({DeleteOnExit::tmpdir, "deletedOnExit3"_s})));
	$assignStatic(DeleteOnExit::dir, $new($File, $$str({DeleteOnExit::tmpdir, "deletedOnExitDir"_s})));
	$assignStatic(DeleteOnExit::file4, $new($File, $$str({DeleteOnExit::dir, $File::separator, "deletedOnExit4"_s})));
	$assignStatic(DeleteOnExit::file5, $new($File, $$str({DeleteOnExit::dir, $File::separator, "dxnsdnguidfgejngognrogn"_s})));
	$assignStatic(DeleteOnExit::file6, $new($File, $$str({DeleteOnExit::dir, $File::separator, "mmmmmmsdmfgmdsmfgmdsfgm"_s})));
	$assignStatic(DeleteOnExit::file7, $new($File, $$str({DeleteOnExit::dir, $File::separator, "12345566777"_s})));
}

DeleteOnExit::DeleteOnExit() {
}

$Class* DeleteOnExit::load$($String* name, bool initialize) {
	$loadClass(DeleteOnExit, name, initialize, &_DeleteOnExit_ClassInfo_, clinit$DeleteOnExit, allocate$DeleteOnExit);
	return class$;
}

$Class* DeleteOnExit::class$ = nullptr;