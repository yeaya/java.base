#ifndef _java_util_PropertyPermission_h_
#define _java_util_PropertyPermission_h_
//$ class java.util.PropertyPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace security {
		class Permission;
		class PermissionCollection;
	}
}

namespace java {
	namespace util {

class $export PropertyPermission : public ::java::security::BasicPermission {
	$class(PropertyPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	PropertyPermission();
	void init$($String* name, $String* actions);
	void init$($String* name, int32_t mask);
	virtual bool equals(Object$* obj) override;
	static $String* getActions(int32_t mask);
	virtual $String* getActions() override;
	static int32_t getMask($String* actions);
	int32_t getMask();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	void init(int32_t mask);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t READ = 1;
	static const int32_t WRITE = 2;
	static const int32_t ALL = 3; // READ | WRITE
	static const int32_t NONE = 0;
	int32_t mask = 0;
	$String* actions = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0C49B5EBA24D7EC3;
};

	} // util
} // java

#pragma pop_macro("READ")
#pragma pop_macro("ALL")
#pragma pop_macro("NONE")
#pragma pop_macro("WRITE")

#endif // _java_util_PropertyPermission_h_