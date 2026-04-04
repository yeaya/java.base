#ifndef _java_security_PermissionsHash_h_
#define _java_security_PermissionsHash_h_
//$ class java.security.PermissionsHash
//$ extends java.security.PermissionCollection

#include <java/lang/Array.h>
#include <java/security/PermissionCollection.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace security {

class PermissionsHash : public ::java::security::PermissionCollection {
	$class(PermissionsHash, 0, ::java::security::PermissionCollection)
public:
	PermissionsHash();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* permsMap = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x8a2665b4a63d5d40;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // security
} // java

#endif // _java_security_PermissionsHash_h_