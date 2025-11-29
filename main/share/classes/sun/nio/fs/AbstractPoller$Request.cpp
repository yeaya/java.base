#include <sun/nio/fs/AbstractPoller$Request.h>

#include <java/lang/InterruptedException.h>
#include <sun/nio/fs/AbstractPoller$RequestType.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPoller$RequestType = ::sun::nio::fs::AbstractPoller$RequestType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractPoller$Request_FieldInfo_[] = {
	{"type", "Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, $PRIVATE | $FINAL, $field(AbstractPoller$Request, type$)},
	{"params", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractPoller$Request, params)},
	{"completed", "Z", nullptr, $PRIVATE, $field(AbstractPoller$Request, completed)},
	{"result", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AbstractPoller$Request, result)},
	{}
};

$MethodInfo _AbstractPoller$Request_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/AbstractPoller$RequestType;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(AbstractPoller$Request::*)($AbstractPoller$RequestType*,$ObjectArray*)>(&AbstractPoller$Request::init$))},
	{"awaitResult", "()Ljava/lang/Object;", nullptr, 0},
	{"parameters", "()[Ljava/lang/Object;", nullptr, 0},
	{"release", "(Ljava/lang/Object;)V", nullptr, 0},
	{"type", "()Lsun/nio/fs/AbstractPoller$RequestType;", nullptr, 0},
	{}
};

$InnerClassInfo _AbstractPoller$Request_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractPoller$Request", "sun.nio.fs.AbstractPoller", "Request", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractPoller$Request_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.AbstractPoller$Request",
	"java.lang.Object",
	nullptr,
	_AbstractPoller$Request_FieldInfo_,
	_AbstractPoller$Request_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractPoller$Request_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractPoller"
};

$Object* allocate$AbstractPoller$Request($Class* clazz) {
	return $of($alloc(AbstractPoller$Request));
}

void AbstractPoller$Request::init$($AbstractPoller$RequestType* type, $ObjectArray* params) {
	this->completed = false;
	$set(this, result, nullptr);
	$set(this, type$, type);
	$set(this, params, params);
}

$AbstractPoller$RequestType* AbstractPoller$Request::type() {
	return this->type$;
}

$ObjectArray* AbstractPoller$Request::parameters() {
	return this->params;
}

void AbstractPoller$Request::release(Object$* result) {
	$synchronized(this) {
		this->completed = true;
		$set(this, result, result);
		$of(this)->notifyAll();
	}
}

$Object* AbstractPoller$Request::awaitResult() {
	bool interrupted = false;
	$synchronized(this) {
		while (!this->completed) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& x) {
				interrupted = true;
			}
		}
		if (interrupted) {
			$($Thread::currentThread())->interrupt();
		}
		return $of(this->result);
	}
}

AbstractPoller$Request::AbstractPoller$Request() {
}

$Class* AbstractPoller$Request::load$($String* name, bool initialize) {
	$loadClass(AbstractPoller$Request, name, initialize, &_AbstractPoller$Request_ClassInfo_, allocate$AbstractPoller$Request);
	return class$;
}

$Class* AbstractPoller$Request::class$ = nullptr;

		} // fs
	} // nio
} // sun