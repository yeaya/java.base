#ifndef _java_util_jar_Attributes_h_
#define _java_util_jar_Attributes_h_
//$ class java.util.jar.Attributes
//$ extends java.util.Map
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/Map.h>

namespace java {
	namespace io {
		class DataOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes$Name;
			class Manifest$FastInputStream;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $export Attributes : public ::java::util::Map, public ::java::lang::Cloneable {
	$class(Attributes, $NO_CLASS_INIT, ::java::util::Map, ::java::lang::Cloneable)
public:
	Attributes();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(int32_t size);
	void init$(::java::util::jar::Attributes* attr);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* name) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(Object$* name) override;
	virtual $String* getValue($String* name);
	virtual $String* getValue(::java::util::jar::Attributes$Name* name);
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put(Object$* name, Object$* value) override;
	virtual void putAll(::java::util::Map* attr) override;
	virtual $String* putValue($String* name, $String* value);
	virtual void read(::java::util::jar::Manifest$FastInputStream* is, $bytes* lbuf);
	virtual int32_t read(::java::util::jar::Manifest$FastInputStream* is, $bytes* lbuf, $String* filename, int32_t lineNumber);
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* name) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	virtual void write(::java::io::DataOutputStream* out);
	virtual void writeMain(::java::io::DataOutputStream* out);
	::java::util::Map* map = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_Attributes_h_