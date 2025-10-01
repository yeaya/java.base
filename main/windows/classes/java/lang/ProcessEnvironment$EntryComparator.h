#ifndef _java_lang_ProcessEnvironment$EntryComparator_h_
#define _java_lang_ProcessEnvironment$EntryComparator_h_
//$ class java.lang.ProcessEnvironment$EntryComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$EntryComparator : public ::java::util::Comparator {
	$class(ProcessEnvironment$EntryComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ProcessEnvironment$EntryComparator();
	void init$();
	int32_t compare(::java::util::Map$Entry* e1, ::java::util::Map$Entry* e2);
	virtual int32_t compare(Object$* e1, Object$* e2) override;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$EntryComparator_h_