#ifndef _javax_security_auth_Subject_h_
#define _javax_security_auth_Subject_h_
//$ class javax.security.auth.Subject
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("NULL_PD_ARRAY")
#undef NULL_PD_ARRAY
#pragma push_macro("PRINCIPAL_SET")
#undef PRINCIPAL_SET
#pragma push_macro("PRIV_CREDENTIAL_SET")
#undef PRIV_CREDENTIAL_SET
#pragma push_macro("PUB_CREDENTIAL_SET")
#undef PUB_CREDENTIAL_SET

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class PrivilegedAction;
		class PrivilegedExceptionAction;
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Collection;
		class LinkedList;
		class Set;
	}
}

namespace javax {
	namespace security {
		namespace auth {

class $import Subject : public ::java::io::Serializable {
	$class(Subject, 0, ::java::io::Serializable)
public:
	Subject();
	void init$();
	void init$(bool readOnly, ::java::util::Set* principals, ::java::util::Set* pubCredentials, ::java::util::Set* privCredentials);
	static ::java::util::LinkedList* collectionNullClean(::java::util::Collection* coll);
	static ::java::security::AccessControlContext* createContext(::javax::security::auth::Subject* subject, ::java::security::AccessControlContext* acc);
	static $Object* doAs(::javax::security::auth::Subject* subject, ::java::security::PrivilegedAction* action);
	static $Object* doAs(::javax::security::auth::Subject* subject, ::java::security::PrivilegedExceptionAction* action);
	static $Object* doAsPrivileged(::javax::security::auth::Subject* subject, ::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* acc);
	static $Object* doAsPrivileged(::javax::security::auth::Subject* subject, ::java::security::PrivilegedExceptionAction* action, ::java::security::AccessControlContext* acc);
	virtual bool equals(Object$* o) override;
	int32_t getCredHashCode(Object$* o);
	::java::util::Set* getPrincipals();
	::java::util::Set* getPrincipals($Class* c);
	::java::util::Set* getPrivateCredentials();
	::java::util::Set* getPrivateCredentials($Class* c);
	::java::util::Set* getPublicCredentials();
	::java::util::Set* getPublicCredentials($Class* c);
	static ::javax::security::auth::Subject* getSubject(::java::security::AccessControlContext* acc);
	virtual int32_t hashCode() override;
	bool isReadOnly();
	void readObject(::java::io::ObjectInputStream* s);
	void setReadOnly();
	virtual $String* toString() override;
	$String* toString(bool includePrivateCredentials);
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x8CB232930033FA68;
	::java::util::Set* principals = nullptr;
	::java::util::Set* pubCredentials = nullptr;
	::java::util::Set* privCredentials = nullptr;
	$volatile(bool) readOnly = false;
	static const int32_t PRINCIPAL_SET = 1;
	static const int32_t PUB_CREDENTIAL_SET = 2;
	static const int32_t PRIV_CREDENTIAL_SET = 3;
	static $Array<::java::security::ProtectionDomain>* NULL_PD_ARRAY;
};

		} // auth
	} // security
} // javax

#pragma pop_macro("NULL_PD_ARRAY")
#pragma pop_macro("PRINCIPAL_SET")
#pragma pop_macro("PRIV_CREDENTIAL_SET")
#pragma pop_macro("PUB_CREDENTIAL_SET")

#endif // _javax_security_auth_Subject_h_