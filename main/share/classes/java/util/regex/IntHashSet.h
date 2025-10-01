#ifndef _java_util_regex_IntHashSet_h_
#define _java_util_regex_IntHashSet_h_
//$ class java.util.regex.IntHashSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace regex {

class IntHashSet : public ::java::lang::Object {
	$class(IntHashSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntHashSet();
	void init$();
	virtual void add(int32_t i);
	virtual void clear();
	virtual bool contains(int32_t i);
	void expand();
	$ints* entries = nullptr;
	$ints* hashes = nullptr;
	int32_t pos = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_IntHashSet_h_