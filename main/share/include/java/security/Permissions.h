#ifndef _java_security_Permissions_h_
#define _java_security_Permissions_h_
//$ class java.security.Permissions
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

class $import Permissions : public ::java::security::PermissionCollection {
	$class(Permissions, 0, ::java::security::PermissionCollection)
public:
	Permissions();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	::java::security::PermissionCollection* createPermissionCollection(::java::security::Permission* p, bool createEmpty);
	virtual ::java::util::Enumeration* elements() override;
	::java::security::PermissionCollection* getPermissionCollection(::java::security::Permission* p, bool createEmpty);
	::java::security::PermissionCollection* getUnresolvedPermissions(::java::security::Permission* p);
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* permsMap = nullptr;
	bool hasUnresolved = false;
	::java::security::PermissionCollection* allPermission = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x436D4B4DD2C80F50;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // security
} // java

#endif // _java_security_Permissions_h_