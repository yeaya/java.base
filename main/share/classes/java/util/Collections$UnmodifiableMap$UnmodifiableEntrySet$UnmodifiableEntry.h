#ifndef _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_h_
#define _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_h_
//$ class java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry : public ::java::util::Map$Entry {
	$class(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry();
	void init$(::java::util::Map$Entry* e);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	::java::util::Map$Entry* e = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_h_