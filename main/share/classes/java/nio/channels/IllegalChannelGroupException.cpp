#include <java/nio/channels/IllegalChannelGroupException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _IllegalChannelGroupException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalChannelGroupException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalChannelGroupException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalChannelGroupException, init$, void)},
	{}
};

$ClassInfo _IllegalChannelGroupException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.IllegalChannelGroupException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalChannelGroupException_FieldInfo_,
	_IllegalChannelGroupException_MethodInfo_
};

$Object* allocate$IllegalChannelGroupException($Class* clazz) {
	return $of($alloc(IllegalChannelGroupException));
}

void IllegalChannelGroupException::init$() {
	$IllegalArgumentException::init$();
}

IllegalChannelGroupException::IllegalChannelGroupException() {
}

IllegalChannelGroupException::IllegalChannelGroupException(const IllegalChannelGroupException& e) : $IllegalArgumentException(e) {
}

void IllegalChannelGroupException::throw$() {
	throw *this;
}

$Class* IllegalChannelGroupException::load$($String* name, bool initialize) {
	$loadClass(IllegalChannelGroupException, name, initialize, &_IllegalChannelGroupException_ClassInfo_, allocate$IllegalChannelGroupException);
	return class$;
}

$Class* IllegalChannelGroupException::class$ = nullptr;

		} // channels
	} // nio
} // java