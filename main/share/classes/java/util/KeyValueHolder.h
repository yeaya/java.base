#ifndef _java_util_KeyValueHolder_h_
#define _java_util_KeyValueHolder_h_
//$ class java.util.KeyValueHolder
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class KeyValueHolder : public ::java::util::Map$Entry {
	$class(KeyValueHolder, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	KeyValueHolder();
	void init$(Object$* k, Object$* v);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	$Object* key = nullptr;
	$Object* value = nullptr;
};

	} // util
} // java

#endif // _java_util_KeyValueHolder_h_