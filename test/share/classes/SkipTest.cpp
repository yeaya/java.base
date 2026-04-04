#include <SkipTest.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BLOCK_SIZE

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

$String* SkipTest::javaExe = nullptr;
$String* SkipTest::classpath = nullptr;

void SkipTest::init$() {
}

void SkipTest::main($StringArray* args) {
	$init(SkipTest);
	$useLocalObjectStack();
	$var($ProcessBuilder, pb, $new($ProcessBuilder, $$new($StringArray, {
		SkipTest::javaExe,
		"-classpath"_s,
		SkipTest::classpath,
		"SkipTest$GenerateData"_s
	})));
	$nc($System::out)->printf("cmd: %s%n"_s, $$new($ObjectArray, {$(pb->command())}));
	$var($Process, process, pb->start());
	{
		$var($InputStream, in, $nc(process)->getInputStream());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				int64_t n = $nc(in)->skip(-1);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(-1) should return 0"_s));
				}
				n = in->skip(0);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(0) should return 0"_s));
				}
				int32_t header = 0;
				for (int32_t expectedHeader = u'A'; (header = in->read()) != -1; ++expectedHeader) {
					if (header != expectedHeader) {
						$throwNew($AssertionError, $$of($str({"header char wrong, expected: "_s, $$str(expectedHeader), ", actual: "_s, $$str(header)})));
					}
					int32_t remaining = SkipTest::BLOCK_SIZE;
					do {
						remaining -= in->skip(remaining);
					} while (remaining != 0);
				}
				n = in->skip(1);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(1) at eof should return 0"_s));
				}
			} catch ($Throwable& t$) {
				if (in != nullptr) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (in != nullptr) {
				in->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	{
		$var($InputStream, in, process->getErrorStream());
		$var($Throwable, var$2, nullptr);
		try {
			try {
				int64_t n = $nc(in)->skip(-1);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(-1) should return 0"_s));
				}
				n = in->skip(0);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(0) should return 0"_s));
				}
				int32_t header = 0;
				for (int32_t expectedHeader = u'A'; (header = in->read()) != -1; ++expectedHeader) {
					if (header != expectedHeader) {
						$throwNew($AssertionError, $$of($str({"header char wrong, expected: "_s, $$str(expectedHeader), ", actual: "_s, $$str(header)})));
					}
					int32_t remaining = SkipTest::BLOCK_SIZE;
					do {
						remaining -= in->skip(remaining);
					} while (remaining != 0);
				}
				n = in->skip(1);
				if (n != 0) {
					$throwNew($AssertionError, $of("skip(1) at eof should return 0"_s));
				}
			} catch ($Throwable& t$) {
				if (in != nullptr) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			if (in != nullptr) {
				in->close();
			}
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

void SkipTest::clinit$($Class* clazz) {
	$init($File);
	$assignStatic(SkipTest::javaExe, $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	$assignStatic(SkipTest::classpath, $System::getProperty("java.class.path"_s));
}

SkipTest::SkipTest() {
}

$Class* SkipTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"javaExe", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SkipTest, javaExe)},
		{"classpath", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SkipTest, classpath)},
		{"BLOCK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(SkipTest, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SkipTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SkipTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SkipTest$GenerateData", "SkipTest", "GenerateData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SkipTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SkipTest$GenerateData"
	};
	$loadClass(SkipTest, name, initialize, &classInfo$$, SkipTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SkipTest);
	});
	return class$;
}

$Class* SkipTest::class$ = nullptr;