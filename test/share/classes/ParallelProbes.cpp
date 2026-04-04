#include <ParallelProbes.h>
#include <ParallelProbes$1.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef REPEATS

using $ParallelProbes$1 = ::ParallelProbes$1;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

void ParallelProbes::init$(int32_t numThreads) {
	$useLocalObjectStack();
	this->numThreads = 0;
	$nc($System::out)->println($$str({"Using <"_s, $$str(numThreads), "> threads."_s}));
	this->numThreads = numThreads;
	$set(this, threads, $new($ArrayList, numThreads));
}

$Path* ParallelProbes::createTmpFile() {
	$useLocalObjectStack();
	$var($Path, dir, $Paths::get($($System::getProperty("test.dir"_s, "."_s)), $$new($StringArray, 0)));
	$var($Path, p, $Files::createTempFile(dir, "prefix"_s, ".json"_s, $$new($FileAttributeArray, 0)));
	$Files::write(p, $("{\"test\"}"_s->getBytes()), $$new($OpenOptionArray, 0));
	$nc($System::out)->println($$str({"Write test file <"_s, p, ">"_s}));
	return p;
}

$Runnable* ParallelProbes::createRunnable($Path* p) {
	$var($Runnable, r, $new($ParallelProbes$1, this, p));
	return r;
}

void ParallelProbes::start() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < this->numThreads; ++i) {
		$var($Path, p, createTmpFile());
		$var($Runnable, r, createRunnable(p));
		$var($Thread, thread, $new($Thread, r, $$str({"thread-"_s, $$str(i)})));
		thread->start();
		$nc(this->threads)->add(thread);
	}
}

void ParallelProbes::join() {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->threads)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Thread, thread, $cast($Thread, i$->next()));
		try {
			$nc(thread)->join();
		} catch ($InterruptedException& e) {
		}
	}
}

void ParallelProbes::main($StringArray* args) {
	$var(ParallelProbes, probes, $new(ParallelProbes, $nc(args)->length < 1 ? 1 : $Integer::parseInt(args->get(0))));
	probes->start();
	probes->join();
}

ParallelProbes::ParallelProbes() {
}

$Class* ParallelProbes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REPEATS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParallelProbes, REPEATS)},
		{"numThreads", "I", nullptr, $PRIVATE, $field(ParallelProbes, numThreads)},
		{"threads", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Thread;>;", $PRIVATE, $field(ParallelProbes, threads)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ParallelProbes, init$, void, int32_t)},
		{"createRunnable", "(Ljava/nio/file/Path;)Ljava/lang/Runnable;", nullptr, $PRIVATE, $method(ParallelProbes, createRunnable, $Runnable*, $Path*)},
		{"createTmpFile", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(ParallelProbes, createTmpFile, $Path*), "java.io.IOException"},
		{"join", "()V", nullptr, $PUBLIC, $virtualMethod(ParallelProbes, join, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ParallelProbes, main, void, $StringArray*), "java.lang.Exception"},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(ParallelProbes, start, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParallelProbes$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ParallelProbes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ParallelProbes$1"
	};
	$loadClass(ParallelProbes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParallelProbes);
	});
	return class$;
}

$Class* ParallelProbes::class$ = nullptr;