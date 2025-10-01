#ifndef _sun_security_jca_GetInstance_h_
#define _sun_security_jca_GetInstance_h_
//$ class sun.security.jca.GetInstance
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
		class Provider$Service;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class GetInstance$Instance;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $export GetInstance : public ::java::lang::Object {
	$class(GetInstance, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetInstance();
	void init$();
	static void checkSuperClass(::java::security::Provider$Service* s, $Class* subClass, $Class* superClass);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, $String* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param, $String* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, ::java::security::Provider* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param, ::java::security::Provider* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance(::java::security::Provider$Service* s, $Class* clazz);
	static ::sun::security::jca::GetInstance$Instance* getInstance(::java::security::Provider$Service* s, $Class* clazz, Object$* param);
	static ::java::security::Provider$Service* getService($String* type, $String* algorithm);
	static ::java::security::Provider$Service* getService($String* type, $String* algorithm, $String* provider);
	static ::java::security::Provider$Service* getService($String* type, $String* algorithm, ::java::security::Provider* provider);
	static ::java::util::List* getServices($String* type, $String* algorithm);
	static ::java::util::List* getServices($String* type, ::java::util::List* algorithms);
	static ::java::util::List* getServices(::java::util::List* ids);
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_GetInstance_h_