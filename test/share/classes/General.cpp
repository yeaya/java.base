#include <General.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef NOFOLLOW_LINKS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Hashtable = ::java::util::Hashtable;

$FieldInfo _General_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PUBLIC | $STATIC, $staticField(General, debug)},
	{"win32", "Z", nullptr, $PRIVATE | $STATIC, $staticField(General, win32)},
	{"gensymCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(General, gensymCounter)},
	{"userDir", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(General, userDir)},
	{"workSubDir", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(General, workSubDir)},
	{"baseDir", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(General, baseDir)},
	{"relative", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(General, relative)},
	{"checked", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(General, checked)},
	{}
};

$MethodInfo _General_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(General, init$, void)},
	{"check", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(General, check, void, $String*, $String*), "java.io.IOException"},
	{"checkNames", "(IZLjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(General, checkNames, void, int32_t, bool, $String*, $String*), "java.lang.Exception"},
	{"checkSlash", "(IZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(General, checkSlash, void, int32_t, bool, $String*, $String*, $String*), "java.lang.Exception"},
	{"checkSlashes", "(IZLjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(General, checkSlashes, void, int32_t, bool, $String*, $String*), "java.lang.Exception"},
	{"ensureNon", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(General, ensureNon, void, $String*)},
	{"findNon", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, findNon, $String*, $String*)},
	{"findSomeDir", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, findSomeDir, $String*, $String*, bool)},
	{"findSomeFile", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, findSomeFile, $String*, $String*, $String*, $StringArray*)},
	{"findSomeFile", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, findSomeFile, $String*, $String*, bool)},
	{"gensym", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, gensym, $String*)},
	{"initTestData", "(I)V", nullptr, $PROTECTED | $STATIC, $staticMethod(General, initTestData, void, int32_t), "java.io.IOException"},
	{"isSlash", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(General, isSlash, bool, char16_t)},
	{"pathConcat", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, pathConcat, $String*, $String*, $String*)},
	{"trimTrailingSlashes", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(General, trimTrailingSlashes, $String*, $String*)},
	{}
};

$ClassInfo _General_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"General",
	"java.lang.Object",
	nullptr,
	_General_FieldInfo_,
	_General_MethodInfo_
};

$Object* allocate$General($Class* clazz) {
	return $of($alloc(General));
}

bool General::debug = false;
bool General::win32 = false;
int32_t General::gensymCounter = 0;
$String* General::userDir = nullptr;
$String* General::workSubDir = nullptr;
$String* General::baseDir = nullptr;
$String* General::relative = nullptr;
$Hashtable* General::checked = nullptr;

void General::init$() {
}

$String* General::gensym() {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "x."_s);
	return $concat(var$0, $$str(++General::gensymCounter));
}

void General::initTestData(int32_t depth) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($File, parent, $new($File, $$str({General::userDir, $File::separator, General::workSubDir})));
	if (!parent->mkdir()) {
		$throwNew($IOException, $$str({"Fail to create directory: "_s, parent}));
	}
	for (int32_t i = 0; i < depth; ++i) {
		$var($File, tmp, $new($File, parent, $(gensym())));
		tmp->createNewFile();
		$assign(tmp, $new($File, parent, $(gensym())));
		if (tmp->mkdir()) {
			$assign(parent, tmp);
		} else {
			$throwNew($IOException, $$str({"Fail to create directory, "_s, tmp}));
		}
	}
	$assignStatic(General::baseDir, $nc(parent)->getAbsolutePath());
	$assignStatic(General::relative, $nc(General::baseDir)->substring($nc(General::userDir)->length() + 1));
}

