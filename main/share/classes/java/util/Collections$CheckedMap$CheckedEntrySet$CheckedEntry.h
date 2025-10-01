#ifndef _java_util_Collections$CheckedMap$CheckedEntrySet$CheckedEntry_h_
#define _java_util_Collections$CheckedMap$CheckedEntrySet$CheckedEntry_h_
//$ class java.util.Collections$CheckedMap$CheckedEntrySet$CheckedEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class Collections$CheckedMap$CheckedEntrySet$CheckedEntry : public ::java::util::Map$Entry {
	$class(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	Collections$CheckedMap$CheckedEntrySet$CheckedEntry();
	void init$(::java::util::Map$Entry* e, $Class* valueType);
	$String* badValueMsg(Object$* value);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	::java::util::Map$Entry* e = nullptr;
	$Class* valueType = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedMap$CheckedEntrySet$CheckedEntry_h_