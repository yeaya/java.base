#include <java/security/PrivilegedActionException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace security {

$ObjectStreamFieldArray* PrivilegedActionException::serialPersistentFields = nullptr;

void PrivilegedActionException::init$($Exception* exception) {
	$Exception::init$(nullptr, exception);
}

$Exception* PrivilegedActionException::getException() {
	return $cast($Exception, $Exception::getCause());
}

$String* PrivilegedActionException::toString() {
	$useLocalObjectStack();
	$var($String, s, $of(this)->getClass()->getName());
	$var($Throwable, cause, $Exception::getCause());
	return (cause != nullptr) ? ($str({s, ": "_s, $(cause->toString())})) : s;
}

void PrivilegedActionException::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Exception, exception, $cast($Exception, $nc(fields)->get("exception"_s, nullptr)));
	if (exception != nullptr) {
		$$nc($SharedSecrets::getJavaLangAccess())->setCause(this, exception);
	}
}

void PrivilegedActionException::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $($Exception::getCause()));
	out->writeFields();
}

void PrivilegedActionException::clinit$($Class* clazz) {
	$assignStatic(PrivilegedActionException::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Exception::class$)}));
}

PrivilegedActionException::PrivilegedActionException() {
}

PrivilegedActionException::PrivilegedActionException(const PrivilegedActionException& e) : $Exception(e) {
}

void PrivilegedActionException::throw$() {
	throw *this;
}

$Class* PrivilegedActionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivilegedActionException, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivilegedActionException, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(PrivilegedActionException, init$, void, $Exception*)},
		{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(PrivilegedActionException, getException, $Exception*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PrivilegedActionException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrivilegedActionException, toString, $String*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PrivilegedActionException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.PrivilegedActionException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrivilegedActionException, name, initialize, &classInfo$$, PrivilegedActionException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedActionException);
	});
	return class$;
}

$Class* PrivilegedActionException::class$ = nullptr;

	} // security
} // java