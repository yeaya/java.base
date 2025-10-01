#ifndef _java_util_Enumeration_h_
#define _java_util_Enumeration_h_
//$ interface java.util.Enumeration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class $export Enumeration : public ::java::lang::Object {
	$interface(Enumeration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Iterator* asIterator();
	virtual bool hasMoreElements() {return false;}
	virtual $Object* nextElement() {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Enumeration_h_