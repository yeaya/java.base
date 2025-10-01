#ifndef _ExpandingMap_h_
#define _ExpandingMap_h_
//$ class ExpandingMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export ExpandingMap : public ::java::lang::Object {
	$class(ExpandingMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExpandingMap();
	void init$();
	static void fillBuffer(::java::nio::ByteBuffer* buf, int32_t from);
	static void main($StringArray* args);
};

#endif // _ExpandingMap_h_