$String* General::findSomeFile($String* dir, $String* subdir, $StringArray* dl) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(dl)->length; ++i) {
		$var($File, f, $new($File, subdir, dl->get(i)));
		$var($File, df, $new($File, dir, $(f->getPath())));
		$init($LinkOption);
		if ($Files::isRegularFile($(df->toPath()), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
			return f->getPath();
		}
	}
	for (int32_t i = 0; i < $nc(dl)->length; ++i) {
		$var($File, f, ($nc(subdir)->length() == 0) ? $new($File, dl->get(i)) : $new($File, subdir, dl->get(i)));
		$var($File, df, $new($File, dir, $($nc(f)->getPath())));
		$init($LinkOption);
		if ($Files::isDirectory($(df->toPath()), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
			$var($StringArray, dl2, df->list());
			if (dl2 != nullptr) {
				$var($String, ff, findSomeFile(dir, $($nc(f)->getPath()), dl2));
				if (ff != nullptr) {
					return ff;
				}
			}
		}
	}
	return nullptr;
}

$String* General::findSomeFile($String* dir, bool create) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$var($File, d, $new($File, dir));
	$var($StringArray, dl, d->list());
	if (dl == nullptr) {
		$throwNew($RuntimeException, $$str({"Can\'t list "_s, dir}));
	}
	for (int32_t i = 0; i < $nc(dl)->length; ++i) {
		$var($File, f, $new($File, dir, dl->get(i)));
		$init($LinkOption);
		if ($Files::isRegularFile($(f->toPath()), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
			return dl->get(i);
		}
	}
	$var($String, f, findSomeFile(dir, ""_s, dl));
	if (f != nullptr) {
		return f;
	}
	if (create) {
		$var($File, nf, $new($File, d, $(gensym())));
		$var($OutputStream, os, nullptr);
		try {
			$assign(os, $new($FileOutputStream, nf));
			os->close();
		} catch ($IOException& x) {
			$throwNew($RuntimeException, $$str({"Can\'t create a file in "_s, dir}));
		}
		return nf->getName();
	}
	return nullptr;
}

$String* General::findSomeDir($String* dir, bool create) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$var($File, d, $new($File, dir));
	$var($StringArray, dl, d->list());
	if (dl == nullptr) {
		$throwNew($RuntimeException, $$str({"Can\'t list "_s, dir}));
	}
	for (int32_t i = 0; i < $nc(dl)->length; ++i) {
		$var($File, f, $new($File, d, dl->get(i)));
		$init($LinkOption);
		if ($Files::isDirectory($(f->toPath()), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
			$var($StringArray, dl2, f->list());
			if (dl2 == nullptr || $nc(dl2)->length >= 250) {
				continue;
			}
			return dl->get(i);
		}
	}
	if (create) {
		$var($File, sd, $new($File, d, $(gensym())));
		if (sd->mkdir()) {
			return sd->getName();
		}
	}
	return nullptr;
}

$String* General::findNon($String* dir) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$var($File, d, $new($File, dir));
	$var($StringArray, x, $new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s
	}));
	for (int32_t i = 0; i < x->length; ++i) {
		$var($File, f, $new($File, d, x->get(i)));
		if (!f->exists()) {
			return x->get(i);
		}
	}
	for (int32_t i = 0; i < 1024; ++i) {
		$var($String, n, $str({"xx"_s, $($Integer::toString(i))}));
		$var($File, f, $new($File, d, n));
		if (!f->exists()) {
			return n;
		}
	}
	$throwNew($RuntimeException, $$str({"Can\'t find a non-existent file in "_s, dir}));
}

void General::ensureNon($String* fn) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	if (($$new($File, fn))->exists()) {
		$throwNew($RuntimeException, $$str({"Test path "_s, fn, " exists"_s}));
	}
}

bool General::isSlash(char16_t x) {
	$init(General);
	$init($File);
	if (x == $File::separatorChar) {
		return true;
	}
	if (General::win32 && (x == u'/')) {
		return true;
	}
	return false;
}

$String* General::trimTrailingSlashes($String* s) {
	$init(General);
	int32_t n = $nc(s)->length();
	if (n == 0) {
		return s;
	}
	--n;
	while ((n > 0) && isSlash(s->charAt(n))) {
		if ((n >= 1) && s->charAt(n - 1) == u':') {
			break;
		}
		--n;
	}
	return s->substring(0, n + 1);
}

$String* General::pathConcat($String* a, $String* b) {
	$init(General);
	if ($nc(a)->length() == 0) {
		return b;
	}
	if ($nc(b)->length() == 0) {
		return a;
	}
	bool var$1 = isSlash($nc(a)->charAt(a->length() - 1));
	bool var$0 = var$1 || isSlash($nc(b)->charAt(0));
	if (var$0 || (General::win32 && ($nc(a)->charAt(a->length() - 1) == u':'))) {
		return $str({a, b});
	} else {
		$init($File);
		return $str({a, $$str($File::separatorChar), b});
	}
}

void General::check($String* answer, $String* path) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	$var($String, ans, trimTrailingSlashes(answer));
	if ($nc(path)->length() == 0) {
		return;
	}
	if ($nc(General::checked)->get(path) != nullptr) {
		$nc($System::err)->println($$str({"DUP "_s, path}));
		return;
	}
	$nc(General::checked)->put(path, path);
	$var($String, cpath, nullptr);
	try {
		$var($File, f, $new($File, path));
		$assign(cpath, f->getCanonicalPath());
		bool var$1 = f->exists();
		bool var$0 = var$1 && f->isFile();
		if (var$0 && f->canRead()) {
			$var($InputStream, in, $new($FileInputStream, path));
			in->close();
			$var($RandomAccessFile, raf, $new($RandomAccessFile, path, "r"_s));
			raf->close();
		}
	} catch ($IOException& x) {
		$nc($System::err)->println($$str({ans, " <-- "_s, path, " ==> "_s, x}));
		if (General::debug) {
			return;
		} else {
			$throw(x);
		}
	}
	if ($nc(cpath)->equals(ans)) {
		$nc($System::err)->println($$str({ans, " <== "_s, path}));
	} else {
		$nc($System::err)->println($$str({ans, " <-- "_s, path, " ==> "_s, cpath, " MISMATCH"_s}));
		if (!General::debug) {
			$throwNew($RuntimeException, $$str({"Mismatch: "_s, path, " ==> "_s, cpath, ", should be "_s, ans}));
		}
	}
}

