#include <GetXSpace.h>
#include <GetXSpace$Allow.h>
#include <GetXSpace$Deny.h>
#include <GetXSpace$DenyFSA.h>
#include <GetXSpace$DenyRead.h>
#include <GetXSpace$Space.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Math.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef DF_PATTERN
#undef FILE_PREFIX
#undef IS_MAC
#undef IS_WIN
#undef OS_NAME

using $GetXSpace$Allow = ::GetXSpace$Allow;
using $GetXSpace$Deny = ::GetXSpace$Deny;
using $GetXSpace$DenyFSA = ::GetXSpace$DenyFSA;
using $GetXSpace$DenyRead = ::GetXSpace$DenyRead;
using $GetXSpace$Space = ::GetXSpace$Space;
using $SecurityManagerArray = $Array<::java::lang::SecurityManager>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

$SecurityManagerArray* GetXSpace::sma = nullptr;
$String* GetXSpace::OS_NAME = nullptr;
bool GetXSpace::IS_MAC = false;
bool GetXSpace::IS_WIN = false;
$Pattern* GetXSpace::DF_PATTERN = nullptr;
int32_t GetXSpace::fail$ = 0;
int32_t GetXSpace::pass$ = 0;
$Throwable* GetXSpace::first = nullptr;
$String* GetXSpace::FILE_PREFIX = nullptr;

void GetXSpace::init$() {
}

void GetXSpace::reset() {
	$init(GetXSpace);
	GetXSpace::fail$ = 0;
	GetXSpace::pass$ = 0;
	$assignStatic(GetXSpace::first, nullptr);
}

void GetXSpace::pass() {
	$init(GetXSpace);
	++GetXSpace::pass$;
}

void GetXSpace::fail($String* p) {
	$init(GetXSpace);
	setFirst(p);
	$nc($System::err)->format("FAILED: %s%n"_s, $$new($ObjectArray, {p}));
	++GetXSpace::fail$;
}

void GetXSpace::fail($String* p, int64_t exp, $String* cmp, int64_t got) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($String, s, $String::format("\'%s\': %d %s %d"_s, $$new($ObjectArray, {
		p,
		$($Long::valueOf(exp)),
		cmp,
		$($Long::valueOf(got))
	})));
	setFirst(s);
	$nc($System::err)->format("FAILED: %s%n"_s, $$new($ObjectArray, {s}));
	++GetXSpace::fail$;
}

void GetXSpace::fail($String* p, $Class* ex) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($String, s, $String::format("\'%s\': expected %s - FAILED%n"_s, $$new($ObjectArray, {
		p,
		$($nc(ex)->getName())
	})));
	setFirst(s);
	$nc($System::err)->format("FAILED: %s%n"_s, $$new($ObjectArray, {s}));
	++GetXSpace::fail$;
}

void GetXSpace::setFirst($String* s) {
	$init(GetXSpace);
	if (GetXSpace::first == nullptr) {
		$assignStatic(GetXSpace::first, $new($RuntimeException, s));
	}
}

$ArrayList* GetXSpace::space($String* f) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($ArrayList, al, $new($ArrayList));
	$var($String, cmd, $str({"df -k -P"_s, (f == nullptr ? ""_s : $$str({" "_s, f}))}));
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($Process, p, $$nc($Runtime::getRuntime())->exec(cmd));
	{
		$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(p)->getInputStream()))));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($String, s, nullptr);
				int32_t i = 0;
				while (($assign(s, in->readLine())) != nullptr) {
					if (i++ == 0) {
						continue;
					}
					sb->append(s)->append("\n"_s);
				}
			} catch ($Throwable& t$) {
				try {
					in->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			in->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc($System::out)->println(sb);
	$var($Matcher, m, $nc(GetXSpace::DF_PATTERN)->matcher(sb));
	int32_t j = 0;
	while (j < sb->length()) {
		if ($nc(m)->find(j)) {
			if (!$$nc(m->group(1))->equals("swap"_s)) {
				$var($String, name, f);
				if (name == nullptr) {
					$assign(name, GetXSpace::IS_WIN ? m->group(1) : m->group(4));
				}
				$var($String, var$2, m->group(2));
				al->add($$new($GetXSpace$Space, var$2, $(m->group(3)), name));
				;
			}
			j = m->end() + 1;
		} else {
			$throwNew($RuntimeException, $$str({"unrecognized df output format: charAt("_s, $$str(j), ") = \'"_s, $$str(sb->charAt(j)), "\'"_s}));
		}
	}
	if (al->size() == 0) {
		$var($String, name, f == nullptr ? ""_s : f);
		al->add($$new($GetXSpace$Space, "0"_s, "0"_s, name));
	}
	return al;
}

void GetXSpace::tryCatch($GetXSpace$Space* s) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$nc($System::out)->format("%s:%n"_s, $$new($ObjectArray, {$($nc(s)->name())}));
	$var($File, f, $new($File, $(s->name())));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if ($instanceOf($GetXSpace$Deny, sm)) {
		$var($String, fmt, "  %14s: \"%s\" thrown as expected%n"_s);
		try {
			f->getTotalSpace();
			$load($SecurityException);
			fail($(s->name()), $SecurityException::class$);
		} catch ($SecurityException& x) {
			$System::out->format(fmt, $$new($ObjectArray, {
				"getTotalSpace"_s,
				x
			}));
			pass();
		}
		try {
			f->getFreeSpace();
			$load($SecurityException);
			fail($(s->name()), $SecurityException::class$);
		} catch ($SecurityException& x) {
			$System::out->format(fmt, $$new($ObjectArray, {
				"getFreeSpace"_s,
				x
			}));
			pass();
		}
		try {
			f->getUsableSpace();
			$load($SecurityException);
			fail($(s->name()), $SecurityException::class$);
		} catch ($SecurityException& x) {
			$System::out->format(fmt, $$new($ObjectArray, {
				"getUsableSpace"_s,
				x
			}));
			pass();
		}
	}
}

