#include <java/nio/channels/ShutdownChannelGroupException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ShutdownChannelGroupException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ShutdownChannelGroupException, serialVersionUID)},
	{}
};

$MethodInfo _ShutdownChannelGroupException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ShutdownChannelGroupException, init$, void)},
	{}
};

$ClassInfo _ShutdownChannelGroupException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ShutdownChannelGroupException",
	"java.lang.IllegalStateException",
	nullptr,
	_ShutdownChannelGroupException_FieldInfo_,
	_ShutdownChannelGroupException_MethodInfo_
};

$Object* allocate$ShutdownChannelGroupException($Class* clazz) {
	return $of($alloc(ShutdownChannelGroupException));
}

void ShutdownChannelGroupException::init$() {
	$IllegalStateException::init$();
}

ShutdownChannelGroupException::ShutdownChannelGroupException() {
}

ShutdownChannelGroupException::ShutdownChannelGroupException(const ShutdownChannelGroupException& e) : $IllegalStateException(e) {
}

void ShutdownChannelGroupException::throw$() {
	throw *this;
}

$Class* ShutdownChannelGroupException::load$($String* name, bool initialize) {
	$loadClass(ShutdownChannelGroupException, name, initialize, &_ShutdownChannelGroupException_ClassInfo_, allocate$ShutdownChannelGroupException);
	return class$;
}

$Class* ShutdownChannelGroupException::class$ = nullptr;

		} // channels
	} // nio
} // java