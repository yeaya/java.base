#include <NulFile.h>

#include <NulFile$1.h>
#include <NulFile$2.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef CHAR_NUL

using $NulFile$1 = ::NulFile$1;
using $NulFile$2 = ::NulFile$2;
using $FileArray = $Array<::java::io::File>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FileFilter = ::java::io::FileFilter;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilenameFilter = ::java::io::FilenameFilter;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;

$FieldInfo _NulFile_FieldInfo_[] = {
	{"CHAR_NUL", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NulFile, CHAR_NUL)},
	{"ExceptionMsg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NulFile, ExceptionMsg)},
	{}
};

$MethodInfo _NulFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NulFile::*)()>(&NulFile::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NulFile::main))},
	{"test", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NulFile::test))},
	{"test", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&NulFile::test))},
	{"test", "(Ljava/io/File;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,bool)>(&NulFile::test))},
	{"testCreateTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$File*)>(&NulFile::testCreateTempFile))},
	{"testFile", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NulFile::testFile))},
	{"testFileInUnix", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NulFile::testFileInUnix))},
	{"testFileInWindows", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NulFile::testFileInWindows))},
	{"testFileInputStream", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NulFile::testFileInputStream))},
	{"testFileOutputStream", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NulFile::testFileOutputStream))},
	{"testRandomAccessFile", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NulFile::testRandomAccessFile))},
	{"testSerialization", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&NulFile::testSerialization))},
	{"testTempFile", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NulFile::testTempFile))},
	{}
};

$InnerClassInfo _NulFile_InnerClassesInfo_[] = {
	{"NulFile$2", nullptr, nullptr, 0},
	{"NulFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NulFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NulFile",
	"java.lang.Object",
	nullptr,
	_NulFile_FieldInfo_,
	_NulFile_MethodInfo_,
	nullptr,
	nullptr,
	_NulFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NulFile$2,NulFile$1"
};

$Object* allocate$NulFile($Class* clazz) {
	return $of($alloc(NulFile));
}

$String* NulFile::ExceptionMsg = nullptr;

void NulFile::init$() {
}

void NulFile::main($StringArray* args) {
	$init(NulFile);
	testFile();
	testFileInUnix();
	testFileInWindows();
	testTempFile();
}

void NulFile::testFile() {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	test($$new($File, $($$new($StringBuilder)->append(NulFile::CHAR_NUL)->toString())));
	test($$new($File, $($$new($StringBuilder)->append(""_s)->append(NulFile::CHAR_NUL)->toString())));
	test($$new($File, $($$new($StringBuilder)->append(NulFile::CHAR_NUL)->append(""_s)->toString())));
}

void NulFile::testFileInUnix() {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if ($nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	$var($String, unixFile, "/"_s);
	test(unixFile);
	$assign(unixFile, "//"_s);
	test(unixFile);
	$assign(unixFile, "data/info"_s);
	test(unixFile);
	$assign(unixFile, "/data/info"_s);
	test(unixFile);
	$assign(unixFile, "//data//info"_s);
	test(unixFile);
}

void NulFile::testFileInWindows() {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	$var($String, windowsFile, "\\"_s);
	test(windowsFile);
	$assign(windowsFile, "\\\\"_s);
	test(windowsFile);
	$assign(windowsFile, "/"_s);
	test(windowsFile);
	$assign(windowsFile, "//"_s);
	test(windowsFile);
	$assign(windowsFile, "/\\"_s);
	test(windowsFile);
	$assign(windowsFile, "\\/"_s);
	test(windowsFile);
	$assign(windowsFile, "data\\info"_s);
	test(windowsFile);
	$assign(windowsFile, "\\data\\info"_s);
	test(windowsFile);
	$assign(windowsFile, "\\\\server\\data\\info"_s);
	test(windowsFile);
	$assign(windowsFile, "z:data\\info"_s);
	test(windowsFile);
	$assign(windowsFile, "z:\\data\\info"_s);
	test(windowsFile);
}

void NulFile::test($String* name) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(name)->length();
	for (int32_t i = 0; i <= length; ++i) {
		$var($StringBuilder, sbName, $new($StringBuilder, name));
		sbName->insert(i, NulFile::CHAR_NUL);
		$var($String, curName, sbName->toString());
		$var($File, testFile, $new($File, curName, "child"_s));
		test(testFile);
		$assign(testFile, $new($File, "parent"_s, curName));
		test(testFile);
		$assign(testFile, $new($File, curName));
		test(testFile);
		$assign(testFile, $new($File, $$new($File, curName), "child"_s));
		test(testFile);
		$assign(testFile, $new($File, $$new($File, "parent"_s), curName));
		test(testFile);
		testFileInputStream(curName);
		testFileOutputStream(curName);
		testRandomAccessFile(curName);
	}
}

void NulFile::testFileInputStream($String* str) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	bool exceptionThrown = false;
	$var($FileInputStream, is, nullptr);
	try {
		$assign(is, $new($FileInputStream, str));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "FileInputStream constructor should throw FileNotFoundException"_s);
	}
	if (is != nullptr) {
		$throwNew($RuntimeException, "FileInputStream constructor should fail"_s);
	}
	exceptionThrown = false;
	$assign(is, nullptr);
	try {
		$assign(is, $new($FileInputStream, $$new($File, str)));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "FileInputStream constructor should throw FileNotFoundException"_s);
	}
	if (is != nullptr) {
		$throwNew($RuntimeException, "FileInputStream constructor should fail"_s);
	}
}