void GetXSpace::compare($GetXSpace$Space* s) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($File, f, $new($File, $($nc(s)->name())));
	int64_t ts = f->getTotalSpace();
	int64_t fs = f->getFreeSpace();
	int64_t us = f->getUsableSpace();
	$nc($System::out)->format("%s:%n"_s, $$new($ObjectArray, {$(s->name())}));
	$var($String, fmt, "  %-4s total= %12d free = %12d usable = %12d%n"_s);
	$System::out->format(fmt, $$new($ObjectArray, {
		"df"_s,
		$($Long::valueOf(s->total())),
		$($Integer::valueOf(0)),
		$($Long::valueOf(s->free()))
	}));
	$System::out->format(fmt, $$new($ObjectArray, {
		"getX"_s,
		$($Long::valueOf(ts)),
		$($Long::valueOf(fs)),
		$($Long::valueOf(us))
	}));
	if (ts != s->total()) {
		int64_t blockSize = 1;
		int64_t numBlocks = 0;
		try {
			$var($FileStore, fileStore, $Files::getFileStore($(f->toPath())));
			blockSize = $nc(fileStore)->getBlockSize();
			numBlocks = $div(fileStore->getTotalSpace(), blockSize);
		} catch ($IOException& e) {
			$throwNew($RuntimeException, e);
		}
		if (!GetXSpace::IS_MAC || blockSize != 512 || numBlocks % 2 == 0 || ts - s->total() != 512) {
			$var($String, var$0, s->name());
			fail(var$0, s->total(), "!="_s, ts);
		}
	} else {
		pass();
	}
	int64_t tsp = (!GetXSpace::IS_WIN ? us : fs);
	if (!s->woomFree(tsp)) {
		$var($String, var$1, s->name());
		fail(var$1, s->free(), "??"_s, tsp);
	} else {
		pass();
	}
	if (fs > s->total()) {
		$var($String, var$2, s->name());
		fail(var$2, s->total(), ">"_s, fs);
	} else {
		pass();
	}
	if (us > s->total()) {
		$var($String, var$3, s->name());
		fail(var$3, s->total(), ">"_s, us);
	} else {
		pass();
	}
}

void GetXSpace::compareZeroNonExist() {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($File, f, nullptr);
	while (true) {
		$assign(f, $new($File, $$str({GetXSpace::FILE_PREFIX, $$str($Math::random())})));
		if (f->exists()) {
			continue;
		}
		break;
	}
	$var($longs, s, $new($longs, {
		$nc(f)->getTotalSpace(),
		$nc(f)->getFreeSpace(),
		$nc(f)->getUsableSpace()
	}));
	for (int32_t i = 0; i < s->length; ++i) {
		if (s->get(i) != 0) {
			fail($(f->getName()), s->get(i), "!="_s, 0);
		} else {
			pass();
		}
	}
}

