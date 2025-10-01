#ifndef _java_net_SocketPermissionCollection_h_
#define _java_net_SocketPermissionCollection_h_
//$ class java.net.SocketPermissionCollection
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
		class Map;
	}
}

namespace java {
	namespace net {

class SocketPermissionCollection : public ::java::security::PermissionCollection {
	$class(SocketPermissionCollection, 0, ::java::security::PermissionCollection)
public:
	SocketPermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::Map* perms = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x26AE13457F91BA1A;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // net
} // java

#endif // _java_net_SocketPermissionCollection_h_