#include <java/nio/channels/IllegalSelectorException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _IllegalSelectorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalSelectorException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalSelectorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalSelectorException::*)()>(&IllegalSelectorException::init$))},
	{}
};

$ClassInfo _IllegalSelectorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.IllegalSelectorException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalSelectorException_FieldInfo_,
	_IllegalSelectorException_MethodInfo_
};

$Object* allocate$IllegalSelectorException($Class* clazz) {
	return $of($alloc(IllegalSelectorException));
}

void IllegalSelectorException::init$() {
	$IllegalArgumentException::init$();
}

IllegalSelectorException::IllegalSelectorException() {
}

IllegalSelectorException::IllegalSelectorException(const IllegalSelectorException& e) : $IllegalArgumentException(e) {
}

void IllegalSelectorException::throw$() {
	throw *this;
}

$Class* IllegalSelectorException::load$($String* name, bool initialize) {
	$loadClass(IllegalSelectorException, name, initialize, &_IllegalSelectorException_ClassInfo_, allocate$IllegalSelectorException);
	return class$;
}

$Class* IllegalSelectorException::class$ = nullptr;

		} // channels
	} // nio
} // java