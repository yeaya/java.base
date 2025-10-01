#ifndef _java_lang_ProcessEnvironment$StringValues_h_
#define _java_lang_ProcessEnvironment$StringValues_h_
//$ class java.lang.ProcessEnvironment$StringValues
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$StringValues : public ::java::util::AbstractCollection {
	$class(ProcessEnvironment$StringValues, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	ProcessEnvironment$StringValues();
	void init$(::java::util::Collection* c);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::Collection* c = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringValues_h_