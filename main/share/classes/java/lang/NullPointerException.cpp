#include <java/lang/NullPointerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

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
	$prepareNative(getExtendedNPEMessage, $String*);
	$var($String, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

NullPointerException::NullPointerException() {
}

NullPointerException::NullPointerException(const NullPointerException& e) : $RuntimeException(e) {
}

void NullPointerException::throw$() {
	throw *this;
}

$Class* NullPointerException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NullPointerException, serialVersionUID)},
		{"extendedMessageState", "I", nullptr, $PRIVATE | $TRANSIENT, $field(NullPointerException, extendedMessageState)},
		{"extendedMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(NullPointerException, extendedMessage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullPointerException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NullPointerException, init$, void, $String*)},
		{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NullPointerException, fillInStackTrace, $Throwable*)},
		{"getExtendedNPEMessage", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(NullPointerException, getExtendedNPEMessage, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NullPointerException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NullPointerException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NullPointerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullPointerException);
	});
	return class$;
}

$Class* NullPointerException::class$ = nullptr;

void NullPointerException::throwNew$() {
	$throwNew(NullPointerException);
}

	} // lang
} // java