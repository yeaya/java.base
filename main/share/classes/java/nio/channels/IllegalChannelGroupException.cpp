#include <java/nio/channels/IllegalChannelGroupException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalChannelGroupException::*)()>(&IllegalChannelGroupException::init$))},
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

IllegalChannelGroupException::IllegalChannelGroupException(const IllegalChannelGroupException& e) {
}

IllegalChannelGroupException IllegalChannelGroupException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalChannelGroupException::throwWrapper$() {
	$pendingException(this);
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