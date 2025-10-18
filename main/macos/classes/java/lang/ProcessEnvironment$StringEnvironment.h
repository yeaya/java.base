#ifndef _java_lang_ProcessEnvironment$StringEnvironment_h_
#define _java_lang_ProcessEnvironment$StringEnvironment_h_
//$ class java.lang.ProcessEnvironment$StringEnvironment
//$ extends java.util.AbstractMap

#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>

namespace java {
	namespace lang {
		class ProcessEnvironment$Value;
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

class ProcessEnvironment$StringEnvironment : public ::java::util::AbstractMap {
	$class(ProcessEnvironment$StringEnvironment, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	ProcessEnvironment$StringEnvironment();
	void init$(::java::util::Map* m);
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $String* put($String* key, $String* value);
	virtual $Object* put(Object$* key, Object$* value) override;
	using ::java::util::AbstractMap::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual $bytes* toEnvironmentBlock($ints* envc);
	using ::java::util::AbstractMap::toString;
	static $String* toString(::java::lang::ProcessEnvironment$Value* v);
	virtual ::java::util::Collection* values() override;
	::java::util::Map* m = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringEnvironment_h_