#ifndef _java_util_TreeMap$Entry_h_
#define _java_util_TreeMap$Entry_h_
//$ class java.util.TreeMap$Entry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class $export TreeMap$Entry : public ::java::util::Map$Entry {
	$class(TreeMap$Entry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	TreeMap$Entry();
	void init$(Object$* key, Object$* value, ::java::util::TreeMap$Entry* parent);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	$Object* key = nullptr;
	$Object* value = nullptr;
	::java::util::TreeMap$Entry* left = nullptr;
	::java::util::TreeMap$Entry* right = nullptr;
	::java::util::TreeMap$Entry* parent = nullptr;
	bool color = false;
};

	} // util
} // java

#endif // _java_util_TreeMap$Entry_h_