#include <sun/nio/ch/PendingIoCache$1.h>
#include <java/io/IOException.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <sun/nio/ch/Iocp$ResultHandler.h>
#include <sun/nio/ch/PendingIoCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $Iocp$ResultHandler = ::sun::nio::ch::Iocp$ResultHandler;
using $PendingIoCache = ::sun::nio::ch::PendingIoCache;

namespace sun {
	namespace nio {
		namespace ch {

void PendingIoCache$1::init$($PendingIoCache* this$0, $Iocp$ResultHandler* val$rh) {
	$set(this, this$0, this$0);
	$set(this, val$rh, val$rh);
}

void PendingIoCache$1::run() {
	$nc(this->val$rh)->failed(-1, $$new($AsynchronousCloseException));
}

PendingIoCache$1::PendingIoCache$1() {
}

$Class* PendingIoCache$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/PendingIoCache;", nullptr, $FINAL | $SYNTHETIC, $field(PendingIoCache$1, this$0)},
		{"val$rh", "Lsun/nio/ch/Iocp$ResultHandler;", nullptr, $FINAL | $SYNTHETIC, $field(PendingIoCache$1, val$rh)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/PendingIoCache;Lsun/nio/ch/Iocp$ResultHandler;)V", "()V", 0, $method(PendingIoCache$1, init$, void, $PendingIoCache*, $Iocp$ResultHandler*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PendingIoCache$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.PendingIoCache",
		"clearPendingIoMap",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.PendingIoCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.PendingIoCache$1",
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
		"sun.nio.ch.PendingIoCache"
	};
	$loadClass(PendingIoCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PendingIoCache$1);
	});
	return class$;
}

$Class* PendingIoCache$1::class$ = nullptr;

		} // ch
	} // nio
} // sun