void GetXSpace::compareZeroExist() {
	$init(GetXSpace);
	$useLocalObjectStack();
	try {
		$var($File, f, $File::createTempFile("tmp"_s, nullptr, $$new($File, "."_s)));
		$var($longs, s, $new($longs, {
			$nc(f)->getTotalSpace(),
			$nc(f)->getFreeSpace(),
			$nc(f)->getUsableSpace()
		}));
		for (int32_t i = 0; i < s->length; ++i) {
			if (s->get(i) == 0) {
				fail($(f->getName()), s->get(i), "=="_s, 0);
			} else {
				pass();
			}
		}
	} catch ($IOException& x) {
		x->printStackTrace();
		fail("Couldn\'t create temp file for test"_s);
	}
}

int32_t GetXSpace::testFile($Path* dir) {
	$init(GetXSpace);
	$useLocalObjectStack();
	$var($String, dirName, $nc(dir)->toString());
	$nc($System::out)->format("--- Testing %s%n"_s, $$new($ObjectArray, {dirName}));
	$var($ArrayList, l, nullptr);
	try {
		$assign(l, space(dirName));
	} catch ($IOException& x) {
		$throwNew($RuntimeException, $$str({dirName, " can\'t get file system information"_s}), x);
	}
	compare($$cast($GetXSpace$Space, $nc(l)->get(0)));
	if (GetXSpace::fail$ != 0) {
		$nc($System::err)->format("%d tests: %d failure(s); first: %s%n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(GetXSpace::fail$ + GetXSpace::pass$)),
			$($Integer::valueOf(GetXSpace::fail$)),
			GetXSpace::first
		}));
	} else {
		$System::out->format("all %d tests passed%n"_s, $$new($ObjectArray, {$($Integer::valueOf(GetXSpace::fail$ + GetXSpace::pass$))}));
	}
	return GetXSpace::fail$ != 0 ? 1 : 0;
}

int32_t GetXSpace::testDF() {
	$init(GetXSpace);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc($System::out)->println("--- Testing df"_s);
	$var($ArrayList, l, nullptr);
	try {
		$assign(l, space(nullptr));
	} catch ($IOException& x) {
		$throwNew($RuntimeException, "can\'t get file system information"_s, x);
	}
	if ($nc(l)->size() == 0) {
		$throwNew($RuntimeException, "no partitions?"_s);
	}
	for (int32_t i = 0; i < $nc(GetXSpace::sma)->length; ++i) {
		$System::setSecurityManager(GetXSpace::sma->get(i));
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (GetXSpace::sma->get(i) != nullptr && sm == nullptr) {
			$throwNew($RuntimeException, "Test configuration error  - can\'t set security manager"_s);
		}
		$System::out->format("%nSecurityManager = %s%n"_s, $$new($ObjectArray, {(sm == nullptr ? "null"_s : $(sm->getClass()->getName()))}));
		{
			$var($Iterator, i$, l->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GetXSpace$Space, s, $cast($GetXSpace$Space, i$->next()));
				if ($instanceOf($GetXSpace$Deny, sm)) {
					tryCatch(s);
				} else {
					compare(s);
					compareZeroNonExist();
					compareZeroExist();
				}
			}
		}
	}
	$System::setSecurityManager(nullptr);
	if (GetXSpace::fail$ != 0) {
		$nc($System::err)->format("%d tests: %d failure(s); first: %s%n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(GetXSpace::fail$ + GetXSpace::pass$)),
			$($Integer::valueOf(GetXSpace::fail$)),
			GetXSpace::first
		}));
	} else {
		$System::out->format("all %d tests passed%n"_s, $$new($ObjectArray, {$($Integer::valueOf(GetXSpace::fail$ + GetXSpace::pass$))}));
	}
	return GetXSpace::fail$ != 0 ? 1 : 0;
}

void GetXSpace::perms($File* file, bool allow) {
	$init(GetXSpace);
	$nc(file)->setExecutable(allow, false);
	file->setReadable(allow, false);
	file->setWritable(allow, false);
}

void GetXSpace::deny($Path* path) {
	$init(GetXSpace);
	perms($($nc(path)->toFile()), false);
}

void GetXSpace::allow($Path* path) {
	$init(GetXSpace);
	perms($($nc(path)->toFile()), true);
}

void GetXSpace::main($StringArray* args) {
	$init(GetXSpace);
	$useLocalObjectStack();
	int32_t failedTests = testDF();
	reset();
	$var($Path, tmpDir, $Files::createTempDirectory(nullptr, $$new($FileAttributeArray, 0)));
	$var($Path, tmpSubdir, $Files::createTempDirectory(tmpDir, nullptr, $$new($FileAttributeArray, 0)));
	$var($Path, tmpFile, $Files::createTempFile(tmpSubdir, "foo"_s, nullptr, $$new($FileAttributeArray, 0)));
	deny(tmpSubdir);
	failedTests += testFile(tmpFile);
	allow(tmpSubdir);
	$Files::delete$(tmpFile);
	$Files::delete$(tmpSubdir);
	$Files::delete$(tmpDir);
	if (failedTests > 0) {
		$throwNew($RuntimeException, $$str({$$str(failedTests), " test(s) failed"_s}));
	}
}