void NulFile::testFileOutputStream($String* str) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	bool exceptionThrown = false;
	$var($FileOutputStream, os, nullptr);
	try {
		$assign(os, $new($FileOutputStream, str));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "FileOutputStream constructor should throw FileNotFoundException"_s);
	}
	if (os != nullptr) {
		$throwNew($RuntimeException, "FileOutputStream constructor should fail"_s);
	}
	exceptionThrown = false;
	$assign(os, nullptr);
	try {
		$assign(os, $new($FileOutputStream, $$new($File, str)));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "FileOutputStream constructor should throw FileNotFoundException"_s);
	}
	if (os != nullptr) {
		$throwNew($RuntimeException, "FileOutputStream constructor should fail"_s);
	}
}

void NulFile::testRandomAccessFile($String* str) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	bool exceptionThrown = false;
	$var($RandomAccessFile, raf, nullptr);
	$var($StringArray, modes, $new($StringArray, {
		"r"_s,
		"rw"_s,
		"rws"_s,
		"rwd"_s
	}));
	{
		$var($StringArray, arr$, modes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, mode, arr$->get(i$));
			{
				try {
					$assign(raf, $new($RandomAccessFile, str, mode));
				} catch ($FileNotFoundException&) {
					$var($FileNotFoundException, ex, $catch());
					if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
						exceptionThrown = true;
					}
				}
				if (!exceptionThrown) {
					$throwNew($RuntimeException, "RandomAccessFile constructor should throw FileNotFoundException"_s);
				}
				if (raf != nullptr) {
					$throwNew($RuntimeException, "RandomAccessFile constructor should fail"_s);
				}
				exceptionThrown = false;
				$assign(raf, nullptr);
				try {
					$assign(raf, $new($RandomAccessFile, $$new($File, str), mode));
				} catch ($FileNotFoundException&) {
					$var($FileNotFoundException, ex, $catch());
					if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
						exceptionThrown = true;
					}
				}
				if (!exceptionThrown) {
					$throwNew($RuntimeException, "RandomAccessFile constructor should throw FileNotFoundException"_s);
				}
				if (raf != nullptr) {
					$throwNew($RuntimeException, "RandomAccessFile constructor should fail"_s);
				}
			}
		}
	}
}

void NulFile::test($File* testFile) {
	$init(NulFile);
	test(testFile, false);
	testSerialization(testFile);
}

