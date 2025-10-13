#include <MacVolumesTest.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channel = ::java::nio::channels::Channel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacVolumesTest::*)()>(&MacVolumesTest::init$))},
	{"checkDataVolume", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&MacVolumesTest::checkDataVolume)), "java.io.IOException"},
	{"checkFirmlinks", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&MacVolumesTest::checkFirmlinks)), "java.io.IOException"},
	{"checkSystemVolume", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&MacVolumesTest::checkSystemVolume)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MacVolumesTest::main)), "java.lang.Exception"},
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
	$init($System);
	$nc($System::out)->format("--- Checking system volume %s ---%n"_s, $$new($ObjectArray, {$of(MacVolumesTest::SYSTEM_VOLUME)}));
	$var($Path, root, $Path::of(MacVolumesTest::SYSTEM_VOLUME, $$new($StringArray, 0)));
	if (!$nc($($Files::getFileStore(root)))->isReadOnly()) {
		$throwNew($RuntimeException, "Root volume is not read-only"_s);
	}
	$var($Path, tempDir, nullptr);
	try {
		$assign(tempDir, $Files::createTempDirectory(root, "tempDir"_s, $$new($FileAttributeArray, 0)));
		$throwNew($RuntimeException, "Created temporary directory in root"_s);
	} catch ($IOException&) {
		$catch();
	}
	$var($Path, tempFile, nullptr);
	try {
		$assign(tempFile, $Files::createTempFile(root, "tempFile"_s, nullptr, $$new($FileAttributeArray, 0)));
		$throwNew($RuntimeException, "Created temporary file in root"_s);
	} catch ($IOException&) {
		$catch();
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
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (ds != nullptr) {
						try {
							ds->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
			$var($Throwable, var$2, nullptr);
			try {
				try {
					int32_t n = $nc(sbc)->read(buf);
					$nc($System::out)->format("Read %d bytes from %s%n"_s, $$new($ObjectArray, {
						$($of($Integer::valueOf(n))),
						$of(path)
					}));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
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

void MacVolumesTest::checkDataVolume() {
	$init(MacVolumesTest);
	$init($System);
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
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$var($ByteBuffer, dst, $ByteBuffer::allocate(bytes->length));
					if ($nc(sbc)->read(dst) != bytes->length) {
						$throwNew($RuntimeException, "Incorrect number of bytes read"_s);
					}
					if (!$Arrays::equals($($cast($bytes, $nc(dst)->array())), bytes)) {
						$throwNew($RuntimeException, "Bytes read != bytes written"_s);
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				if (sbc != nullptr) {
					sbc->close();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

void MacVolumesTest::checkFirmlinks() {
	$init(MacVolumesTest);
	$init($System);
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
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (br != nullptr) {
						try {
							br->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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