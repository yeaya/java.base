#include <MaxPathLength.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

#undef MAX_LENGTH

using $FileArray = $Array<::java::io::File>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;

$FieldInfo _MaxPathLength_FieldInfo_[] = {
	{"sep", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MaxPathLength, sep)},
	{"pathComponent", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MaxPathLength, pathComponent)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MaxPathLength, fileName)},
	{"isWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MaxPathLength, isWindows)},
	{"MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MaxPathLength, MAX_LENGTH)},
	{"counter", "I", nullptr, $PRIVATE | $STATIC, $staticField(MaxPathLength, counter)},
	{}
};

$MethodInfo _MaxPathLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaxPathLength::*)()>(&MaxPathLength::init$))},
	{"getNextName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MaxPathLength::getNextName))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MaxPathLength::main)), "java.lang.Exception"},
	{"testLongPath", "(ILjava/lang/String;Z)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$String*,bool)>(&MaxPathLength::testLongPath)), "java.lang.Exception"},
	{}
};

$ClassInfo _MaxPathLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MaxPathLength",
	"java.lang.Object",
	nullptr,
	_MaxPathLength_FieldInfo_,
	_MaxPathLength_MethodInfo_
};

$Object* allocate$MaxPathLength($Class* clazz) {
	return $of($alloc(MaxPathLength));
}

$String* MaxPathLength::sep = nullptr;
$String* MaxPathLength::pathComponent = nullptr;
$String* MaxPathLength::fileName = nullptr;
bool MaxPathLength::isWindows = false;
int32_t MaxPathLength::counter = 0;

void MaxPathLength::init$() {
}

void MaxPathLength::main($StringArray* args) {
	$init(MaxPathLength);
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if ($nc(osName)->startsWith("Windows"_s)) {
		MaxPathLength::isWindows = true;
	}
	for (int32_t i = 4; i < 7; ++i) {
		$var($String, name, MaxPathLength::fileName);
		while ($nc(name)->length() < MaxPathLength::MAX_LENGTH) {
			testLongPath(i, name, false);
			testLongPath(i, name, true);
			$assign(name, getNextName(name));
		}
	}
	if (MaxPathLength::isWindows) {
		$var($String, name, MaxPathLength::fileName);
		while ($nc(name)->length() < MaxPathLength::MAX_LENGTH) {
			testLongPath(20, name, false);
			testLongPath(20, name, true);
			$assign(name, getNextName(name));
		}
	}
}

$String* MaxPathLength::getNextName($String* fName) {
	$init(MaxPathLength);
	return ($nc(fName)->length() < MaxPathLength::MAX_LENGTH / 2) ? $str({fName, fName}) : $str({fName, "A"_s});
}

