#include <RedirectWithLongFilename.h>

#include <java/io/File.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <java/lang/ProcessBuilder.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;

$MethodInfo _RedirectWithLongFilename_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RedirectWithLongFilename::*)()>(&RedirectWithLongFilename::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RedirectWithLongFilename::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _RedirectWithLongFilename_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RedirectWithLongFilename",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RedirectWithLongFilename_MethodInfo_
};

$Object* allocate$RedirectWithLongFilename($Class* clazz) {
	return $of($alloc(RedirectWithLongFilename));
}

void RedirectWithLongFilename::init$() {
}

void RedirectWithLongFilename::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Path, tmpDir, $Paths::get($($System::getProperty("java.io.tmpdir"_s)), $$new($StringArray, 0)));
	$var($File, dir2, nullptr);
	$var($File, longFileName, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(dir2, $nc($($Files::createTempDirectory(tmpDir, "RedirectWithLongFilename"_s, $$new($FileAttributeArray, 0))))->toFile());
			$nc(dir2)->mkdirs();
			$assign(longFileName, $new($File, dir2, "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"_s));
			$var($ProcessBuilder, pb, $new($ProcessBuilder, $$new($StringArray, {"hostname"_s})));
			pb->redirectOutput($($ProcessBuilder$Redirect::appendTo(longFileName)));
			$var($Process, p, pb->start());
			$nc(p)->waitFor();
			if (longFileName->exists()) {
				$nc($System::out)->println("OK"_s);
			} else {
				$throwNew($RuntimeException, "Test failed."_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(longFileName)->delete$();
			$nc(dir2)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

RedirectWithLongFilename::RedirectWithLongFilename() {
}

$Class* RedirectWithLongFilename::load$($String* name, bool initialize) {
	$loadClass(RedirectWithLongFilename, name, initialize, &_RedirectWithLongFilename_ClassInfo_, allocate$RedirectWithLongFilename);
	return class$;
}

$Class* RedirectWithLongFilename::class$ = nullptr;