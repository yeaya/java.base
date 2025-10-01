#ifndef _java_security_PermissionCollection_h_
#define _java_security_PermissionCollection_h_
//$ class java.security.PermissionCollection
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace security {

class $import PermissionCollection : public ::java::io::Serializable {
	$class(PermissionCollection, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PermissionCollection();
	void init$();
	virtual void add(::java::security::Permission* permission) {}
	virtual ::java::util::Enumeration* elements() {return nullptr;}
	virtual ::java::util::stream::Stream* elementsAsStream();
	virtual bool implies(::java::security::Permission* permission) {return false;}
	virtual bool isReadOnly();
	virtual void setReadOnly();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xA2A4DAD66A180929;
	$volatile(bool) readOnly = false;
};

	} // security
} // java

#endif // _java_security_PermissionCollection_h_