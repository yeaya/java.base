#include <UnixTest.h>
#include <ProcessTest.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

using $ProcessTest = ::ProcessTest;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

void UnixTest::init$($File* script) {
	$useLocalObjectStack();
	$ProcessTest::init$();
	$nc(script)->deleteOnExit();
	createScript(script);
	$set(this, bldr, $new($ProcessBuilder, $$new($StringArray, {$(script->getCanonicalPath())})));
	this->bldr->redirectErrorStream(true);
	this->bldr->directory($$new($File, "."_s));
	$set(this, p, this->bldr->start());
}

void UnixTest::createScript($File* processTrapScript) {
	$useLocalObjectStack();
	$nc(processTrapScript)->deleteOnExit();
	{
		$var($FileWriter, fstream, $new($FileWriter, processTrapScript));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($BufferedWriter, out, $new($BufferedWriter, fstream));
				$var($Throwable, var$1, nullptr);
				try {
					try {
						out->write("#!/bin/bash\necho \\\"ProcessTrap.sh started\\\"\nwhile :\ndo\n    sleep 1;\ndone\n"_s);
					} catch ($Throwable& t$) {
						try {
							out->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					out->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			} catch ($Throwable& t$) {
				try {
					fstream->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			fstream->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	processTrapScript->setExecutable(true, true);
}

UnixTest::UnixTest() {
}

$Class* UnixTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(UnixTest, init$, void, $File*), "java.io.IOException"},
		{"createScript", "(Ljava/io/File;)V", nullptr, 0, $virtualMethod(UnixTest, createScript, void, $File*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UnixTest",
		"ProcessTest",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UnixTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixTest);
	});
	return class$;
}

$Class* UnixTest::class$ = nullptr;