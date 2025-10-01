#ifndef _java_lang_reflect_UndeclaredThrowableException_h_
#define _java_lang_reflect_UndeclaredThrowableException_h_
//$ class java.lang.reflect.UndeclaredThrowableException
//$ extends java.lang.RuntimeException

#include <java/lang/Array.h>
#include <java/lang/RuntimeException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export UndeclaredThrowableException : public ::java::lang::RuntimeException {
	$class(UndeclaredThrowableException, 0, ::java::lang::RuntimeException)
public:
	UndeclaredThrowableException();
	void init$($Throwable* undeclaredThrowable);
	void init$($Throwable* undeclaredThrowable, $String* s);
	virtual $Throwable* getUndeclaredThrowable();
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x0494D8DC73F9FCFF;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	UndeclaredThrowableException(const UndeclaredThrowableException& e);
	UndeclaredThrowableException wrapper$();
	virtual void throwWrapper$() override;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_UndeclaredThrowableException_h_