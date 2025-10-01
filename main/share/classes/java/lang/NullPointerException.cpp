#include <java/lang/NullPointerException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _NullPointerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NullPointerException, serialVersionUID)},
	{"extendedMessageState", "I", nullptr, $PRIVATE | $TRANSIENT, $field(NullPointerException, extendedMessageState)},
	{"extendedMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(NullPointerException, extendedMessage)},
	{}
};

$MethodInfo _NullPointerException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullPointerException::*)()>(&NullPointerException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NullPointerException::*)($String*)>(&NullPointerException::init$))},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getExtendedNPEMessage", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(NullPointerException::*)()>(&NullPointerException::getExtendedNPEMessage))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getExtendedNPEMessage 3

$ClassInfo _NullPointerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NullPointerException",
	"java.lang.RuntimeException",
	nullptr,
	_NullPointerException_FieldInfo_,
	_NullPointerException_MethodInfo_
};

$Object* allocate$NullPointerException($Class* clazz) {
	return $of($alloc(NullPointerException));
}

void NullPointerException::init$() {
	$RuntimeException::init$();
}

void NullPointerException::init$($String* s) {
	$RuntimeException::init$(s);
}

$Throwable* NullPointerException::fillInStackTrace() {
	$synchronized(this) {
		if (this->extendedMessageState == 0) {
			this->extendedMessageState = 1;
		} else if (this->extendedMessageState == 1) {
			$set(this, extendedMessage, getExtendedNPEMessage());
			this->extendedMessageState = 2;
		}
		return $RuntimeException::fillInStackTrace();
	}
}

$String* NullPointerException::getMessage() {
	$var($String, message, $RuntimeException::getMessage());
	if (message == nullptr) {
		$synchronized(this) {
			if (this->extendedMessageState == 1) {
				$set(this, extendedMessage, getExtendedNPEMessage());
				this->extendedMessageState = 2;
			}
			return this->extendedMessage;
		}
	}
	return message;
}

$String* NullPointerException::getExtendedNPEMessage() {
	$var($String, $ret, nullptr);
	$prepareNative(NullPointerException, getExtendedNPEMessage, $String*);
	$assign($ret, $invokeNative(NullPointerException, getExtendedNPEMessage));
	$finishNative();
	return $ret;
}

NullPointerException::NullPointerException() {
}

NullPointerException::NullPointerException(const NullPointerException& e) {
}

NullPointerException NullPointerException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NullPointerException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NullPointerException::load$($String* name, bool initialize) {
	$loadClass(NullPointerException, name, initialize, &_NullPointerException_ClassInfo_, allocate$NullPointerException);
	return class$;
}

$Class* NullPointerException::class$ = nullptr;

	} // lang
} // java