#include <java/nio/channels/WritePendingException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _WritePendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WritePendingException, serialVersionUID)},
	{}
};

$MethodInfo _WritePendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WritePendingException::*)()>(&WritePendingException::init$))},
	{}
};

$ClassInfo _WritePendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.WritePendingException",
	"java.lang.IllegalStateException",
	nullptr,
	_WritePendingException_FieldInfo_,
	_WritePendingException_MethodInfo_
};

$Object* allocate$WritePendingException($Class* clazz) {
	return $of($alloc(WritePendingException));
}

void WritePendingException::init$() {
	$IllegalStateException::init$();
}

WritePendingException::WritePendingException() {
}

WritePendingException::WritePendingException(const WritePendingException& e) {
}

WritePendingException WritePendingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WritePendingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WritePendingException::load$($String* name, bool initialize) {
	$loadClass(WritePendingException, name, initialize, &_WritePendingException_ClassInfo_, allocate$WritePendingException);
	return class$;
}

$Class* WritePendingException::class$ = nullptr;

		} // channels
	} // nio
} // java