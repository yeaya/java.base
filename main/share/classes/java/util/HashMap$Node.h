#ifndef _java_util_HashMap$Node_h_
#define _java_util_HashMap$Node_h_
//$ class java.util.HashMap$Node
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class $export HashMap$Node : public ::java::util::Map$Entry {
	$class(HashMap$Node, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	HashMap$Node();
	void init$(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* next);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* newValue) override;
	virtual $String* toString() override;
	int32_t hash = 0;
	$Object* key = nullptr;
	$Object* value = nullptr;
	::java::util::HashMap$Node* next = nullptr;
};

	} // util
} // java

#endif // _java_util_HashMap$Node_h_