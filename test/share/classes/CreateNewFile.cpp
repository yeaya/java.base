#include <CreateNewFile.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void CreateNewFile::init$() {
}

void CreateNewFile::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, f, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "x.CreateNewFile"_s));
	bool var$0 = f->exists();
	if (var$0 && !f->delete$()) {
		$throwNew($Exception, $$str({"Cannot delete test file "_s, f}));
	}
	if (!f->createNewFile()) {
		$throwNew($Exception, $$str({"Cannot create new file "_s, f}));
	}
	if (!f->exists()) {
		$throwNew($Exception, $$str({"Did not create new file "_s, f}));
	}
	if (f->createNewFile()) {
		$throwNew($Exception, $$str({"Created existing file "_s, f}));
	}
	try {
		$assign(f, $new($File, "/"_s));
		if (f->createNewFile()) {
			$throwNew($Exception, "Created root directory!"_s);
		}
	} catch ($IOException& e) {
	}
	testCreateExistingDir();
}

void CreateNewFile::testCreateExistingDir() {
	$useLocalObjectStack();
	$var($File, tmpFile, $new($File, "hugo"_s));
	bool var$0 = tmpFile->exists();
	if (var$0 && !tmpFile->delete$()) {
		$throwNew($RuntimeException, $$str({"Cannot delete "_s, tmpFile}));
	}
	if (!tmpFile->mkdir()) {
		$throwNew($RuntimeException, $$str({"Cannot create dir "_s, tmpFile}));
	}
	if (!tmpFile->exists()) {
		$throwNew($RuntimeException, $$str({"Cannot see created dir "_s, tmpFile}));
	}
	if (tmpFile->createNewFile()) {
		$throwNew($RuntimeException, $$str({"Should fail to create file "_s, tmpFile}));
	}
}

CreateNewFile::CreateNewFile() {
}

$Class* CreateNewFile::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CreateNewFile, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CreateNewFile, main, void, $StringArray*), "java.lang.Exception"},
		{"testCreateExistingDir", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CreateNewFile, testCreateExistingDir, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CreateNewFile",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CreateNewFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CreateNewFile);
	});
	return class$;
}

$Class* CreateNewFile::class$ = nullptr;