void General::checkSlash(int32_t depth, bool create, $String* ans, $String* ask, $String* slash) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	check(ans, $$str({ask, slash}));
	$init($File);
	checkNames(depth, create, $nc(ans)->endsWith($File::separator) ? ans : $$str({ans, $File::separator}), $$str({ask, slash}));
}

void General::checkSlashes(int32_t depth, bool create, $String* ans, $String* ask) {
	$init(General);
	check(ans, ask);
	if (depth == 0) {
		return;
	}
	checkSlash(depth, create, ans, ask, "/"_s);
	checkSlash(depth, create, ans, ask, "//"_s);
	checkSlash(depth, create, ans, ask, "///"_s);
	if (General::win32) {
		checkSlash(depth, create, ans, ask, "\\"_s);
		checkSlash(depth, create, ans, ask, "\\\\"_s);
		checkSlash(depth, create, ans, ask, "\\/"_s);
		checkSlash(depth, create, ans, ask, "/\\"_s);
		checkSlash(depth, create, ans, ask, "\\\\\\"_s);
	}
}

void General::checkNames(int32_t depth, bool create, $String* ans, $String* ask) {
	$init(General);
	$useLocalCurrentObjectStackCache();
	int32_t d = depth - 1;
	$var($File, f, $new($File, ans));
	$var($String, n, nullptr);
	if (f->exists()) {
		$init($LinkOption);
		bool var$0 = $Files::isDirectory($(f->toPath()), $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}));
		if (var$0 && f->list() != nullptr) {
			if (($assign(n, findSomeFile(ans, create))) != nullptr) {
				checkSlashes(d, create, $$str({ans, n}), $$str({ask, n}));
			}
			if (($assign(n, findSomeDir(ans, create))) != nullptr) {
				checkSlashes(d, create, $$str({ans, n}), $$str({ask, n}));
			}
		}
		$assign(n, findNon(ans));
		checkSlashes(d, create, $$str({ans, n}), $$str({ask, n}));
	} else {
		$assign(n, $str({"foo"_s, $$str(depth)}));
		checkSlashes(d, create, $$str({ans, n}), $$str({ask, n}));
	}
	checkSlashes(d, create, $(trimTrailingSlashes(ans)), $$str({ask, "."_s}));
	if (($assign(n, f->getParent())) != nullptr) {
		$var($String, n2, nullptr);
		bool var$1 = General::win32 && (($assign(n2, $nc($(f->getParentFile()))->getParent())) != nullptr);
		if (var$1 && $nc(n2)->equals("\\\\"_s)) {
			checkSlashes(d, create, ans, $$str({ask, ".."_s}));
		} else {
			checkSlashes(d, create, n, $$str({ask, ".."_s}));
		}
	} else {
		if (General::win32) {
			checkSlashes(d, create, ans, $$str({ask, ".."_s}));
		} else {
			$var($File, thisPath, $new($File, ask));
			$var($File, nextPath, $new($File, $$str({ask, ".."_s})));
			if (!$nc($(thisPath->getCanonicalPath()))->equals($(nextPath->getCanonicalPath()))) {
				checkSlashes(d, create, $$str({ans, ".."_s}), $$str({ask, ".."_s}));
			}
		}
	}
}

void clinit$General($Class* class$) {
	$assignStatic(General::workSubDir, "tmp"_s);
	General::debug = false;
	$init($File);
	General::win32 = ($File::separatorChar == u'\\');
	General::gensymCounter = 0;
	$assignStatic(General::userDir, $System::getProperty("user.dir"_s));
	$assignStatic(General::baseDir, nullptr);
	$assignStatic(General::relative, nullptr);
	$assignStatic(General::checked, $new($Hashtable));
}

General::General() {
}

$Class* General::load$($String* name, bool initialize) {
	$loadClass(General, name, initialize, &_General_ClassInfo_, clinit$General, allocate$General);
	return class$;
}

$Class* General::class$ = nullptr;