void NulFile::test($File* testFile, bool derived) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	bool exceptionThrown = false;
	if (testFile == nullptr) {
		$throwNew($RuntimeException, "test file should not be null."_s);
	}
	if ($nc($($nc(testFile)->getPath()))->indexOf((int32_t)NulFile::CHAR_NUL) < 0) {
		$throwNew($RuntimeException, "File path should contain Nul character"_s);
	}
	if ($nc($($nc(testFile)->getAbsolutePath()))->indexOf((int32_t)NulFile::CHAR_NUL) < 0) {
		$throwNew($RuntimeException, "File absolute path should contain Nul character"_s);
	}
	$var($File, derivedAbsFile, $nc(testFile)->getAbsoluteFile());
	if (derived) {
		if ($nc($($nc(derivedAbsFile)->getPath()))->indexOf((int32_t)NulFile::CHAR_NUL) < 0) {
			$throwNew($RuntimeException, "Derived file path should also contain Nul character"_s);
		}
	} else {
		test(derivedAbsFile, true);
	}
	try {
		exceptionThrown = false;
		testFile->getCanonicalPath();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, $$str({"getCanonicalPath() should throw IOException with message \""_s, NulFile::ExceptionMsg, "\""_s}));
	}
	try {
		exceptionThrown = false;
		testFile->getCanonicalFile();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, $$str({"getCanonicalFile() should throw IOException with message \""_s, NulFile::ExceptionMsg, "\""_s}));
	}
	try {
		exceptionThrown = false;
		testFile->toURL();
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, $$str({"toURL() should throw IOException with message \""_s, NulFile::ExceptionMsg, "\""_s}));
	}
	if (testFile->canRead()) {
		$throwNew($RuntimeException, "File should not be readable"_s);
	}
	if (testFile->canWrite()) {
		$throwNew($RuntimeException, "File should not be writable"_s);
	}
	if (testFile->exists()) {
		$throwNew($RuntimeException, "File should not be existed"_s);
	}
	if (testFile->isDirectory()) {
		$throwNew($RuntimeException, "File should not be a directory"_s);
	}
	if (testFile->isFile()) {
		$throwNew($RuntimeException, "File should not be a file"_s);
	}
	if (testFile->isHidden()) {
		$throwNew($RuntimeException, "File should not be hidden"_s);
	}
	if (testFile->lastModified() != (int64_t)0) {
		$throwNew($RuntimeException, "File last modified time should be 0L"_s);
	}
	if (testFile->length() != (int64_t)0) {
		$throwNew($RuntimeException, "File length should be 0L"_s);
	}
	try {
		exceptionThrown = false;
		testFile->createNewFile();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		if ($nc(NulFile::ExceptionMsg)->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, $$str({"createNewFile() should throw IOException with message \""_s, NulFile::ExceptionMsg, "\""_s}));
	}
	if (testFile->delete$()) {
		$throwNew($RuntimeException, "Delete operation should fail"_s);
	}
	if (testFile->list() != nullptr) {
		$throwNew($RuntimeException, "File list() should return null"_s);
	}
	$var($FilenameFilter, fnFilter, $new($NulFile$1));
	if (testFile->list(fnFilter) != nullptr) {
		$throwNew($RuntimeException, "File list(FilenameFilter) should return null"_s);
	}
	if (testFile->listFiles() != nullptr) {
		$throwNew($RuntimeException, "File listFiles() should return null"_s);
	}
	if (testFile->listFiles(fnFilter) != nullptr) {
		$throwNew($RuntimeException, "File listFiles(FilenameFilter) should return null"_s);
	}
	$var($FileFilter, fFilter, $new($NulFile$2));
	if (testFile->listFiles(fFilter) != nullptr) {
		$throwNew($RuntimeException, "File listFiles(FileFilter) should return null"_s);
	}
	if (testFile->mkdir()) {
		$throwNew($RuntimeException, "File should not be able to create directory"_s);
	}
	if (testFile->mkdirs()) {
		$throwNew($RuntimeException, "File should not be able to create directories"_s);
	}
	if (testFile->renameTo($$new($File, "dest"_s))) {
		$throwNew($RuntimeException, "File rename should fail"_s);
	}
	if ($$new($File, "dest"_s)->renameTo(testFile)) {
		$throwNew($RuntimeException, "File rename should fail"_s);
	}
	try {
		exceptionThrown = false;
		testFile->renameTo(nullptr);
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		exceptionThrown = true;
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "File rename should thrown NPE"_s);
	}
	if (testFile->setLastModified(0)) {
		$throwNew($RuntimeException, "File should fail to set last modified time"_s);
	}
	try {
		exceptionThrown = false;
		testFile->setLastModified(-1);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, ex, $catch());
		if ("Negative time"_s->equals($(ex->getMessage()))) {
			exceptionThrown = true;
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "File should fail to set last modified time with message \"Negative time\""_s);
	}
	if (testFile->setReadOnly()) {
		$throwNew($RuntimeException, "File should fail to set read-only"_s);
	}
	if (testFile->setWritable(true, true)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setWritable(true, false)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setWritable(false, true)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setWritable(false, false)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setWritable(false)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setWritable(true)) {
		$throwNew($RuntimeException, "File should fail to set writable"_s);
	}
	if (testFile->setReadable(true, true)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setReadable(true, false)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setReadable(false, true)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setReadable(false, false)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setReadable(false)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setReadable(true)) {
		$throwNew($RuntimeException, "File should fail to set readable"_s);
	}
	if (testFile->setExecutable(true, true)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->setExecutable(true, false)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->setExecutable(false, true)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->setExecutable(false, false)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->setExecutable(false)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->setExecutable(true)) {
		$throwNew($RuntimeException, "File should fail to set executable"_s);
	}
	if (testFile->canExecute()) {
		$throwNew($RuntimeException, "File should not be executable"_s);
	}
	if (testFile->getTotalSpace() != (int64_t)0) {
		$throwNew($RuntimeException, "The total space should be 0L"_s);
	}
	if (testFile->getFreeSpace() != (int64_t)0) {
		$throwNew($RuntimeException, "The free space should be 0L"_s);
	}
	if (testFile->getUsableSpace() != (int64_t)0) {
		$throwNew($RuntimeException, "The usable space should be 0L"_s);
	}
	try {
		exceptionThrown = false;
		testFile->compareTo(($File*)nullptr);
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		exceptionThrown = true;
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "compareTo(null) should throw NPE"_s);
	}
	if ($nc($(testFile->toString()))->indexOf((int32_t)NulFile::CHAR_NUL) < 0) {
		$throwNew($RuntimeException, "File path should contain Nul character"_s);
	}
	try {
		exceptionThrown = false;
		testFile->toPath();
	} catch ($InvalidPathException&) {
		$var($InvalidPathException, ex, $catch());
		exceptionThrown = true;
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, "toPath() should throw InvalidPathException"_s);
	}
}

