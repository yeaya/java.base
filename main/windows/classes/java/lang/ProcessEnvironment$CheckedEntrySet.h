#ifndef _java_lang_ProcessEnvironment$CheckedEntrySet_h_
#define _java_lang_ProcessEnvironment$CheckedEntrySet_h_
//$ class java.lang.ProcessEnvironment$CheckedEntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Map$Entry;
		class Set;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$CheckedEntrySet : public ::java::util::AbstractSet {
	$class(ProcessEnvironment$CheckedEntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ProcessEnvironment$CheckedEntrySet();
	void init$(::java::util::Set* s);
	static ::java::util::Map$Entry* checkedEntry(Object$* o);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::Set* s = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$CheckedEntrySet_h_