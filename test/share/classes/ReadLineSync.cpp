#include <ReadLineSync.h>
#include <ReadLineSync$BufferedReaderConsumer.h>
#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/FileWriter.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $ReadLineSync$BufferedReaderConsumer = ::ReadLineSync$BufferedReaderConsumer;
using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $FileWriter = ::java::io::FileWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

int32_t ReadLineSync::lineCount = 0;

void ReadLineSync::init$() {
}

void ReadLineSync::main($StringArray* args) {
	$init(ReadLineSync);
	$useLocalObjectStack();
	$var($String, dir, $System::getProperty("."_s, "."_s));
	$var($File, f, $new($File, dir, "test.txt"_s));
	createFile(f);
	f->deleteOnExit();
	$var($BufferedReader, reader, $new($BufferedReader, $$new($FileReader, f)));
	$var($Throwable, var$0, nullptr);
	try {
		int32_t threadCount = 2;
		$var($ExecutorService, es, $Executors::newFixedThreadPool(threadCount));
		for (int32_t i = 0; i < threadCount; ++i) {
			$nc(es)->execute($$new($ReadLineSync$BufferedReaderConsumer, reader));
		}
		$nc(es)->shutdown();
		$init($TimeUnit);
		while (!es->awaitTermination(60, $TimeUnit::SECONDS)) {
			;
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		reader->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ReadLineSync::createFile($File* f) {
	$init(ReadLineSync);
	$useLocalObjectStack();
	$var($BufferedWriter, w, $new($BufferedWriter, $$new($FileWriter, f)));
	int32_t count = 10000;
	while (count > 0) {
		w->write("abcd \r\n"_s);
		w->write("efg \r\n"_s);
		w->write("hijk \r\n"_s);
		w->write("lmnop \r\n"_s);
		w->write("qrstuv \r\n"_s);
		w->write("wxy and z \r\n"_s);
		w->write("now you \r\n"_s);
		w->write("know your \r\n"_s);
		w->write("abc \r\n"_s);
		w->write("next time \r\n"_s);
		w->write("want you \r\n"_s);
		w->write("sing with me \r\n"_s);
		--count;
	}
	w->close();
}

void ReadLineSync::clinit$($Class* clazz) {
	ReadLineSync::lineCount = 0;
}

ReadLineSync::ReadLineSync() {
}

$Class* ReadLineSync::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lineCount", "I", nullptr, $PUBLIC | $STATIC, $staticField(ReadLineSync, lineCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadLineSync, init$, void)},
		{"createFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadLineSync, createFile, void, $File*), "java.io.IOException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadLineSync, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadLineSync$BufferedReaderConsumer", "ReadLineSync", "BufferedReaderConsumer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadLineSync",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReadLineSync$BufferedReaderConsumer"
	};
	$loadClass(ReadLineSync, name, initialize, &classInfo$$, ReadLineSync::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReadLineSync);
	});
	return class$;
}

$Class* ReadLineSync::class$ = nullptr;