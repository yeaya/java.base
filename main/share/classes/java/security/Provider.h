#ifndef _java_security_Provider_h_
#define _java_security_Provider_h_
//$ class java.security.Provider
//$ extends java.util.Properties

#include <java/lang/Array.h>
#include <java/util/Properties.h>

#pragma push_macro("ALIAS_LENGTH")
#undef ALIAS_LENGTH
#pragma push_macro("ALIAS_PREFIX")
#undef ALIAS_PREFIX
#pragma push_macro("ALIAS_PREFIX_LOWER")
#undef ALIAS_PREFIX_LOWER
#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class Provider$Service;
		class Provider$ServiceKey;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Function;
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

class $export Provider : public ::java::util::Properties {
	$class(Provider, 0, ::java::util::Properties)
public:
	Provider();
	using ::java::util::Properties::load;
	using ::java::util::Properties::getProperty;
	void init$($String* name, double version, $String* info);
	void init$($String* name, $String* versionStr, $String* info);
	static void addEngine($String* name, bool sp, $String* paramName);
	void check($String* directive);
	void checkInitialized();
	bool checkLegacy(Object$* key);
	virtual void clear() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::security::Provider* configure($String* configArg);
	virtual ::java::util::Enumeration* elements() override;
	void ensureLegacyParsed();
	virtual ::java::util::Set* entrySet() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual ::java::security::Provider$Service* getDefaultSecureRandomService();
	static $String* getEngineName($String* s);
	virtual $String* getInfo();
	virtual $String* getName();
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual $String* getProperty($String* key) override;
	virtual ::java::security::Provider$Service* getService($String* type, $String* algorithm);
	virtual ::java::util::Set* getServices();
	static $StringArray* getTypeAndAlgorithm($String* key);
	virtual double getVersion();
	virtual $String* getVersionStr();
	void implClear();
	$Object* implCompute(Object$* key, ::java::util::function::BiFunction* remappingFunction);
	$Object* implComputeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction);
	$Object* implComputeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction);
	$Object* implMerge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction);
	$Object* implPut(Object$* key, Object$* value);
	void implPutAll(::java::util::Map* t);
	$Object* implPutIfAbsent(Object$* key, Object$* value);
	$Object* implRemove(Object$* key);
	bool implRemove(Object$* key, Object$* value);
	void implRemoveService(::java::security::Provider$Service* s);
	bool implReplace(Object$* key, Object$* oldValue, Object$* newValue);
	$Object* implReplace(Object$* key, Object$* value);
	void implReplaceAll(::java::util::function::BiFunction* function);
	virtual bool isConfigured();
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Enumeration* keys() override;
	virtual void load(::java::io::InputStream* inStream) override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	void parseLegacyPut($String* name, $String* value);
	static double parseVersionStr($String* s);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	void putId();
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	void putPropertyStrings(::java::security::Provider$Service* s);
	virtual void putService(::java::security::Provider$Service* s);
	void readObject(::java::io::ObjectInputStream* in);
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	void removeInvalidServices(::java::util::Map* map);
	void removePropertyStrings(::java::security::Provider$Service* s);
	virtual void removeService(::java::security::Provider$Service* s);
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual $String* toString() override;
	void updateSecureRandomEntries(bool doAdd, $String* s);
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0xC45A6F4D905EAFA5;
	static ::sun::security::util::Debug* debug;
	$String* name = nullptr;
	$String* info = nullptr;
	double version = 0.0;
	$String* versionStr = nullptr;
	::java::util::Set* entrySet$ = nullptr;
	int32_t entrySetCallCount = 0;
	bool initialized = false;
	static $ObjectArray* EMPTY;
	bool legacyChanged = false;
	$volatile(bool) servicesChanged = false;
	::java::util::Map* legacyStrings = nullptr;
	::java::util::Map* serviceMap = nullptr;
	::java::util::Set* prngAlgos = nullptr;
	::java::util::Map* legacyMap = nullptr;
	::java::util::Set* serviceSet = nullptr;
	static $String* ALIAS_PREFIX;
	static $String* ALIAS_PREFIX_LOWER;
	static int32_t ALIAS_LENGTH;
	static $volatile(::java::security::Provider$ServiceKey*) previousKey;
	static ::java::util::Map* knownEngines;
};

	} // security
} // java

#pragma pop_macro("ALIAS_LENGTH")
#pragma pop_macro("ALIAS_PREFIX")
#pragma pop_macro("ALIAS_PREFIX_LOWER")
#pragma pop_macro("EMPTY")

#endif // _java_security_Provider_h_