#ifndef _java_security_Provider$Service_h_
#define _java_security_Provider$Service_h_
//$ class java.security.Provider$Service
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS0")
#undef CLASS0

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace security {
		class Key;
		class Provider;
		class Provider$EngineDescription;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace security {

class $import Provider$Service : public ::java::lang::Object {
	$class(Provider$Service, 0, ::java::lang::Object)
public:
	Provider$Service();
	void init$(::java::security::Provider* provider, $String* type, $String* algorithm);
	void init$(::java::security::Provider* provider, $String* type, $String* algorithm, $String* className, ::java::util::List* aliases, ::java::util::Map* attributes);
	void addAlias($String* alias);
	virtual void addAttribute($String* type, $String* value);
	$String* getAlgorithm();
	::java::util::List* getAliases();
	$String* getAttribute($String* name);
	$String* getClassName();
	::java::lang::reflect::Constructor* getDefaultConstructor();
	$Class* getImplClass();
	$Class* getKeyClass($String* name);
	::java::security::Provider* getProvider();
	$String* getType();
	bool hasKeyAttributes();
	bool isValid();
	virtual $Object* newInstance(Object$* constructorParameter);
	$Object* newInstanceOf();
	$Object* newInstanceUtil($Class* ctrParamClz, Object$* ctorParamObj);
	bool supportsKeyClass(::java::security::Key* key);
	bool supportsKeyFormat(::java::security::Key* key);
	virtual bool supportsParameter(Object$* parameter);
	virtual $String* toString() override;
	$String* type = nullptr;
	$String* algorithm = nullptr;
	$String* className = nullptr;
	::java::security::Provider* provider = nullptr;
	::java::util::List* aliases = nullptr;
	::java::util::Map* attributes = nullptr;
	::java::security::Provider$EngineDescription* engineDescription = nullptr;
	$Object* classCache = nullptr;
	$Object* constructorCache = nullptr;
	$volatile(::java::lang::Boolean*) hasKeyAttributes$ = nullptr;
	$StringArray* supportedFormats = nullptr;
	$ClassArray* supportedClasses = nullptr;
	bool registered = false;
	static $ClassArray* CLASS0;
};

	} // security
} // java

#pragma pop_macro("CLASS0")

#endif // _java_security_Provider$Service_h_