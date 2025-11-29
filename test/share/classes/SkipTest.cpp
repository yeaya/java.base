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
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

$FieldInfo _SkipTest_FieldInfo_[] = {
	{"javaExe", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SkipTest, javaExe)},
	{"classpath", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SkipTest, classpath)},
	{"BLOCK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(SkipTest, BLOCK_SIZE)},
	{}
};

$MethodInfo _SkipTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SkipTest::*)()>(&SkipTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SkipTest::main)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _SkipTest_InnerClassesInfo_[] = {
	{"SkipTest$GenerateData", "SkipTest", "GenerateData", $STATIC},
	{}
};

$ClassInfo _SkipTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SkipTest",
	"java.lang.Object",
	nullptr,
	_SkipTest_FieldInfo_,
	_SkipTest_MethodInfo_,
	nullptr,
	nullptr,
	_SkipTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SkipTest$GenerateData"
};

$Object* allocate$SkipTest($Class* clazz) {
	return $of($alloc(SkipTest));
}

$String* SkipTest::javaExe = nullptr;
$String* SkipTest::classpath = nullptr;

void SkipTest::init$() {
}

void SkipTest::main($StringArray* args) {
	$init(SkipTest);
	$useLocalCurrentObjectStackCache();
	$var($ProcessBuilder, pb, $new($ProcessBuilder, $$new($StringArray, {
		SkipTest::javaExe,
		"-classpath"_s,
		SkipTest::classpath,
		"SkipTest$GenerateData"_s
	})));
	$nc($System::out)->printf("cmd: %s%n"_s, $$new($ObjectArray, {$($of(pb->command()))}));
	$var($Process, process, pb->start());
	{
		$var($InputStream, in, $nc(process)->getInputStream());
		{
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
							$throwNew($AssertionError, $of($$str({"header char wrong, expected: "_s, $$str(expectedHeader), ", actual: "_s, $$str(header)})));
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
	}
	{
		$var($InputStream, in, $nc(process)->getErrorStream());
		{
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
							$throwNew($AssertionError, $of($$str({"header char wrong, expected: "_s, $$str(expectedHeader), ", actual: "_s, $$str(header)})));
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
}

void clinit$SkipTest($Class* class$) {
	$init($File);
	$assignStatic(SkipTest::javaExe, $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s}));
	$assignStatic(SkipTest::classpath, $System::getProperty("java.class.path"_s));
}

SkipTest::SkipTest() {
}

$Class* SkipTest::load$($String* name, bool initialize) {
	$loadClass(SkipTest, name, initialize, &_SkipTest_ClassInfo_, clinit$SkipTest, allocate$SkipTest);
	return class$;
}

$Class* SkipTest::class$ = nullptr;