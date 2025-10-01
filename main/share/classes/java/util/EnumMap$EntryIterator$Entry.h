#ifndef _java_util_EnumMap$EntryIterator$Entry_h_
#define _java_util_EnumMap$EntryIterator$Entry_h_
//$ class java.util.EnumMap$EntryIterator$Entry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {
		class EnumMap$EntryIterator;
	}
}

namespace java {
	namespace util {

class EnumMap$EntryIterator$Entry : public ::java::util::Map$Entry {
	$class(EnumMap$EntryIterator$Entry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	EnumMap$EntryIterator$Entry();
	void init$(::java::util::EnumMap$EntryIterator* this$1, int32_t index);
	void checkIndexForEntryUse();
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	::java::util::EnumMap$EntryIterator* this$1 = nullptr;
	int32_t index = 0;
};

	} // util
} // java

#endif // _java_util_EnumMap$EntryIterator$Entry_h_