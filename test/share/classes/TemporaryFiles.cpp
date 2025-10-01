#include <TemporaryFiles.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef READ
#undef OWNER_READ
#undef OWNER_WRITE
#undef OWNER_EXECUTE
#undef WRITE

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channel = ::java::nio::channels::Channel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$MethodInfo _TemporaryFiles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TemporaryFiles::*)()>(&TemporaryFiles::init$))},
	{"checkInDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*,$Path*)>(&TemporaryFiles::checkInDirectory))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TemporaryFiles::main)), "java.io.IOException"},
	{"testInvalidFileTemp", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&TemporaryFiles::testInvalidFileTemp)), "java.io.IOException"},
	{"testTempDirectory", "(Ljava/lang/String;Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Path*)>(&TemporaryFiles::testTempDirectory)), "java.io.IOException"},
	{"testTempDirectory", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&TemporaryFiles::testTempDirectory)), "java.io.IOException"},
	{"testTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,$Path*)>(&TemporaryFiles::testTempFile)), "java.io.IOException"},
	{"testTempFile", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&TemporaryFiles::testTempFile)), "java.io.IOException"},
	{}
};

$ClassInfo _TemporaryFiles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TemporaryFiles",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TemporaryFiles_MethodInfo_
};

$Object* allocate$TemporaryFiles($Class* clazz) {
	return $of($alloc(TemporaryFiles));
}

void TemporaryFiles::init$() {
}

void TemporaryFiles::checkInDirectory($Path* file, $Path* dir$renamed) {
	$var($Path, dir, dir$renamed);
	if (dir == nullptr) {
		$assign(dir, $Paths::get($($System::getProperty("java.io.tmpdir"_s)), $$new($StringArray, 0)));
	}
	if (!$nc($($nc(file)->getParent()))->equals(dir)) {
		$throwNew($RuntimeException, "Not in expected directory"_s);
	}
}

void TemporaryFiles::testTempFile($String* prefix, $String* suffix, $Path* dir) {
	$var($Path, file, (dir == nullptr) ? $Files::createTempFile(prefix, suffix, $$new($FileAttributeArray, 0)) : $Files::createTempFile(dir, prefix, suffix, $$new($FileAttributeArray, 0)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, name, $nc($($nc(file)->getFileName()))->toString());
			if (prefix != nullptr && !$nc(name)->startsWith(prefix)) {
				$throwNew($RuntimeException, $$str({"Should start with "_s, prefix}));
			}
			if (suffix == nullptr && !$nc(name)->endsWith(".tmp"_s)) {
				$throwNew($RuntimeException, "Should end with .tmp"_s);
			}
			if (suffix != nullptr && !$nc(name)->endsWith(suffix)) {
				$throwNew($RuntimeException, $$str({"Should end with "_s, suffix}));
			}
			checkInDirectory(file, dir);
			$init($StandardOpenOption);
			$nc($($Files::newByteChannel(file, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)}))))->close();
			$nc($($Files::newByteChannel(file, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)}))))->close();
			$nc($($Files::newByteChannel(file, $$new($OpenOptionArray, {
				static_cast<$OpenOption*>($StandardOpenOption::READ),
				static_cast<$OpenOption*>($StandardOpenOption::WRITE)
			}))))->close();
			if ($nc($($Files::getFileStore(file)))->supportsFileAttributeView("posix"_s)) {
				$var($Set, perms, $Files::getPosixFilePermissions(file, $$new($LinkOptionArray, 0)));
				$init($PosixFilePermission);
				$nc(perms)->remove($PosixFilePermission::OWNER_READ);
				perms->remove($PosixFilePermission::OWNER_WRITE);
				if (!perms->isEmpty()) {
					$throwNew($RuntimeException, "Temporary file is not secure"_s);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Files::delete$(file);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TemporaryFiles::testTempFile($String* prefix, $String* suffix) {
	testTempFile(prefix, suffix, nullptr);
}

void TemporaryFiles::testTempDirectory($String* prefix, $Path* dir) {
	$var($Path, subdir, (dir == nullptr) ? $Files::createTempDirectory(prefix, $$new($FileAttributeArray, 0)) : $Files::createTempDirectory(dir, prefix, $$new($FileAttributeArray, 0)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, name, $nc($($nc(subdir)->getFileName()))->toString());
			if (prefix != nullptr && !$nc(name)->startsWith(prefix)) {
				$throwNew($RuntimeException, $$str({"Should start with "_s, prefix}));
			}
			checkInDirectory(subdir, dir);
			$var($DirectoryStream, stream, $Files::newDirectoryStream(subdir));
			{
				$var($Throwable, var$1, nullptr);
				try {
					if ($nc($($nc(stream)->iterator()))->hasNext()) {
						$throwNew($RuntimeException, "Tempory directory not empty"_s);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					$nc(stream)->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$var($Path, file, $Files::createFile($(subdir->resolve("foo"_s)), $$new($FileAttributeArray, 0)));
			{
				$var($Throwable, var$2, nullptr);
				try {
						$init($StandardOpenOption);
					$nc($($Files::newByteChannel(file, $$new($OpenOptionArray, {
						static_cast<$OpenOption*>($StandardOpenOption::READ),
						static_cast<$OpenOption*>($StandardOpenOption::WRITE)
					}))))->close();
				} catch ($Throwable&) {
					$assign(var$2, $catch());
				} /*finally*/ {
					$Files::delete$(file);
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
			if ($nc($($Files::getFileStore(subdir)))->supportsFileAttributeView("posix"_s)) {
				$var($Set, perms, $Files::getPosixFilePermissions(subdir, $$new($LinkOptionArray, 0)));
				$init($PosixFilePermission);
				$nc(perms)->remove($PosixFilePermission::OWNER_READ);
				perms->remove($PosixFilePermission::OWNER_WRITE);
				perms->remove($PosixFilePermission::OWNER_EXECUTE);
				if (!perms->isEmpty()) {
					$throwNew($RuntimeException, "Temporary directory is not secure"_s);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Files::delete$(subdir);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TemporaryFiles::testTempDirectory($String* prefix) {
	testTempDirectory(prefix, nullptr);
}

void TemporaryFiles::testInvalidFileTemp($String* prefix, $String* suffix) {
	try {
		$var($Path, file, $Files::createTempFile(prefix, suffix, $$new($FileAttributeArray, 0)));
		$Files::delete$(file);
		$throwNew($RuntimeException, "IllegalArgumentException expected"_s);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
}

void TemporaryFiles::main($StringArray* args) {
	testTempFile("blah"_s, ".dat"_s);
	testTempFile("blah"_s, nullptr);
	testTempFile(nullptr, ".dat"_s);
	testTempFile(nullptr, nullptr);
	testTempDirectory("blah"_s);
	testTempDirectory(nullptr);
	$var($Path, dir, $Files::createTempDirectory("tmpdir"_s, $$new($FileAttributeArray, 0)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			testTempFile("blah"_s, ".dat"_s, dir);
			testTempFile("blah"_s, nullptr, dir);
			testTempFile(nullptr, ".dat"_s, dir);
			testTempFile(nullptr, nullptr, dir);
			testTempDirectory("blah"_s, dir);
			testTempDirectory(nullptr, dir);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Files::delete$(dir);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	testInvalidFileTemp("../blah"_s, nullptr);
	testInvalidFileTemp("dir/blah"_s, nullptr);
	testInvalidFileTemp("blah"_s, ".dat/foo"_s);
	try {
		$Files::createTempFile("blah"_s, ".tmp"_s, ($FileAttributeArray*)nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$Files::createTempFile("blah"_s, ".tmp"_s, $$new($FileAttributeArray, {($FileAttribute*)nullptr}));
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$Files::createTempDirectory("blah"_s, ($FileAttributeArray*)nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$Files::createTempDirectory("blah"_s, $$new($FileAttributeArray, {($FileAttribute*)nullptr}));
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$Files::createTempFile(($Path*)nullptr, "blah"_s, ".tmp"_s, $$new($FileAttributeArray, 0));
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$Files::createTempDirectory(($Path*)nullptr, "blah"_s, $$new($FileAttributeArray, 0));
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
}

TemporaryFiles::TemporaryFiles() {
}

$Class* TemporaryFiles::load$($String* name, bool initialize) {
	$loadClass(TemporaryFiles, name, initialize, &_TemporaryFiles_ClassInfo_, allocate$TemporaryFiles);
	return class$;
}

$Class* TemporaryFiles::class$ = nullptr;