#ifndef _java_util_AbstractMap$SimpleEntry_h_
#define _java_util_AbstractMap$SimpleEntry_h_
//$ class java.util.AbstractMap$SimpleEntry
//$ extends java.util.Map$Entry
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class $export AbstractMap$SimpleEntry : public ::java::util::Map$Entry, public ::java::io::Serializable {
	$class(AbstractMap$SimpleEntry, $NO_CLASS_INIT, ::java::util::Map$Entry, ::java::io::Serializable)
public:
	AbstractMap$SimpleEntry();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(Object$* key, Object$* value);
	void init$(::java::util::Map$Entry* entry);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x8A0AECA5FC56801F;
	$Object* key = nullptr;
	$Object* value = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap$SimpleEntry_h_