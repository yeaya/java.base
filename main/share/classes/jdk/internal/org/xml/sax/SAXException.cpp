#include <jdk/internal/org/xml/sax/SAXException.h>

#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$FieldInfo _SAXException_FieldInfo_[] = {
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXException, serialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXException, serialVersionUID)},
	{}
};

$MethodInfo _SAXException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXException::*)()>(&SAXException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXException::*)($String*)>(&SAXException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXException::*)($Exception*)>(&SAXException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXException::*)($String*,$Exception*)>(&SAXException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{"getExceptionInternal", "()Ljava/lang/Exception;", nullptr, $PRIVATE, $method(static_cast<$Exception*(SAXException::*)()>(&SAXException::getExceptionInternal))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SAXException::*)($ObjectInputStream*)>(&SAXException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SAXException::*)($ObjectOutputStream*)>(&SAXException::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _SAXException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.xml.sax.SAXException",
	"java.lang.Exception",
	nullptr,
	_SAXException_FieldInfo_,
	_SAXException_MethodInfo_
};

$Object* allocate$SAXException($Class* clazz) {
	return $of($alloc(SAXException));
}

$ObjectStreamFieldArray* SAXException::serialPersistentFields = nullptr;

void SAXException::init$() {
	$Exception::init$();
}

void SAXException::init$($String* message) {
	$Exception::init$(message);
}

void SAXException::init$($Exception* e) {
	$Exception::init$(static_cast<$Throwable*>(e));
}

void SAXException::init$($String* message, $Exception* e) {
	$Exception::init$(message, e);
}

$String* SAXException::getMessage() {
	$var($String, message, $Exception::getMessage());
	$var($Throwable, cause, $Exception::getCause());
	if (message == nullptr && cause != nullptr) {
		return cause->getMessage();
	} else {
		return message;
	}
}

$Exception* SAXException::getException() {
	return getExceptionInternal();
}

$Throwable* SAXException::getCause() {
	return $Exception::getCause();
}

$String* SAXException::toString() {
	$var($Throwable, exception, $Exception::getCause());
	if (exception != nullptr) {
		$var($String, var$0, $$str({$($Exception::toString()), "\n"_s}));
		return $concat(var$0, $(exception->toString()));
	} else {
		return $Exception::toString();
	}
}

void SAXException::writeObject($ObjectOutputStream* out) {
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $($of(getExceptionInternal())));
	out->writeFields();
}

void SAXException::readObject($ObjectInputStream* in) {
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	$var($Exception, exception, $cast($Exception, $nc(fields)->get("exception"_s, ($Object*)nullptr)));
	$var($Throwable, superCause, $Exception::getCause());
	if (superCause == nullptr && exception != nullptr) {
		try {
			$Exception::initCause(exception);
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			$throwNew($InvalidClassException, "Inconsistent state: two causes"_s);
		}
	}
}

$Exception* SAXException::getExceptionInternal() {
	$var($Throwable, cause, $Exception::getCause());
	if ($instanceOf($Exception, cause)) {
		return $cast($Exception, cause);
	} else {
		return nullptr;
	}
}

void clinit$SAXException($Class* class$) {
	$load($Exception);
	$assignStatic(SAXException::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Exception::class$)}));
}

SAXException::SAXException() {
}

SAXException::SAXException(const SAXException& e) {
}

SAXException SAXException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SAXException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SAXException::load$($String* name, bool initialize) {
	$loadClass(SAXException, name, initialize, &_SAXException_ClassInfo_, clinit$SAXException, allocate$SAXException);
	return class$;
}

$Class* SAXException::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk