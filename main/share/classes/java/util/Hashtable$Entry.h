#ifndef _java_util_Hashtable$Entry_h_
#define _java_util_Hashtable$Entry_h_
//$ class java.util.Hashtable$Entry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class Hashtable$Entry : public ::java::util::Map$Entry {
	$class(Hashtable$Entry, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	Hashtable$Entry();
	void init$(int32_t hash, Object$* key, Object$* value, ::java::util::Hashtable$Entry* next);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	int32_t hash = 0;
	$Object* key = nullptr;
	$Object* value = nullptr;
	::java::util::Hashtable$Entry* next = nullptr;
};

	} // util
} // java

#endif // _java_util_Hashtable$Entry_h_