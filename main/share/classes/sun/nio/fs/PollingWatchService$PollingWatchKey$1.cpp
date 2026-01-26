#include <sun/nio/fs/PollingWatchService$PollingWatchKey$1.h>

#include <sun/nio/fs/PollingWatchService$PollingWatchKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PollingWatchService$PollingWatchKey = ::sun::nio::fs::PollingWatchService$PollingWatchKey;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _PollingWatchService$PollingWatchKey$1_FieldInfo_[] = {
	{"this$1", "Lsun/nio/fs/PollingWatchService$PollingWatchKey;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$PollingWatchKey$1, this$1)},
	{}
};

$MethodInfo _PollingWatchService$PollingWatchKey$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/PollingWatchService$PollingWatchKey;)V", nullptr, 0, $method(PollingWatchService$PollingWatchKey$1, init$, void, $PollingWatchService$PollingWatchKey*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$PollingWatchKey$1, run, void)},
	{}
};

$EnclosingMethodInfo _PollingWatchService$PollingWatchKey$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.PollingWatchService$PollingWatchKey",
	"enable",
	"(Ljava/util/Set;J)V"
};

$InnerClassInfo _PollingWatchService$PollingWatchKey$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.PollingWatchService$PollingWatchKey", "sun.nio.fs.PollingWatchService", "PollingWatchKey", $PRIVATE},
	{"sun.nio.fs.PollingWatchService$PollingWatchKey$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PollingWatchService$PollingWatchKey$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.PollingWatchService$PollingWatchKey$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_PollingWatchService$PollingWatchKey$1_FieldInfo_,
	_PollingWatchService$PollingWatchKey$1_MethodInfo_,
	nullptr,
	&_PollingWatchService$PollingWatchKey$1_EnclosingMethodInfo_,
	_PollingWatchService$PollingWatchKey$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.PollingWatchService"
};

$Object* allocate$PollingWatchService$PollingWatchKey$1($Class* clazz) {
	return $of($alloc(PollingWatchService$PollingWatchKey$1));
}

void PollingWatchService$PollingWatchKey$1::init$($PollingWatchService$PollingWatchKey* this$1) {
	$set(this, this$1, this$1);
}

void PollingWatchService$PollingWatchKey$1::run() {
	this->this$1->poll();
}

PollingWatchService$PollingWatchKey$1::PollingWatchService$PollingWatchKey$1() {
}

$Class* PollingWatchService$PollingWatchKey$1::load$($String* name, bool initialize) {
	$loadClass(PollingWatchService$PollingWatchKey$1, name, initialize, &_PollingWatchService$PollingWatchKey$1_ClassInfo_, allocate$PollingWatchService$PollingWatchKey$1);
	return class$;
}

$Class* PollingWatchService$PollingWatchKey$1::class$ = nullptr;

		} // fs
	} // nio
} // sun