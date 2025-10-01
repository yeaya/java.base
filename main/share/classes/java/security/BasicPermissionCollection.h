#ifndef _java_security_BasicPermissionCollection_h_
#define _java_security_BasicPermissionCollection_h_
//$ class java.security.BasicPermissionCollection
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

class BasicPermissionCollection : public ::java::security::PermissionCollection {
	$class(BasicPermissionCollection, 0, ::java::security::PermissionCollection)
public:
	BasicPermissionCollection();
	void init$($Class* clazz);
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x0A4287048DEDE3C7;
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
	bool all_allowed = false;
	$Class* permClass = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // security
} // java

#endif // _java_security_BasicPermissionCollection_h_