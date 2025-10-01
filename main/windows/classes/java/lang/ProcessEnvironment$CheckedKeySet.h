#ifndef _java_lang_ProcessEnvironment$CheckedKeySet_h_
#define _java_lang_ProcessEnvironment$CheckedKeySet_h_
//$ class java.lang.ProcessEnvironment$CheckedKeySet
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

class ProcessEnvironment$CheckedKeySet : public ::java::util::AbstractSet {
	$class(ProcessEnvironment$CheckedKeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ProcessEnvironment$CheckedKeySet();
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

#endif // _java_lang_ProcessEnvironment$CheckedKeySet_h_