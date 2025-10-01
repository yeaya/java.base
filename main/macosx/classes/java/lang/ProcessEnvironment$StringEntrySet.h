#ifndef _java_lang_ProcessEnvironment$StringEntrySet_h_
#define _java_lang_ProcessEnvironment$StringEntrySet_h_
//$ class java.lang.ProcessEnvironment$StringEntrySet
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

class ProcessEnvironment$StringEntrySet : public ::java::util::AbstractSet {
	$class(ProcessEnvironment$StringEntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ProcessEnvironment$StringEntrySet();
	void init$(::java::util::Set* s);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	static ::java::util::Map$Entry* vvEntry(Object$* o);
	::java::util::Set* s = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringEntrySet_h_