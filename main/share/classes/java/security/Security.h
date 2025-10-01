#ifndef _java_security_Security_h_
#define _java_security_Security_h_
//$ class java.security.Security
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace security {
		class Provider;
		class Security$ProviderProperty;
	}
}
namespace java {
	namespace util {
		class LinkedHashSet;
		class Map;
		class Properties;
		class Set;
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

class $export Security : public ::java::lang::Object {
	$class(Security, 0, ::java::lang::Object)
public:
	Security();
	void init$();
	static int32_t addProvider(::java::security::Provider* provider);
	static void check($String* directive);
	static void checkInsertProvider($String* name);
	static $String* getAlgorithmProperty($String* algName, $String* propName);
	static ::java::util::Set* getAlgorithms($String* serviceName);
	static ::java::util::LinkedHashSet* getAllQualifyingCandidates($String* filterKey, $String* filterValue, $Array<::java::security::Provider>* allProviders);
	static $StringArray* getFilterComponents($String* filterKey, $String* filterValue);
	static $ObjectArray* getImpl($String* algorithm, $String* type, $String* provider);
	static $ObjectArray* getImpl($String* algorithm, $String* type, $String* provider, Object$* params);
	static $ObjectArray* getImpl($String* algorithm, $String* type, ::java::security::Provider* provider);
	static $ObjectArray* getImpl($String* algorithm, $String* type, ::java::security::Provider* provider, Object$* params);
	static $String* getProperty($String* key);
	static ::java::security::Provider* getProvider($String* name);
	static ::java::security::Security$ProviderProperty* getProviderProperty($String* key);
	static $String* getProviderProperty($String* key, ::java::security::Provider* provider);
	static $Array<::java::security::Provider>* getProviders();
	static $Array<::java::security::Provider>* getProviders($String* filter);
	static $Array<::java::security::Provider>* getProviders(::java::util::Map* filter);
	static ::java::util::LinkedHashSet* getProvidersNotUsingCache($String* serviceName, $String* algName, $String* attrName, $String* filterValue, $Array<::java::security::Provider>* allProviders);
	static $Class* getSpiClass($String* type);
	static void initialize();
	static void initializeStatic();
	static int32_t insertProviderAt(::java::security::Provider* provider, int32_t position);
	static void invalidateSMCache($String* key);
	static bool isConstraintSatisfied($String* attribute, $String* value, $String* prop);
	static bool isCriterionSatisfied(::java::security::Provider* prov, $String* serviceName, $String* algName, $String* attrName, $String* filterValue);
	static bool isStandardAttr($String* attribute);
	static void removeProvider($String* name);
	static ::java::io::File* securityPropFile($String* filename);
	static void setProperty($String* key, $String* datum);
	static ::sun::security::util::Debug* sdebug;
	static ::java::util::Properties* props;
	static ::java::util::Map* spiMap;
};

	} // security
} // java

#endif // _java_security_Security_h_