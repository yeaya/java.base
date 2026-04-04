#ifndef _java_lang_ClassNotFoundException_h_
#define _java_lang_ClassNotFoundException_h_
//$ class java.lang.ClassNotFoundException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/Array.h>
#include <java/lang/ReflectiveOperationException.h>

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

class $import ClassNotFoundException : public ::java::lang::ReflectiveOperationException {
	$class(ClassNotFoundException, 0, ::java::lang::ReflectiveOperationException)
public:
	ClassNotFoundException();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* ex);
	virtual $Throwable* getException();
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x7f5acd663ed4208e;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	ClassNotFoundException(const ClassNotFoundException& e);
	virtual void throw$() override;
	inline ClassNotFoundException* operator ->() const {
		return (ClassNotFoundException*)throwing$;
	}
	inline operator ClassNotFoundException*() const {
		return (ClassNotFoundException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassNotFoundException_h_