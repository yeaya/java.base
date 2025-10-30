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

class $export ClassNotFoundException : public ::java::lang::ReflectiveOperationException {
	$class(ClassNotFoundException, 0, ::java::lang::ReflectiveOperationException)
public:
	ClassNotFoundException();
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* ex);
	virtual $Throwable* getException();
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x7F5ACD663ED4208E;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	ClassNotFoundException(const ClassNotFoundException& e);
	virtual void throw$() override;
	inline ClassNotFoundException* operator ->() {
		return (ClassNotFoundException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassNotFoundException_h_