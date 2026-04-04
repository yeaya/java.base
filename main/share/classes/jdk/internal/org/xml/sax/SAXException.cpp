#include <jdk/internal/org/xml/sax/SAXException.h>
#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/IllegalStateException.h>
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

$ObjectStreamFieldArray* SAXException::serialPersistentFields = nullptr;

void SAXException::init$() {
	$Exception::init$();
}

void SAXException::init$($String* message) {
	$Exception::init$(message);
}

void SAXException::init$($Exception* e) {
	$Exception::init$(e);
}

void SAXException::init$($String* message, $Exception* e) {
	$Exception::init$(message, e);
}

$String* SAXException::getMessage() {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	$var($Throwable, exception, $Exception::getCause());
	if (exception != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($Exception::toString()));
		var$0->append("\n"_s);
		var$0->append($(exception->toString()));
		return $str(var$0);
	} else {
		return $Exception::toString();
	}
}

void SAXException::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $(getExceptionInternal()));
	out->writeFields();
}

void SAXException::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	$var($Exception, exception, $cast($Exception, $nc(fields)->get("exception"_s, nullptr)));
	$var($Throwable, superCause, $Exception::getCause());
	if (superCause == nullptr && exception != nullptr) {
		try {
			$Exception::initCause(exception);
		} catch ($IllegalStateException& e) {
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

void SAXException::clinit$($Class* clazz) {
	$assignStatic(SAXException::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Exception::class$)}));
}

SAXException::SAXException() {
}

SAXException::SAXException(const SAXException& e) : $Exception(e) {
}

void SAXException::throw$() {
	throw *this;
}

$Class* SAXException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXException, serialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SAXException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SAXException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(SAXException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(SAXException, init$, void, $String*, $Exception*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(SAXException, getCause, $Throwable*)},
		{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(SAXException, getException, $Exception*)},
		{"getExceptionInternal", "()Ljava/lang/Exception;", nullptr, $PRIVATE, $method(SAXException, getExceptionInternal, $Exception*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXException, getMessage, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SAXException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXException, toString, $String*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(SAXException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.xml.sax.SAXException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXException, name, initialize, &classInfo$$, SAXException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SAXException);
	});
	return class$;
}

$Class* SAXException::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk