#include <UnixSocketFile.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/Watchable.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

#undef CMD_BASE
#undef ENTRY_CREATE
#undef SOCKET_FILE_NAME
#undef TEST_SUB_DIR

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;

$FieldInfo _UnixSocketFile_FieldInfo_[] = {
	{"TEST_SUB_DIR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixSocketFile, TEST_SUB_DIR)},
	{"SOCKET_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixSocketFile, SOCKET_FILE_NAME)},
	{"CMD_BASE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixSocketFile, CMD_BASE)},
	{}
};

$MethodInfo _UnixSocketFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnixSocketFile::*)()>(&UnixSocketFile::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UnixSocketFile::main)), "java.lang.InterruptedException,java.io.IOException"},
	{}
};

$ClassInfo _UnixSocketFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UnixSocketFile",
	"java.lang.Object",
	nullptr,
	_UnixSocketFile_FieldInfo_,
	_UnixSocketFile_MethodInfo_
};

$Object* allocate$UnixSocketFile($Class* clazz) {
	return $of($alloc(UnixSocketFile));
}

$String* UnixSocketFile::TEST_SUB_DIR = nullptr;
$String* UnixSocketFile::SOCKET_FILE_NAME = nullptr;
$String* UnixSocketFile::CMD_BASE = nullptr;

void UnixSocketFile::init$() {
}

void UnixSocketFile::main($StringArray* args) {
	$init(UnixSocketFile);
	$useLocalCurrentObjectStackCache();
	$var($Process, proc, $nc($($Runtime::getRuntime()))->exec("which nc"_s));
	$var($InputStream, stdout, $nc(proc)->getInputStream());
	int32_t b = $nc(stdout)->read();
	proc->destroy();
	if (b == -1) {
		$nc($System::err)->println("Netcat command unavailable; skipping test."_s);
		return;
	}
	$var($Process, procHelp, $nc($($Runtime::getRuntime()))->exec($$str({UnixSocketFile::CMD_BASE, " -h"_s})));
	if ($nc(procHelp)->waitFor() != 0) {
		$nc($System::err)->println("Netcat does not accept required options; skipping test."_s);
		return;
	}
	$init($File);
	$var($String, testSubDir, $str({$($System::getProperty("test.dir"_s, "."_s)), $File::separator, UnixSocketFile::TEST_SUB_DIR}));
	$var($Path, socketTestDir, $Paths::get(testSubDir, $$new($StringArray, 0)));
	try {
		$Files::delete$(socketTestDir);
	} catch ($Throwable& e) {
	}
	$Files::createDirectory(socketTestDir, $$new($FileAttributeArray, 0));
	$var($String, socketFilePath, $str({testSubDir, $File::separator, UnixSocketFile::SOCKET_FILE_NAME}));
	$var($FileSystem, fs, $FileSystems::getDefault());
	{
		$var($WatchService, ws, $nc(fs)->newWatchService());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$init($StandardWatchEventKinds);
					$var($WatchKey, wk, $nc(socketTestDir)->register$(ws, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_CREATE})));
					$assign(proc, $nc($($Runtime::getRuntime()))->exec($$str({UnixSocketFile::CMD_BASE, " "_s, socketFilePath})));
					$var($WatchKey, key, $nc(ws)->take());
					if (key != wk) {
						$var($String, var$1, $$str({"Unknown entry created - expected: "_s, $($nc(wk)->watchable()), ", actual: "_s}));
						$throwNew($RuntimeException, $$concat(var$1, $($nc(key)->watchable())));
					}
					$nc(wk)->cancel();
				} catch ($Throwable& t$) {
					if (ws != nullptr) {
						try {
							ws->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				if (ws != nullptr) {
					ws->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($Path, socketPath, $nc(fs)->getPath(socketFilePath, $$new($StringArray, 0)));
	if (!$Files::exists(socketPath, $$new($LinkOptionArray, 0))) {
		$throwNew($RuntimeException, $$str({"Socket file "_s, socketFilePath, " was not created by \"nc\" command."_s}));
	}
	$load($BasicFileAttributeView);
	$var($BasicFileAttributeView, attributeView, $cast($BasicFileAttributeView, $Files::getFileAttributeView(socketPath, $BasicFileAttributeView::class$, $$new($LinkOptionArray, 0))));
	$var($BasicFileAttributes, oldAttributes, $nc(attributeView)->readAttributes());
	$var($FileTime, oldAccessTime, $nc(oldAttributes)->lastAccessTime());
	$var($FileTime, oldModifiedTime, oldAttributes->lastModifiedTime());
	$nc($System::out)->println($$str({"Old times: "_s, oldAccessTime, " "_s, oldModifiedTime}));
	$var($FileTime, newFileTime, $FileTime::fromMillis($nc(oldAccessTime)->toMillis() + 1066));
	{
		$var($Throwable, var$3, nullptr);
		try {
			attributeView->setTimes(newFileTime, newFileTime, nullptr);
			$var($FileTime, newAccessTime, nullptr);
			$var($FileTime, newModifiedTime, nullptr);
			$var($BasicFileAttributes, newAttributes, attributeView->readAttributes());
			$assign(newAccessTime, $nc(newAttributes)->lastAccessTime());
			$assign(newModifiedTime, newAttributes->lastModifiedTime());
			$nc($System::out)->println($$str({"New times: "_s, newAccessTime, " "_s, newModifiedTime}));
			bool var$4 = (newAccessTime != nullptr && !newAccessTime->equals(newFileTime));
			if (var$4 || (newModifiedTime != nullptr && !newModifiedTime->equals(newFileTime))) {
				$throwNew($RuntimeException, "Failed to set correct times."_s);
			}
		} catch ($Throwable& var$5) {
			$assign(var$3, var$5);
		} /*finally*/ {
			proc->destroy();
			$Files::delete$(socketPath);
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
}

UnixSocketFile::UnixSocketFile() {
}

void clinit$UnixSocketFile($Class* class$) {
	$assignStatic(UnixSocketFile::TEST_SUB_DIR, "UnixSocketFile"_s);
	$assignStatic(UnixSocketFile::SOCKET_FILE_NAME, "mysocket"_s);
	$assignStatic(UnixSocketFile::CMD_BASE, "nc -lU"_s);
}

$Class* UnixSocketFile::load$($String* name, bool initialize) {
	$loadClass(UnixSocketFile, name, initialize, &_UnixSocketFile_ClassInfo_, clinit$UnixSocketFile, allocate$UnixSocketFile);
	return class$;
}

$Class* UnixSocketFile::class$ = nullptr;