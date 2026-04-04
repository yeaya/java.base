#include <BigFork.h>
#include <java/io/BufferedReader.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Random = ::java::util::Random;

$Random* BigFork::rnd = nullptr;

void BigFork::init$() {
}

void BigFork::touchPages($bytes* chunk) {
	$init(BigFork);
	int32_t pageSize = 4096;
	for (int32_t i = 0; i < $nc(chunk)->length; i += pageSize) {
		chunk->set(i, (int8_t)BigFork::rnd->nextInt());
	}
}

void BigFork::showCommittedMemory() {
	$init(BigFork);
	$useLocalObjectStack();
	$var($BufferedReader, r, $new($BufferedReader, $$new($InputStreamReader, $$new($FileInputStream, "/proc/meminfo"_s))));
	$nc($System::out)->println("-------"_s);
	$var($String, line, nullptr);
	while (($assign(line, r->readLine())) != nullptr) {
		if ($nc(line)->startsWith("Commit"_s)) {
			$System::out->printf("%s%n"_s, $$new($ObjectArray, {line}));
		}
	}
	$System::out->println("-------"_s);
}

void BigFork::main($StringArray* args) {
	$init(BigFork);
	$useLocalObjectStack();
	showCommittedMemory();
	int32_t chunkSize = 1024 * 1024 * 100;
	$var($List, chunks, $new($ArrayList, 100));
	try {
		for (;;) {
			$var($bytes, chunk, $new($bytes, chunkSize));
			touchPages(chunk);
			chunks->add(chunk);
		}
	} catch ($OutOfMemoryError& e) {
		chunks->set(0, nullptr);
		$System::gc();
		int32_t size = chunks->size();
		$nc($System::out)->printf("size=%.2gGB%n"_s, $$new($ObjectArray, {$($Double::valueOf((double)size / 10))}));
		showCommittedMemory();
		$var($Process, p, $$new($ProcessBuilder, $$new($StringArray, {"/bin/true"_s}))->start());
		$nc(p)->waitFor();
	}
}

void BigFork::clinit$($Class* clazz) {
	$assignStatic(BigFork::rnd, $new($Random));
}

BigFork::BigFork() {
}

$Class* BigFork::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rnd", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(BigFork, rnd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BigFork, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BigFork, main, void, $StringArray*), "java.lang.Throwable"},
		{"showCommittedMemory", "()V", nullptr, $STATIC, $staticMethod(BigFork, showCommittedMemory, void), "java.io.IOException"},
		{"touchPages", "([B)V", nullptr, $STATIC, $staticMethod(BigFork, touchPages, void, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BigFork",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BigFork, name, initialize, &classInfo$$, BigFork::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigFork);
	});
	return class$;
}

$Class* BigFork::class$ = nullptr;