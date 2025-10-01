#ifndef _java_util_Dictionary_h_
#define _java_util_Dictionary_h_
//$ class java.util.Dictionary
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace util {

class $import Dictionary : public ::java::lang::Object {
	$class(Dictionary, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	Dictionary();
	void init$();
	virtual ::java::util::Enumeration* elements() {return nullptr;}
	virtual $Object* get(Object$* key) {return nullptr;}
	virtual bool isEmpty() {return false;}
	virtual ::java::util::Enumeration* keys() {return nullptr;}
	virtual $Object* put(Object$* key, Object$* value) {return nullptr;}
	virtual $Object* remove(Object$* key) {return nullptr;}
	virtual int32_t size() {return 0;}
};

	} // util
} // java

#endif // _java_util_Dictionary_h_