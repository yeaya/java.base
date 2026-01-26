#include <DriveLetter.h>

#include <java/io/File.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Iterator = ::java::util::Iterator;

$MethodInfo _DriveLetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DriveLetter, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DriveLetter, main, void, $StringArray*), "java.io.IOException"},
	{}
};

$ClassInfo _DriveLetter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DriveLetter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DriveLetter_MethodInfo_
};

$Object* allocate$DriveLetter($Class* clazz) {
	return $of($alloc(DriveLetter));
}

void DriveLetter::init$() {
}

void DriveLetter::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, os, $System::getProperty("os.name"_s));
	if (!$nc(os)->startsWith("Windows"_s)) {
		$nc($System::out)->println("This is Windows specific test"_s);
		return;
	}
	$var($String, here, $System::getProperty("user.dir"_s));
	bool var$0 = $nc(here)->length() < 2;
	if (var$0 || $nc(here)->charAt(1) != u':') {
		$throwNew($RuntimeException, "Unable to determine drive letter"_s);
	}
	$var($File, tempFile, $File::createTempFile("foo"_s, "tmp"_s, $$new($File, here)));
	{
		$var($Throwable, var$1, nullptr);
		try {
			$var($String, drive, $nc(here)->substring(0, 2));
			$var($Path, expected, $nc($($Paths::get(drive, $$new($StringArray, 0))))->resolve($($nc(tempFile)->getName())));
			bool found = false;
			$var($Path, dir, $Paths::get(drive, $$new($StringArray, 0)));
			{
				$var($DirectoryStream, stream, $Files::newDirectoryStream(dir));
				{
					$var($Throwable, var$2, nullptr);
					try {
						try {
							{
								$var($Iterator, i$, $nc(stream)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Path, file, $cast($Path, i$->next()));
									{
										if ($nc(file)->equals(expected)) {
											found = true;
											break;
										}
									}
								}
							}
						} catch ($Throwable& t$) {
							if (stream != nullptr) {
								try {
									stream->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if (stream != nullptr) {
							stream->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
			if (!found) {
				$throwNew($RuntimeException, "Temporary file not found???"_s);
			}
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} /*finally*/ {
			$nc(tempFile)->delete$();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

DriveLetter::DriveLetter() {
}

$Class* DriveLetter::load$($String* name, bool initialize) {
	$loadClass(DriveLetter, name, initialize, &_DriveLetter_ClassInfo_, allocate$DriveLetter);
	return class$;
}

$Class* DriveLetter::class$ = nullptr;