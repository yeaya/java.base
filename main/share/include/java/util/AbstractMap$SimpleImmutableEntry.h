#ifndef _java_util_AbstractMap$SimpleImmutableEntry_h_
#define _java_util_AbstractMap$SimpleImmutableEntry_h_
//$ class java.util.AbstractMap$SimpleImmutableEntry
//$ extends java.util.Map$Entry
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Map$Entry.h>

namespace java {
	namespace util {

class $import AbstractMap$SimpleImmutableEntry : public ::java::util::Map$Entry, public ::java::io::Serializable {
	$class(AbstractMap$SimpleImmutableEntry, $NO_CLASS_INIT, ::java::util::Map$Entry, ::java::io::Serializable)
public:
	AbstractMap$SimpleImmutableEntry();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static const int64_t serialVersionUID = (int64_t)0x6310708932E65F81;
	$Object* key = nullptr;
	$Object* value = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap$SimpleImmutableEntry_h_