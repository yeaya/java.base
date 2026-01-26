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
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace security {

$FieldInfo _PrivilegedActionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivilegedActionException, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivilegedActionException, serialPersistentFields)},
	{}
};

$MethodInfo _PrivilegedActionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(PrivilegedActionException, init$, void, $Exception*)},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(PrivilegedActionException, getException, $Exception*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PrivilegedActionException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrivilegedActionException, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PrivilegedActionException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _PrivilegedActionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.PrivilegedActionException",
	"java.lang.Exception",
	nullptr,
	_PrivilegedActionException_FieldInfo_,
	_PrivilegedActionException_MethodInfo_
};

$Object* allocate$PrivilegedActionException($Class* clazz) {
	return $of($alloc(PrivilegedActionException));
}

$ObjectStreamFieldArray* PrivilegedActionException::serialPersistentFields = nullptr;

void PrivilegedActionException::init$($Exception* exception) {
	$Exception::init$(nullptr, exception);
}

$Exception* PrivilegedActionException::getException() {
	return $cast($Exception, $Exception::getCause());
}

$String* PrivilegedActionException::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $of(this)->getClass()->getName());
	$var($Throwable, cause, $Exception::getCause());
	return (cause != nullptr) ? ($str({s, ": "_s, $($nc(cause)->toString())})) : s;
}

void PrivilegedActionException::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Exception, exception, $cast($Exception, $nc(fields)->get("exception"_s, ($Object*)nullptr)));
	if (exception != nullptr) {
		$nc($($SharedSecrets::getJavaLangAccess()))->setCause(this, exception);
	}
}

void PrivilegedActionException::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $($of($Exception::getCause())));
	out->writeFields();
}

void clinit$PrivilegedActionException($Class* class$) {
	$load($Exception);
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
	$loadClass(PrivilegedActionException, name, initialize, &_PrivilegedActionException_ClassInfo_, clinit$PrivilegedActionException, allocate$PrivilegedActionException);
	return class$;
}

$Class* PrivilegedActionException::class$ = nullptr;

	} // security
} // java