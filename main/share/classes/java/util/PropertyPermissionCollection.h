#ifndef _java_util_PropertyPermissionCollection_h_
#define _java_util_PropertyPermissionCollection_h_
//$ class java.util.PropertyPermissionCollection
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
	namespace util {

class PropertyPermissionCollection : public ::java::security::PermissionCollection {
	$class(PropertyPermissionCollection, 0, ::java::security::PermissionCollection)
public:
	PropertyPermissionCollection();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
	bool all_allowed = false;
	static const int64_t serialVersionUID = (int64_t)0x615b395a4e354ae7;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // util
} // java

#endif // _java_util_PropertyPermissionCollection_h_