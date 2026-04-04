#include <ParallelProbes$1.h>
#include <ParallelProbes.h>
#include <java/io/IOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ParallelProbes = ::ParallelProbes;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

void ParallelProbes$1::init$($ParallelProbes* this$0, $Path* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

void ParallelProbes$1::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 1000; ++i) {
		try {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($($($Thread::currentThread())->getName()));
			var$0->append(" -> "_s);
			var$0->append($($Files::probeContentType(this->val$p)));
			$nc($System::out)->println($$str(var$0));
		} catch ($IOException& ioException) {
			ioException->printStackTrace();
		}
	}
}

ParallelProbes$1::ParallelProbes$1() {
}

$Class* ParallelProbes$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LParallelProbes;", nullptr, $FINAL | $SYNTHETIC, $field(ParallelProbes$1, this$0)},
		{"val$p", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ParallelProbes$1, val$p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LParallelProbes;Ljava/nio/file/Path;)V", "()V", 0, $method(ParallelProbes$1, init$, void, $ParallelProbes*, $Path*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ParallelProbes$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ParallelProbes",
		"createRunnable",
		"(Ljava/nio/file/Path;)Ljava/lang/Runnable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParallelProbes$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParallelProbes$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ParallelProbes"
	};
	$loadClass(ParallelProbes$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParallelProbes$1);
	});
	return class$;
}

$Class* ParallelProbes$1::class$ = nullptr;