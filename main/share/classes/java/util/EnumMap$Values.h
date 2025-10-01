#ifndef _java_util_EnumMap$Values_h_
#define _java_util_EnumMap$Values_h_
//$ class java.util.EnumMap$Values
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class EnumMap;
		class Iterator;
	}
}

namespace java {
	namespace util {

class EnumMap$Values : public ::java::util::AbstractCollection {
	$class(EnumMap$Values, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	EnumMap$Values();
	void init$(::java::util::EnumMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::EnumMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$Values_h_