void MaxPathLength::testLongPath(int32_t max, $String* fn, bool tryAbsolute) {
	$init(MaxPathLength);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, created, $new($StringArray, max));
	$var($String, pathString, "."_s);
	for (int32_t i = 0; i < max - 1; ++i) {
		$var($String, var$0, $$str({pathString, MaxPathLength::pathComponent}));
		$assign(pathString, $concat(var$0, $$str((MaxPathLength::counter++))));
		created->set(max - 1 - i, pathString);
	}
	$var($File, dirFile, $new($File, pathString));
	$var($File, f, $new($File, $$str({pathString, MaxPathLength::sep, fn})));
	$var($String, tPath, f->getPath());
	if (tryAbsolute) {
		$assign(tPath, f->getCanonicalPath());
	}
	created->set(0, tPath);
	$var($File, fu, $new($File, $$str({pathString, MaxPathLength::sep, $($nc(fn)->toUpperCase())})));
	if (dirFile->exists()) {
		$init($System);
		$nc($System::err)->println("Warning: Test directory structure exists already!"_s);
		return;
	}
	{
		$var($Throwable, var$1, nullptr);
		try {
			$Files::createDirectories($(dirFile->toPath()), $$new($FileAttributeArray, 0));
			if (tryAbsolute) {
				$assign(dirFile, $new($File, $(dirFile->getCanonicalPath())));
			}
			if (!dirFile->isDirectory()) {
				$throwNew($RuntimeException, "File.isDirectory() failed"_s);
			}
			$assign(f, $new($File, tPath));
			if (!f->createNewFile()) {
				$throwNew($RuntimeException, "File.createNewFile() failed"_s);
			}
			if (!f->exists()) {
				$throwNew($RuntimeException, "File.exists() failed"_s);
			}
			if (!f->isFile()) {
				$throwNew($RuntimeException, "File.isFile() failed"_s);
			}
			if (!f->canRead()) {
				$throwNew($RuntimeException, "File.canRead() failed"_s);
			}
			if (!f->canWrite()) {
				$throwNew($RuntimeException, "File.canWrite() failed"_s);
			}
			if (!f->delete$()) {
				$throwNew($RuntimeException, "File.delete() failed"_s);
			}
			$var($FileOutputStream, fos, $new($FileOutputStream, f));
			fos->write(1);
			fos->close();
			if (f->length() != 1) {
				$throwNew($RuntimeException, "File.length() failed"_s);
			}
			int64_t time = $System::currentTimeMillis();
			if (!f->setLastModified(time)) {
				$throwNew($RuntimeException, "File.setLastModified() failed"_s);
			}
			if (f->lastModified() == 0) {
				$throwNew($RuntimeException, "File.lastModified() failed"_s);
			}
			$var($StringArray, list, dirFile->list());
			if (list == nullptr || !$nc(fn)->equals($nc(list)->get(0))) {
				$throwNew($RuntimeException, "File.list() failed"_s);
			}
			$var($FileArray, flist, dirFile->listFiles());
			if (flist == nullptr || !$nc(fn)->equals($($nc($nc(flist)->get(0))->getName()))) {
				$throwNew($RuntimeException, "File.listFiles() failed"_s);
			}
			if (MaxPathLength::isWindows && !$nc($(fu->getCanonicalPath()))->equals($(f->getCanonicalPath()))) {
				$throwNew($RuntimeException, "getCanonicalPath() failed"_s);
			}
			$var($chars, cc, $nc(tPath)->toCharArray());
			cc->set(cc->length - 1, u'B');
			$var($File, nf, $new($File, $$new($String, cc)));
			if (!f->renameTo(nf)) {
				$var($String, abPath, f->getAbsolutePath());
				bool var$2 = !$nc(abPath)->startsWith("\\\\"_s);
				if (var$2 || $nc(abPath)->length() < 1093) {
					$throwNew($RuntimeException, $$str({"File.renameTo() failed for lenth="_s, $$str(abPath->length())}));
				}
			} else {
				if (!nf->canRead()) {
					$throwNew($RuntimeException, "Renamed file is not readable"_s);
				}
				if (!nf->canWrite()) {
					$throwNew($RuntimeException, "Renamed file is not writable"_s);
				}
				if (nf->length() != 1) {
					$throwNew($RuntimeException, "Renamed file\'s size is not correct"_s);
				}
				if (!nf->renameTo(f)) {
					created->set(0, $(nf->getPath()));
				}
			}
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} /*finally*/ {
			for (int32_t i = 0; i < max; ++i) {
				$var($Path, p, ($$new($File, created->get(i)))->toPath());
				try {
					$Files::deleteIfExists(p);
					for (int32_t j = 0; j < 10 && $Files::exists(p, $$new($LinkOptionArray, 0)); ++j) {
						$Thread::sleep(100);
					}
				} catch ($DirectoryNotEmptyException&) {
					$var($DirectoryNotEmptyException, ex, $catch());
					$init($System);
					$nc($System::err)->println($$str({"Dir, "_s, p, ", is not empty"_s}));
					break;
				}
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void clinit$MaxPathLength($Class* class$) {
	$init($File);
	$assignStatic(MaxPathLength::sep, $File::separator);
	$assignStatic(MaxPathLength::pathComponent, $str({MaxPathLength::sep, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"_s}));
	$assignStatic(MaxPathLength::fileName, "areallylongfilenamethatsforsur"_s);
	MaxPathLength::isWindows = false;
	MaxPathLength::counter = 0;
}

MaxPathLength::MaxPathLength() {
}

$Class* MaxPathLength::load$($String* name, bool initialize) {
	$loadClass(MaxPathLength, name, initialize, &_MaxPathLength_ClassInfo_, clinit$MaxPathLength, allocate$MaxPathLength);
	return class$;
}

$Class* MaxPathLength::class$ = nullptr;