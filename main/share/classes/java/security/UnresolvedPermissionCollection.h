#ifndef _java_security_UnresolvedPermissionCollection_h_
#define _java_security_UnresolvedPermissionCollection_h_
//$ class java.security.UnresolvedPermissionCollection
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
		class List;
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

class UnresolvedPermissionCollection : public ::java::security::PermissionCollection {
	$class(UnresolvedPermissionCollection, 0, ::java::security::PermissionCollection)
public:
	UnresolvedPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	::java::util::List* getUnresolvedPermissions(::java::security::Permission* p);
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x9C692ECD5984B390;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // security
} // java

#endif // _java_security_UnresolvedPermissionCollection_h_