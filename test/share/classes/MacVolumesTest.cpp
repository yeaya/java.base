#include <MacVolumesTest.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef DATA_VOLUME
#undef FIRMLINKS
#undef SYSTEM_VOLUME
#undef WRITE

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Random = ::java::util::Random;

$FieldInfo _MacVolumesTest_FieldInfo_[] = {
	{"SYSTEM_VOLUME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacVolumesTest, SYSTEM_VOLUME)},
	{"DATA_VOLUME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacVolumesTest, DATA_VOLUME)},
	{"FIRMLINKS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacVolumesTest, FIRMLINKS)},
	{}
};

$MethodInfo _MacVolumesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MacVolumesTest, init$, void)},
	{"checkDataVolume", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(MacVolumesTest, checkDataVolume, void), "java.io.IOException"},
	{"checkFirmlinks", "()V", nullptr, $STATIC, $staticMethod(MacVolumesTest, checkFirmlinks, void), "java.io.IOException"},
	{"checkSystemVolume", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(MacVolumesTest, checkSystemVolume, void), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MacVolumesTest, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _MacVolumesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MacVolumesTest",
	"java.lang.Object",
	nullptr,
	_MacVolumesTest_FieldInfo_,
	_MacVolumesTest_MethodInfo_
};

$Object* allocate$MacVolumesTest($Class* clazz) {
	return $of($alloc(MacVolumesTest));
}

$String* MacVolumesTest::SYSTEM_VOLUME = nullptr;
$String* MacVolumesTest::DATA_VOLUME = nullptr;
$String* MacVolumesTest::FIRMLINKS = nullptr;

void MacVolumesTest::init$() {
}

void MacVolumesTest::checkSystemVolume() {
	$init(MacVolumesTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->format("--- Checking system volume %s ---%n"_s, $$new($ObjectArray, {$of(MacVolumesTest::SYSTEM_VOLUME)}));
	$var($Path, root, $Path::of(MacVolumesTest::SYSTEM_VOLUME, $$new($StringArray, 0)));
	if (!$nc($($Files::getFileStore(root)))->isReadOnly()) {
		$throwNew($RuntimeException, "Root volume is not read-only"_s);
	}
	$var($Path, tempDir, nullptr);
	try {
		$assign(tempDir, $Files::createTempDirectory(root, "tempDir"_s, $$new($FileAttributeArray, 0)));
		$throwNew($RuntimeException, "Created temporary directory in root"_s);
	} catch ($IOException& ignore) {
	}
	$var($Path, tempFile, nullptr);
	try {
		$assign(tempFile, $Files::createTempFile(root, "tempFile"_s, nullptr, $$new($FileAttributeArray, 0)));
		$throwNew($RuntimeException, "Created temporary file in root"_s);
	} catch ($IOException& ignore) {
	}
	$var($Path, path, nullptr);
	$var($Path, etc, $Path::of(MacVolumesTest::SYSTEM_VOLUME, $$new($StringArray, {"etc"_s})));
	if ($Files::isWritable(etc)) {
		$throwNew($RuntimeException, $$str({"System path "_s, etc, " is writable"_s}));
	}
	{
		$var($DirectoryStream, ds, $Files::newDirectoryStream(etc));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Iterator, paths, $nc(ds)->iterator());
					while ($nc(paths)->hasNext()) {
						$var($Path, p, $cast($Path, paths->next()));
						bool var$1 = $Files::isReadable(p);
						if (var$1 && $Files::isRegularFile(p, $$new($LinkOptionArray, 0))) {
							$assign(path, p);
							break;
						}
					}
				} catch ($Throwable& t$) {
					if (ds != nullptr) {
						try {
							ds->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				if (ds != nullptr) {
					ds->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (path == nullptr) {
		$nc($System::err)->println("No root test file found: skipping file test"_s);
		return;
	}
	$nc($System::out)->format("Using root test file %s%n"_s, $$new($ObjectArray, {$of(path)}));
	if ($Files::isWritable(path)) {
		$throwNew($RuntimeException, $$str({"Test file "_s, path, " is writable"_s}));
	}
	$var($FileTime, creationTime, $cast($FileTime, $Files::getAttribute(path, "basic:creationTime"_s, $$new($LinkOptionArray, 0))));
	$nc($System::out)->format("%s creation time: %s%n"_s, $$new($ObjectArray, {
		$of(path),
		$of(creationTime)
	}));
	int64_t size = $Files::size(path);
	int32_t capacity = (int32_t)$Math::min((int64_t)1024, size);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(capacity));
	{
		$var($SeekableByteChannel, sbc, $Files::newByteChannel(path, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$3, nullptr);
			try {
				try {
					int32_t n = $nc(sbc)->read(buf);
					$nc($System::out)->format("Read %d bytes from %s%n"_s, $$new($ObjectArray, {
						$($of($Integer::valueOf(n))),
						$of(path)
					}));
				} catch ($Throwable& t$) {
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$4) {
				$assign(var$3, var$4);
			} /*finally*/ {
				if (sbc != nullptr) {
					sbc->close();
				}
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	}
}

void MacVolumesTest::checkDataVolume() {
	$init(MacVolumesTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->format("--- Checking data volume %s ---%n"_s, $$new($ObjectArray, {$of(MacVolumesTest::DATA_VOLUME)}));
	$var($Path, data, $Path::of(MacVolumesTest::DATA_VOLUME, $$new($StringArray, {
		"private"_s,
		"tmp"_s
	})));
	if ($nc($($Files::getFileStore(data)))->isReadOnly()) {
		$throwNew($RuntimeException, "Data volume is read-only"_s);
	}
	$var($Path, tempDir, $Files::createTempDirectory(data, "tempDir"_s, $$new($FileAttributeArray, 0)));
	$nc($($nc(tempDir)->toFile()))->deleteOnExit();
	$nc($System::out)->format("Temporary directory: %s%n"_s, $$new($ObjectArray, {$of(tempDir)}));
	if (!$Files::isWritable(tempDir)) {
		$throwNew($RuntimeException, "Temporary directory is not writable"_s);
	}
	$var($Path, tempFile, $Files::createTempFile(tempDir, "tempFile"_s, nullptr, $$new($FileAttributeArray, 0)));
	$nc($($nc(tempFile)->toFile()))->deleteOnExit();
	$nc($System::out)->format("Temporary file: %s%n"_s, $$new($ObjectArray, {$of(tempFile)}));
	if (!$Files::isWritable(tempFile)) {
		$throwNew($RuntimeException, "Temporary file is not writable"_s);
	}
	$var($bytes, bytes, $new($bytes, 42));
	$$new($Random)->nextBytes(bytes);
	{
		$init($StandardOpenOption);
		$var($SeekableByteChannel, sbc, $Files::newByteChannel(tempFile, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ByteBuffer, src, $ByteBuffer::wrap(bytes));
					if ($nc(sbc)->write(src) != bytes->length) {
						$throwNew($RuntimeException, "Incorrect number of bytes written"_s);
					}
				} catch ($Throwable& t$) {
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (sbc != nullptr) {
					sbc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($SeekableByteChannel, sbc, $Files::newByteChannel(tempFile, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$var($ByteBuffer, dst, $ByteBuffer::allocate(bytes->length));
					if ($nc(sbc)->read(dst) != bytes->length) {
						$throwNew($RuntimeException, "Incorrect number of bytes read"_s);
					}
					if (!$Arrays::equals($($cast($bytes, $nc(dst)->array())), bytes)) {
						$throwNew($RuntimeException, "Bytes read != bytes written"_s);
					}
				} catch ($Throwable& t$) {
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if (sbc != nullptr) {
					sbc->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void MacVolumesTest::checkFirmlinks() {
	$init(MacVolumesTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->format("--- Checking firmlinks %s ---%n"_s, $$new($ObjectArray, {$of(MacVolumesTest::FIRMLINKS)}));
	$var($Path, firmlinks, $Path::of(MacVolumesTest::FIRMLINKS, $$new($StringArray, 0)));
	if (!$Files::exists(firmlinks, $$new($LinkOptionArray, 0))) {
		$nc($System::err)->format("%s does not exist: skipping firmlinks test%n"_s, $$new($ObjectArray, {$of(firmlinks)}));
		return;
	} else if (!$Files::isReadable(firmlinks)) {
		$throwNew($RuntimeException, $($String::format("%s is not readable"_s, $$new($ObjectArray, {$of(firmlinks)}))));
	}
	{
		$var($BufferedReader, br, $Files::newBufferedReader(firmlinks));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($String, line, nullptr);
					while (($assign(line, $nc(br)->readLine())) != nullptr) {
						$var($String, file, $($nc(line)->split("\\s"_s))->get(0));
						$var($Path, path, $Path::of(file, $$new($StringArray, 0)));
						if (!$Files::exists(path, $$new($LinkOptionArray, 0))) {
							$nc($System::err)->format("Firmlink %s does not exist: skipping%n"_s, $$new($ObjectArray, {$of(file)}));
							continue;
						}
						if ($nc($($Files::getFileStore(path)))->isReadOnly()) {
							$var($String, msg, $String::format("%s is read-only%n"_s, $$new($ObjectArray, {$of(file)})));
							$throwNew($RuntimeException, msg);
						} else {
							$nc($System::out)->format("Firmlink %s OK%n"_s, $$new($ObjectArray, {$of(file)}));
						}
					}
				} catch ($Throwable& t$) {
					if (br != nullptr) {
						try {
							br->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (br != nullptr) {
					br->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void MacVolumesTest::main($StringArray* args) {
	$init(MacVolumesTest);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, osv, $nc($($System::getProperty("os.version"_s)))->split("\\."_s));
	int32_t major = $nc($($Integer::valueOf(osv->get(0))))->intValue();
	int32_t minor = $nc($($Integer::valueOf(osv->get(1))))->intValue();
	if (major < 10 || (major == 10 && minor < 15)) {
		$nc($System::out)->format("macOS version %d.%d too old: skipping test%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(major))),
			$($of($Integer::valueOf(minor)))
		}));
		return;
	}
	checkSystemVolume();
	checkDataVolume();
	checkFirmlinks();
}

MacVolumesTest::MacVolumesTest() {
}

void clinit$MacVolumesTest($Class* class$) {
	$assignStatic(MacVolumesTest::SYSTEM_VOLUME, "/"_s);
	$assignStatic(MacVolumesTest::DATA_VOLUME, "/System/Volumes/Data"_s);
	$assignStatic(MacVolumesTest::FIRMLINKS, "/usr/share/firmlinks"_s);
}

$Class* MacVolumesTest::load$($String* name, bool initialize) {
	$loadClass(MacVolumesTest, name, initialize, &_MacVolumesTest_ClassInfo_, clinit$MacVolumesTest, allocate$MacVolumesTest);
	return class$;
}

$Class* MacVolumesTest::class$ = nullptr;