void NulFile::testSerialization($File* testFile) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	$var($String, path, $nc(testFile)->getPath());
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
		oos->writeObject(testFile);
		oos->close();
		$var($bytes, bytes, baos->toByteArray());
		$var($ByteArrayInputStream, is, $new($ByteArrayInputStream, bytes));
		$var($ObjectInputStream, ois, $new($ObjectInputStream, is));
		$var($File, newFile, $cast($File, ois->readObject()));
		$var($String, newPath, $nc(newFile)->getPath());
		if (!$nc(path)->equals(newPath)) {
			$throwNew($RuntimeException, "Serialization should not change file path"_s);
		}
		test(newFile, false);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$init($System);
		$nc($System::err)->println("Exception happens in testSerialization"_s);
		$nc($System::err)->println($(ex->getMessage()));
	} catch ($ClassNotFoundException&) {
		$var($Exception, ex, $catch());
		$init($System);
		$nc($System::err)->println("Exception happens in testSerialization"_s);
		$nc($System::err)->println($(ex->getMessage()));
	}
}

void NulFile::testTempFile() {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, {
		"x"_s,
		"xx"_s,
		"xxx"_s,
		"xxxx"_s
	}));
	$var($String, shortPrefix, "sp"_s);
	$var($String, prefix, "prefix"_s);
	$var($String, suffix, "suffix"_s);
	$var($File, tmpDir, $new($File, "tmpDir"_s));
	{
		$var($StringArray, arr$, names);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				int32_t length = $nc(name)->length();
				for (int32_t i = 0; i <= length; ++i) {
					$var($StringBuilder, sbName, $new($StringBuilder, name));
					sbName->insert(i, NulFile::CHAR_NUL);
					$var($String, curName, sbName->toString());
					testCreateTempFile(curName, suffix, tmpDir);
					testCreateTempFile(shortPrefix, curName, tmpDir);
					testCreateTempFile(prefix, curName, tmpDir);
					testCreateTempFile(shortPrefix, suffix, $$new($File, curName));
					testCreateTempFile(prefix, suffix, $$new($File, curName));
				}
			}
		}
	}
}

void NulFile::testCreateTempFile($String* prefix, $String* suffix, $File* directory) {
	$init(NulFile);
	$useLocalCurrentObjectStackCache();
	bool exceptionThrown = false;
	bool shortPrefix = ($nc(prefix)->length() < 3);
	if (shortPrefix) {
		try {
			$File::createTempFile(prefix, suffix, directory);
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, ex, $catch());
			$var($String, actual, ex->getMessage());
			$var($String, expected, $str({"Prefix string \""_s, prefix, "\" too short: length must be at least 3"_s}));
			if (actual != nullptr && actual->equals(expected)) {
				exceptionThrown = true;
			}
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			$init($System);
			$nc($System::err)->println("IOException happens in testCreateTempFile"_s);
			$nc($System::err)->println($(ioe->getMessage()));
		}
	} else {
		try {
			$File::createTempFile(prefix, suffix, directory);
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$var($String, err, "Unable to create temporary file"_s);
			bool var$0 = ex->getMessage() != nullptr;
			if (var$0 && $nc($(ex->getMessage()))->startsWith(err)) {
				exceptionThrown = true;
			} else {
				$throwNew($RuntimeException, $$str({"Get IOException with message, "_s, $(ex->getMessage()), ", expect message, "_s, err}));
			}
		}
	}
	if (!exceptionThrown) {
		$throwNew($RuntimeException, $$str({"createTempFile() should throw"_s, (shortPrefix ? " IllegalArgumentException"_s : " IOException"_s)}));
	}
}

NulFile::NulFile() {
}

void clinit$NulFile($Class* class$) {
	$assignStatic(NulFile::ExceptionMsg, "Invalid file path"_s);
}

$Class* NulFile::load$($String* name, bool initialize) {
	$loadClass(NulFile, name, initialize, &_NulFile_ClassInfo_, clinit$NulFile, allocate$NulFile);
	return class$;
}

$Class* NulFile::class$ = nullptr;