#ifndef _java_util_LinkedHashMap$Entry_h_
#define _java_util_LinkedHashMap$Entry_h_
//$ class java.util.LinkedHashMap$Entry
//$ extends java.util.HashMap$Node

#include <java/util/HashMap$Node.h>

namespace java {
	namespace util {

class $import LinkedHashMap$Entry : public ::java::util::HashMap$Node {
	$class(LinkedHashMap$Entry, $PRELOAD | $NO_CLASS_INIT, ::java::util::HashMap$Node)
public:
	LinkedHashMap$Entry();
	void init$(int32_t hash, Object$* key, Object$* value, ::java::util::HashMap$Node* next);
	::java::util::LinkedHashMap$Entry* before = nullptr;
	::java::util::LinkedHashMap$Entry* after = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$Entry_h_