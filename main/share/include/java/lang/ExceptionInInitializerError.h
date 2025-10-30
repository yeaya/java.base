#ifndef _java_lang_ExceptionInInitializerError_h_
#define _java_lang_ExceptionInInitializerError_h_
//$ class java.lang.ExceptionInInitializerError
//$ extends java.lang.LinkageError

#include <java/lang/Array.h>
#include <java/lang/LinkageError.h>

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

class $import ExceptionInInitializerError : public ::java::lang::LinkageError {
	$class(ExceptionInInitializerError, 0, ::java::lang::LinkageError)
public:
	ExceptionInInitializerError();
	void init$();
	void init$($Throwable* thrown);
	void init$($String* s);
	virtual $Throwable* getException();
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x151E34D009A19380;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	ExceptionInInitializerError(const ExceptionInInitializerError& e);
	virtual void throw$() override;
	inline ExceptionInInitializerError* operator ->() {
		return (ExceptionInInitializerError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ExceptionInInitializerError_h_