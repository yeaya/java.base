#include <p/Main.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;

namespace p {

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)()>(&Main::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.Main",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

void Main::init$() {
}

void Main::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystem, fs, $FileSystems::getDefault());
	$load($Object);
	if ($nc($of(fs))->getClass()->getModule() == $Object::class$->getModule()) {
		$throwNew($RuntimeException, "FileSystemProvider not overridden"_s);
	}
	$var($Path, dir, $Files::createTempDirectory("tmp"_s, $$new($FileAttributeArray, 0)));
	if ($nc(dir)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'dir\' not in default file system"_s);
	}
	$init($System);
	$nc($System::out)->println($$str({"created: "_s, dir}));
	$var($Path, foo, $Files::createFile($($nc(dir)->resolve("foo"_s)), $$new($FileAttributeArray, 0)));
	if ($nc(foo)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'foo\' not in default file system"_s);
	}
	$nc($System::out)->println($$str({"created: "_s, foo}));
	$var($File, file, $nc(foo)->toFile());
	$var($Path, path, $nc(file)->toPath());
	if ($nc(path)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'path\' not in default file system"_s);
	}
	if (!$nc(path)->equals(foo)) {
		$throwNew($RuntimeException, $$str({path, " not equal to "_s, foo}));
	}
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

} // p