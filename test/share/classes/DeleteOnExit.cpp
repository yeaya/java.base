#include <DeleteOnExit.h>
#include <java/io/File.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;

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
	$useLocalObjectStack();
	if ($nc(args)->length == 0) {
		$var($String, cmd, $str({DeleteOnExit::java, " -classpath "_s, $($System::getProperty("test.classes"_s)), " DeleteOnExit -test"_s}));
		$$nc($$nc($Runtime::getRuntime())->exec(cmd))->waitFor();
		bool var$6 = $nc(DeleteOnExit::file1)->exists();
		bool var$5 = var$6 || $nc(DeleteOnExit::file2)->exists();
		bool var$4 = var$5 || $nc(DeleteOnExit::file3)->exists();
		bool var$3 = var$4 || $nc(DeleteOnExit::dir)->exists();
		bool var$2 = var$3 || $nc(DeleteOnExit::file4)->exists();
		bool var$1 = var$2 || $nc(DeleteOnExit::file5)->exists();
		bool var$0 = var$1 || $nc(DeleteOnExit::file6)->exists();
		if (var$0 || $nc(DeleteOnExit::file7)->exists()) {
			$var($StringBuilder, var$7, $new($StringBuilder));
			var$7->append(DeleteOnExit::file1);
			var$7->append(", exists = "_s);
			var$7->append(DeleteOnExit::file1->exists());
			$nc($System::out)->println($$str(var$7));
			$var($StringBuilder, var$8, $new($StringBuilder));
			var$8->append(DeleteOnExit::file2);
			var$8->append(", exists = "_s);
			var$8->append($nc(DeleteOnExit::file2)->exists());
			$System::out->println($$str(var$8));
			$var($StringBuilder, var$9, $new($StringBuilder));
			var$9->append(DeleteOnExit::file3);
			var$9->append(", exists = "_s);
			var$9->append($nc(DeleteOnExit::file3)->exists());
			$System::out->println($$str(var$9));
			$var($StringBuilder, var$10, $new($StringBuilder));
			var$10->append(DeleteOnExit::dir);
			var$10->append(", exists = "_s);
			var$10->append($nc(DeleteOnExit::dir)->exists());
			$System::out->println($$str(var$10));
			$var($StringBuilder, var$11, $new($StringBuilder));
			var$11->append(DeleteOnExit::file4);
			var$11->append(", exists = "_s);
			var$11->append($nc(DeleteOnExit::file4)->exists());
			$System::out->println($$str(var$11));
			$var($StringBuilder, var$12, $new($StringBuilder));
			var$12->append(DeleteOnExit::file5);
			var$12->append(", exists = "_s);
			var$12->append($nc(DeleteOnExit::file5)->exists());
			$System::out->println($$str(var$12));
			$var($StringBuilder, var$13, $new($StringBuilder));
			var$13->append(DeleteOnExit::file6);
			var$13->append(", exists = "_s);
			var$13->append($nc(DeleteOnExit::file6)->exists());
			$System::out->println($$str(var$13));
			$var($StringBuilder, var$14, $new($StringBuilder));
			var$14->append(DeleteOnExit::file7);
			var$14->append(", exists = "_s);
			var$14->append($nc(DeleteOnExit::file7)->exists());
			$System::out->println($$str(var$14));
			$nc(DeleteOnExit::dir)->delete$();
			$throwNew($Exception, "File exists"_s);
		}
	} else {
		$nc(DeleteOnExit::file1)->createNewFile();
		$nc(DeleteOnExit::file2)->createNewFile();
		$nc(DeleteOnExit::file3)->createNewFile();
		DeleteOnExit::file1->deleteOnExit();
		DeleteOnExit::file2->deleteOnExit();
		DeleteOnExit::file3->deleteOnExit();
		DeleteOnExit::file3->delete$();
		DeleteOnExit::file2->deleteOnExit();
		DeleteOnExit::file2->deleteOnExit();
		DeleteOnExit::file2->deleteOnExit();
		if ($nc(DeleteOnExit::dir)->mkdir()) {
			DeleteOnExit::dir->deleteOnExit();
			$nc(DeleteOnExit::file4)->createNewFile();
			$nc(DeleteOnExit::file5)->createNewFile();
			$nc(DeleteOnExit::file6)->createNewFile();
			$nc(DeleteOnExit::file7)->createNewFile();
			DeleteOnExit::file4->deleteOnExit();
			DeleteOnExit::file5->deleteOnExit();
			DeleteOnExit::file6->deleteOnExit();
			DeleteOnExit::file7->deleteOnExit();
		}
	}
}

void DeleteOnExit::clinit$($Class* clazz) {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeleteOnExit, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteOnExit, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DeleteOnExit",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeleteOnExit, name, initialize, &classInfo$$, DeleteOnExit::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteOnExit);
	});
	return class$;
}

$Class* DeleteOnExit::class$ = nullptr;