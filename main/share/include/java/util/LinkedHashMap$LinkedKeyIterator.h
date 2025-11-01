#ifndef _java_util_LinkedHashMap$LinkedKeyIterator_h_
#define _java_util_LinkedHashMap$LinkedKeyIterator_h_
//$ class java.util.LinkedHashMap$LinkedKeyIterator
//$ extends java.util.LinkedHashMap$LinkedHashIterator
//$ implements java.util.Iterator

#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap$LinkedHashIterator.h>

namespace java {
	namespace util {
		class LinkedHashMap;
	}
}

namespace java {
	namespace util {

class $import LinkedHashMap$LinkedKeyIterator : public ::java::util::LinkedHashMap$LinkedHashIterator, public ::java::util::Iterator {
	$class(LinkedHashMap$LinkedKeyIterator, $NO_CLASS_INIT, ::java::util::LinkedHashMap$LinkedHashIterator, ::java::util::Iterator)
public:
	LinkedHashMap$LinkedKeyIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::LinkedHashMap* this$0);
	virtual $Object* next() override;
	virtual void remove() override;
	virtual $String* toString() override;
	::java::util::LinkedHashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$LinkedKeyIterator_h_