void GetXSpace::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(GetXSpace::sma, $new($SecurityManagerArray, {
		nullptr,
		$$new($GetXSpace$Allow),
		$$new($GetXSpace$DenyFSA),
		$$new($GetXSpace$DenyRead)
	}));
	$assignStatic(GetXSpace::OS_NAME, $System::getProperty("os.name"_s));
	GetXSpace::IS_MAC = $nc(GetXSpace::OS_NAME)->startsWith("Mac"_s);
	GetXSpace::IS_WIN = GetXSpace::OS_NAME->startsWith("Windows"_s);
	$assignStatic(GetXSpace::DF_PATTERN, $Pattern::compile("([^\\s]+)\\s+(\\d+)\\s+\\d+\\s+(\\d+)\\s+\\d+%\\s+([^\\s].*)\n"_s));
	GetXSpace::fail$ = 0;
	GetXSpace::pass$ = 0;
	$assignStatic(GetXSpace::FILE_PREFIX, "/getSpace."_s);
}

GetXSpace::GetXSpace() {
}

$Class* GetXSpace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sma", "[Ljava/lang/SecurityManager;", nullptr, $PRIVATE | $STATIC, $staticField(GetXSpace, sma)},
		{"OS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GetXSpace, OS_NAME)},
		{"IS_MAC", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GetXSpace, IS_MAC)},
		{"IS_WIN", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GetXSpace, IS_WIN)},
		{"DF_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GetXSpace, DF_PATTERN)},
		{"fail", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetXSpace, fail$)},
		{"pass", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetXSpace, pass$)},
		{"first", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC, $staticField(GetXSpace, first)},
		{"FILE_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(GetXSpace, FILE_PREFIX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetXSpace, init$, void)},
		{"allow", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, allow, void, $Path*), "java.io.IOException"},
		{"compare", "(LGetXSpace$Space;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, compare, void, $GetXSpace$Space*)},
		{"compareZeroExist", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, compareZeroExist, void)},
		{"compareZeroNonExist", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, compareZeroNonExist, void)},
		{"deny", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, deny, void, $Path*), "java.io.IOException"},
		{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(GetXSpace, fail, void, $String*)},
		{"fail", "(Ljava/lang/String;JLjava/lang/String;J)V", nullptr, $STATIC, $staticMethod(GetXSpace, fail, void, $String*, int64_t, $String*, int64_t)},
		{"fail", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, fail, void, $String*, $Class*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetXSpace, main, void, $StringArray*), "java.lang.Exception"},
		{"pass", "()V", nullptr, $STATIC, $staticMethod(GetXSpace, pass, void)},
		{"perms", "(Ljava/io/File;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, perms, void, $File*, bool), "java.io.IOException"},
		{"reset", "()V", nullptr, $STATIC, $staticMethod(GetXSpace, reset, void)},
		{"setFirst", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, setFirst, void, $String*)},
		{"space", "(Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;)Ljava/util/ArrayList<LGetXSpace$Space;>;", $PRIVATE | $STATIC, $staticMethod(GetXSpace, space, $ArrayList*, $String*), "java.io.IOException"},
		{"testDF", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, testDF, int32_t)},
		{"testFile", "(Ljava/nio/file/Path;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, testFile, int32_t, $Path*)},
		{"tryCatch", "(LGetXSpace$Space;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetXSpace, tryCatch, void, $GetXSpace$Space*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetXSpace$DenyRead", "GetXSpace", "DenyRead", $PRIVATE | $STATIC},
		{"GetXSpace$DenyFSA", "GetXSpace", "DenyFSA", $PRIVATE | $STATIC},
		{"GetXSpace$Deny", "GetXSpace", "Deny", $PRIVATE | $STATIC},
		{"GetXSpace$Allow", "GetXSpace", "Allow", $PRIVATE | $STATIC},
		{"GetXSpace$Space", "GetXSpace", "Space", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetXSpace",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetXSpace$DenyRead,GetXSpace$DenyFSA,GetXSpace$Deny,GetXSpace$Allow,GetXSpace$Space"
	};
	$loadClass(GetXSpace, name, initialize, &classInfo$$, GetXSpace::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetXSpace);
	});
	return class$;
}

$Class* GetXSpace::class$ = nullptr;