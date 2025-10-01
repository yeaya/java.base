#ifndef _java_io_FilePermissionCollection_h_
#define _java_io_FilePermissionCollection_h_
//$ class java.io.FilePermissionCollection
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
	namespace io {

class FilePermissionCollection : public ::java::security::PermissionCollection {
	$class(FilePermissionCollection, 0, ::java::security::PermissionCollection)
public:
	FilePermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) override;
	virtual ::java::util::Enumeration* elements() override;
	virtual bool implies(::java::security::Permission* permission) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::concurrent::ConcurrentHashMap* perms = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x1E92797DD48E55A9;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // io
} // java

#endif // _java_io_FilePermissionCollection_h_