#include <ParallelProbes$1.h>

#include <ParallelProbes.h>
#include <java/io/IOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ParallelProbes = ::ParallelProbes;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

$FieldInfo _ParallelProbes$1_FieldInfo_[] = {
	{"this$0", "LParallelProbes;", nullptr, $FINAL | $SYNTHETIC, $field(ParallelProbes$1, this$0)},
	{"val$p", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ParallelProbes$1, val$p)},
	{}
};

$MethodInfo _ParallelProbes$1_MethodInfo_[] = {
	{"<init>", "(LParallelProbes;Ljava/nio/file/Path;)V", "()V", 0, $method(static_cast<void(ParallelProbes$1::*)($ParallelProbes*,$Path*)>(&ParallelProbes$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ParallelProbes$1_EnclosingMethodInfo_ = {
	"ParallelProbes",
	"createRunnable",
	"(Ljava/nio/file/Path;)Ljava/lang/Runnable;"
};

$InnerClassInfo _ParallelProbes$1_InnerClassesInfo_[] = {
	{"ParallelProbes$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParallelProbes$1_ClassInfo_ = {
	$ACC_SUPER,
	"ParallelProbes$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ParallelProbes$1_FieldInfo_,
	_ParallelProbes$1_MethodInfo_,
	nullptr,
	&_ParallelProbes$1_EnclosingMethodInfo_,
	_ParallelProbes$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParallelProbes"
};

$Object* allocate$ParallelProbes$1($Class* clazz) {
	return $of($alloc(ParallelProbes$1));
}

void ParallelProbes$1::init$($ParallelProbes* this$0, $Path* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

void ParallelProbes$1::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 1000; ++i) {
		try {
			$var($String, var$0, $$str({$($($Thread::currentThread())->getName()), " -> "_s}));
			$nc($System::out)->println($$concat(var$0, $($Files::probeContentType(this->val$p))));
		} catch ($IOException& ioException) {
			ioException->printStackTrace();
		}
	}
}

ParallelProbes$1::ParallelProbes$1() {
}

$Class* ParallelProbes$1::load$($String* name, bool initialize) {
	$loadClass(ParallelProbes$1, name, initialize, &_ParallelProbes$1_ClassInfo_, allocate$ParallelProbes$1);
	return class$;
}

$Class* ParallelProbes$1::class$ = nullptr;