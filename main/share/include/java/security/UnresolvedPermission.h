#ifndef _java_security_UnresolvedPermission_h_
#define _java_security_UnresolvedPermission_h_
//$ class java.security.UnresolvedPermission
//$ extends java.security.Permission

#include <java/lang/Array.h>
#include <java/security/Permission.h>

#pragma push_macro("PARAMS0")
#undef PARAMS0
#pragma push_macro("PARAMS1")
#undef PARAMS1
#pragma push_macro("PARAMS2")
#undef PARAMS2

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $import UnresolvedPermission : public ::java::security::Permission {
	$class(UnresolvedPermission, 0, ::java::security::Permission)
public:
	UnresolvedPermission();
	void init$($String* type, $String* name, $String* actions, $Array<::java::security::cert::Certificate>* certs);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	$String* getUnresolvedActions();
	$Array<::java::security::cert::Certificate>* getUnresolvedCerts();
	$String* getUnresolvedName();
	$String* getUnresolvedType();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	void readObject(::java::io::ObjectInputStream* ois);
	::java::security::Permission* resolve(::java::security::Permission* p, $Array<::java::security::cert::Certificate>* certs);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0xBD14E8FFD81AF4B2;
	static ::sun::security::util::Debug* debug;
	$String* type = nullptr;
	$String* name = nullptr;
	$String* actions = nullptr;
	$Array<::java::security::cert::Certificate>* certs = nullptr;
	static $ClassArray* PARAMS0;
	static $ClassArray* PARAMS1;
	static $ClassArray* PARAMS2;
};

	} // security
} // java

#pragma pop_macro("PARAMS0")
#pragma pop_macro("PARAMS1")
#pragma pop_macro("PARAMS2")

#endif // _java_security_UnresolvedPermission_h_