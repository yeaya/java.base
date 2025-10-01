#ifndef _java_util_concurrent_ConcurrentHashMap$MapEntry_h_
#define _java_util_concurrent_ConcurrentHashMap$MapEntry_h_
//$ class java.util.concurrent.ConcurrentHashMap$MapEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$MapEntry : public ::java::util::Map$Entry {
	$class(ConcurrentHashMap$MapEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	ConcurrentHashMap$MapEntry();
	void init$(Object$* key, Object$* val, ::java::util::concurrent::ConcurrentHashMap* map);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	$Object* key = nullptr;
	$Object* val = nullptr;
	::java::util::concurrent::ConcurrentHashMap* map = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$MapEntry_h_