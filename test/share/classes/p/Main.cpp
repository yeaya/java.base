#include <p/Main.h>
#include <java/io/File.h>
#include <java/lang/Module.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

namespace p {

void Main::init$() {
}

void Main::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileSystem, fs, $FileSystems::getDefault());
	if ($nc(fs)->getClass()->getModule() == $Object::class$->getModule()) {
		$throwNew($RuntimeException, "FileSystemProvider not overridden"_s);
	}
	$var($Path, dir, $Files::createTempDirectory("tmp"_s, $$new($FileAttributeArray, 0)));
	if ($nc(dir)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'dir\' not in default file system"_s);
	}
	$nc($System::out)->println($$str({"created: "_s, dir}));
	$var($Path, foo, $Files::createFile($(dir->resolve("foo"_s)), $$new($FileAttributeArray, 0)));
	if ($nc(foo)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'foo\' not in default file system"_s);
	}
	$System::out->println($$str({"created: "_s, foo}));
	$var($File, file, foo->toFile());
	$var($Path, path, $nc(file)->toPath());
	if ($nc(path)->getFileSystem() != fs) {
		$throwNew($RuntimeException, "\'path\' not in default file system"_s);
	}
	if (!path->equals(foo)) {
		$throwNew($RuntimeException, $$str({path, " not equal to "_s, foo}));
	}
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Main, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Main, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.Main",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Main, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main);
	});
	return class$;
}

$Class* Main::class$ = nullptr;

} // p