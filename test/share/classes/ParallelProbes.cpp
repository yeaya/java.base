#include <ParallelProbes.h>

#include <ParallelProbes$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

$FieldInfo _ParallelProbes_FieldInfo_[] = {
	{"REPEATS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParallelProbes, REPEATS)},
	{"numThreads", "I", nullptr, $PRIVATE, $field(ParallelProbes, numThreads)},
	{"threads", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Thread;>;", $PRIVATE, $field(ParallelProbes, threads)},
	{}
};

$MethodInfo _ParallelProbes_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ParallelProbes::*)(int32_t)>(&ParallelProbes::init$))},
	{"createRunnable", "(Ljava/nio/file/Path;)Ljava/lang/Runnable;", nullptr, $PRIVATE, $method(static_cast<$Runnable*(ParallelProbes::*)($Path*)>(&ParallelProbes::createRunnable))},
	{"createTmpFile", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(ParallelProbes::*)()>(&ParallelProbes::createTmpFile)), "java.io.IOException"},
	{"join", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ParallelProbes::main)), "java.lang.Exception"},
	{"start", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ParallelProbes_InnerClassesInfo_[] = {
	{"ParallelProbes$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParallelProbes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParallelProbes",
	"java.lang.Object",
	nullptr,
	_ParallelProbes_FieldInfo_,
	_ParallelProbes_MethodInfo_,
	nullptr,
	nullptr,
	_ParallelProbes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ParallelProbes$1"
};

$Object* allocate$ParallelProbes($Class* clazz) {
	return $of($alloc(ParallelProbes));
}

void ParallelProbes::init$(int32_t numThreads) {
	$useLocalCurrentObjectStackCache();
	this->numThreads = 0;
	$init($System);
	$nc($System::out)->println($$str({"Using <"_s, $$str(numThreads), "> threads."_s}));
	this->numThreads = numThreads;
	$set(this, threads, $new($ArrayList, numThreads));
}

$Path* ParallelProbes::createTmpFile() {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->numThreads; ++i) {
		$var($Path, p, createTmpFile());
		$var($Runnable, r, createRunnable(p));
		$var($Thread, thread, $new($Thread, r, $$str({"thread-"_s, $$str(i)})));
		thread->start();
		$nc(this->threads)->add(thread);
	}
}

void ParallelProbes::join() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->threads)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Thread, thread, $cast($Thread, i$->next()));
			{
				try {
					$nc(thread)->join();
				} catch ($InterruptedException&) {
					$catch();
				}
			}
		}
	}
}

void ParallelProbes::main($StringArray* args) {
	$var(ParallelProbes, probes, $new(ParallelProbes, $nc(args)->length < 1 ? 1 : $Integer::parseInt($nc(args)->get(0))));
	probes->start();
	probes->join();
}

ParallelProbes::ParallelProbes() {
}

$Class* ParallelProbes::load$($String* name, bool initialize) {
	$loadClass(ParallelProbes, name, initialize, &_ParallelProbes_ClassInfo_, allocate$ParallelProbes);
	return class$;
}

$Class* ParallelProbes::class$ = nullptr;