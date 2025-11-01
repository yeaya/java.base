#ifndef _java_util_Hashtable$Enumerator_h_
#define _java_util_Hashtable$Enumerator_h_
//$ class java.util.Hashtable$Enumerator
//$ extends java.util.Enumeration
//$ implements java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Hashtable;
		class Hashtable$Entry;
	}
}

namespace java {
	namespace util {

class Hashtable$Enumerator : public ::java::util::Enumeration, public ::java::util::Iterator {
	$class(Hashtable$Enumerator, $NO_CLASS_INIT, ::java::util::Enumeration, ::java::util::Iterator)
public:
	Hashtable$Enumerator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Hashtable* this$0, int32_t type, bool iterator);
	virtual bool hasMoreElements() override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	virtual void remove() override;
	virtual $String* toString() override;
	::java::util::Hashtable* this$0 = nullptr;
	$Array<::java::util::Hashtable$Entry>* table = nullptr;
	int32_t index = 0;
	::java::util::Hashtable$Entry* entry = nullptr;
	::java::util::Hashtable$Entry* lastReturned = nullptr;
	int32_t type = 0;
	bool iterator = false;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_Hashtable$Enumerator_h_