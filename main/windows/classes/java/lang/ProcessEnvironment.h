#ifndef _java_lang_ProcessEnvironment_h_
#define _java_lang_ProcessEnvironment_h_
//$ class java.lang.ProcessEnvironment
//$ extends java.util.HashMap

#include <java/util/HashMap.h>

#pragma push_macro("MIN_NAME_LENGTH")
#undef MIN_NAME_LENGTH

namespace java {
	namespace lang {
		class ProcessEnvironment$EntryComparator;
		class ProcessEnvironment$NameComparator;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment : public ::java::util::HashMap {
	$class(ProcessEnvironment, 0, ::java::util::HashMap)
public:
	ProcessEnvironment();
	void init$();
	void init$(int32_t capacity);
	static void addToEnv(::java::lang::StringBuilder* sb, $String* name, $String* val);
	static void addToEnvIfSet(::java::lang::StringBuilder* sb, $String* name);
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	static ::java::util::Map* emptyEnvironment(int32_t capacity);
	virtual ::java::util::Set* entrySet() override;
	static ::java::util::Map* environment();
	static $String* environmentBlock();
	virtual $Object* get(Object$* key) override;
	static $String* getenv($String* name);
	static ::java::util::Map* getenv();
	virtual ::java::util::Set* keySet() override;
	static $String* nonNullString(Object$* o);
	$String* put($String* key, $String* value);
	virtual $Object* put(Object$* key, Object$* value) override;
	using ::java::util::HashMap::remove;
	virtual $Object* remove(Object$* key) override;
	$String* toEnvironmentBlock();
	static $String* toEnvironmentBlock(::java::util::Map* map);
	static $String* validateName($String* name);
	static $String* validateValue($String* value);
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x90BAE96840FD2AD8;
	static const int32_t MIN_NAME_LENGTH = 1;
	static ::java::lang::ProcessEnvironment$NameComparator* nameComparator;
	static ::java::lang::ProcessEnvironment$EntryComparator* entryComparator;
	static ::java::lang::ProcessEnvironment* theEnvironment;
	static ::java::util::Map* theUnmodifiableEnvironment;
	static ::java::util::Map* theCaseInsensitiveEnvironment;
};

	} // lang
} // java

#pragma pop_macro("MIN_NAME_LENGTH")

#endif // _java_lang_ProcessEnvironment_h_