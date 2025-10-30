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

$MethodInfo _CreateNewFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CreateNewFile::*)()>(&CreateNewFile::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CreateNewFile::main)), "java.lang.Exception"},
	{"testCreateExistingDir", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CreateNewFile::testCreateExistingDir)), "java.io.IOException"},
	{}
};

$ClassInfo _CreateNewFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CreateNewFile",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CreateNewFile_MethodInfo_
};

$Object* allocate$CreateNewFile($Class* clazz) {
	return $of($alloc(CreateNewFile));
}

void CreateNewFile::init$() {
}

void CreateNewFile::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CreateNewFile, name, initialize, &_CreateNewFile_ClassInfo_, allocate$CreateNewFile);
	return class$;
}

$Class* CreateNewFile::class$ = nullptr;