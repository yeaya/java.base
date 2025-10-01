#ifndef _java_security_PrivilegedActionException_h_
#define _java_security_PrivilegedActionException_h_
//$ class java.security.PrivilegedActionException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}

namespace java {
	namespace security {

class $import PrivilegedActionException : public ::java::lang::Exception {
	$class(PrivilegedActionException, 0, ::java::lang::Exception)
public:
	PrivilegedActionException();
	void init$(::java::lang::Exception* exception);
	virtual ::java::lang::Exception* getException();
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x418F53F65211F5BA;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	PrivilegedActionException(const PrivilegedActionException& e);
	PrivilegedActionException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_PrivilegedActionException_h_