#ifndef _java_lang_ProcessEnvironment$StringKeySet_h_
#define _java_lang_ProcessEnvironment$StringKeySet_h_
//$ class java.lang.ProcessEnvironment$StringKeySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$StringKeySet : public ::java::util::AbstractSet {
	$class(ProcessEnvironment$StringKeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ProcessEnvironment$StringKeySet();
	void init$(::java::util::Set* s);
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

#endif // _java_lang_ProcessEnvironment$StringKeySet_h_