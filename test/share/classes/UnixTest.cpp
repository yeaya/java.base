#include <UnixTest.h>

#include <ProcessTest.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ProcessTest = ::ProcessTest;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

$MethodInfo _UnixTest_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(UnixTest::*)($File*)>(&UnixTest::init$)), "java.io.IOException"},
	{"createScript", "(Ljava/io/File;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UnixTest_ClassInfo_ = {
	$ACC_SUPER,
	"UnixTest",
	"ProcessTest",
	nullptr,
	nullptr,
	_UnixTest_MethodInfo_
};

$Object* allocate$UnixTest($Class* clazz) {
	return $of($alloc(UnixTest));
}

void UnixTest::init$($File* script) {
	$useLocalCurrentObjectStackCache();
	$ProcessTest::init$();
	$nc(script)->deleteOnExit();
	createScript(script);
	$set(this, bldr, $new($ProcessBuilder, $$new($StringArray, {$(script->getCanonicalPath())})));
	$nc(this->bldr)->redirectErrorStream(true);
	$nc(this->bldr)->directory($$new($File, "."_s));
	$set(this, p, $nc(this->bldr)->start());
}

void UnixTest::createScript($File* processTrapScript) {
	$useLocalCurrentObjectStackCache();
	$nc(processTrapScript)->deleteOnExit();
	{
		$var($FileWriter, fstream, $new($FileWriter, processTrapScript));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($BufferedWriter, out, $new($BufferedWriter, fstream));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								out->write("#!/bin/bash\necho \\\"ProcessTrap.sh started\\\"\nwhile :\ndo\n    sleep 1;\ndone\n"_s);
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									out->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							out->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fstream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fstream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	processTrapScript->setExecutable(true, true);
}

UnixTest::UnixTest() {
}

$Class* UnixTest::load$($String* name, bool initialize) {
	$loadClass(UnixTest, name, initialize, &_UnixTest_ClassInfo_, allocate$UnixTest);
	return class$;
}

$Class* UnixTest::class$ = nullptr;